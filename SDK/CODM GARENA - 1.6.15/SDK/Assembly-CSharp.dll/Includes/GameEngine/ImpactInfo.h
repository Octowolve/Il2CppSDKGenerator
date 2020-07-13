#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ImpactInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ImpactInfo"));
	}

	template <typename T = int32_t> static T& count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& HitObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& HitCollider() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& RealHitTarget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& HitLocation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& HitNormal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& RayDir() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ActorLayer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& ThroughWallCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& ThroughPlayerCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& HitFragCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& HitGroup() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& HitPhysicMaterial() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& OutLocation() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& ShouldSpawnImpactEffect() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& m_CacheList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& FindSameImpactInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloneForCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Alloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T OnRecycle() {
		return ((T (*)(ImpactInfo*))(Il2CppBase() + 0x3703118))(this);
	}
	template <typename T = bool> T IsFirstHit() {
		return ((T (*)(ImpactInfo*))(Il2CppBase() + 0x3703224))(this);
	}
	template <typename T = uintptr_t> T CloneForCache() {
		return ((T (*)(ImpactInfo*))(Il2CppBase() + 0x3703310))(this);
	}
	template <typename T = uintptr_t> static T Alloc() {
		return ((T (*)(void *))(Il2CppBase() + 0x37034C0))(0);
	}
	template <typename T = void> static T Recycle(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x370238C))(0, info);
	}
	template <typename T = void> static T Release() {
		return ((T (*)(void *))(Il2CppBase() + 0x37036F0))(0);
	}

};

}
