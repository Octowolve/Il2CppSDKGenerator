#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponDroppedPickUpProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponDroppedPickUpProjectile"));
	}

	template <typename T = Il2CppVector3> T& m_CameraPositionThrowOffset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_InitSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_GravityScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_WeaponPickUpAssetID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_WeaponPickUpAssetPositionOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_WeaponPickUpAssetRotationOffset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_LifeSpan() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_ModelScale() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponDroppedPickUpProjectile*, uintptr_t, bool))(Il2CppBase() + 0x2EB9CB0))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponDroppedPickUpProjectile*))(Il2CppBase() + 0x2EB9DDC))(this);
	}

};

}
