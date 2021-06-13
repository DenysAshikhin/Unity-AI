using System;
using Unity.Physics;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Collections;
using UnityEngine;
using Unity.Transforms;
using Collider = Unity.Physics.Collider;

public class ShipSpawner : MonoBehaviour
{
    public GameObject prefab;
    public static int MAX_X = 1;
    public static int MAX_Y ;

    void OnEnable() { }

    public static void RandomSpawn(ref NativeArray<float3> positions, ref NativeArray<quaternion> rotations)
    {
        var count = positions.Length;
        // initialize the seed of the random number generator 
        Unity.Mathematics.Random random = new Unity.Mathematics.Random();
        random.InitState(2);
        for (int i = 0; i < count; i++)
        {
            positions[i] = random.NextFloat3(0, MAX_X);
            rotations[i] = random.NextQuaternionRotation();
        }
    }

    void Start()
    {
        // Create entity prefab from the game object hierarchy once
        BlobAssetStore blob = new BlobAssetStore();
        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, blob);
        Entity sourceEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy(prefab, settings);
        var entityManager = World.DefaultGameObjectInjectionWorld.EntityManager;

        var positions = new NativeArray<float3>(2, Allocator.Temp);
        var rotations = new NativeArray<quaternion>(2, Allocator.Temp);
        RandomSpawn(ref positions, ref rotations);

        // BlobAssetReference<Collider> sourceCollider = entityManager.GetComponentData<PhysicsCollider>(sourceEntity).Value;
        for (int i = 0; i < 2; i++)
        {
            var instance = entityManager.Instantiate(sourceEntity);
            entityManager.SetComponentData(instance, new Translation { Value = positions[i] });
            entityManager.SetComponentData(instance, new Rotation { Value = rotations[i] });
            // entityManager.SetComponentData(instance, new PhysicsCollider { Value = sourceCollider });
        }

        positions.Dispose();
        rotations.Dispose();
    }
}