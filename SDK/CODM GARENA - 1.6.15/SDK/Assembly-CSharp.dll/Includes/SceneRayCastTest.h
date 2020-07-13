#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneRayCastTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneRayCastTest"));
	}

	template <typename T = float> T& RayDistance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& UseraceWorldStatic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SphereRadius() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& UseQueriesHitBackfaces() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsHit() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppVector3> T& m_HitPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_HitNormal() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForwardRayTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForwardSphereRayTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForwardRayTestWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T ClearHit() {
		return ((T (*)(SceneRayCastTest*))(Il2CppBase() + 0x3BFE010))(this);
	}
	template <typename T = void> T ForwardRayTest(bool forceUseHitBack) {
		return ((T (*)(SceneRayCastTest*, bool))(Il2CppBase() + 0x3BFE0B4))(this, forceUseHitBack);
	}
	template <typename T = void> T ForwardSphereRayTest() {
		return ((T (*)(SceneRayCastTest*))(Il2CppBase() + 0x3BFE580))(this);
	}
	template <typename T = void> T ForwardRayTestWater() {
		return ((T (*)(SceneRayCastTest*))(Il2CppBase() + 0x3BFEA20))(this);
	}

};

}
