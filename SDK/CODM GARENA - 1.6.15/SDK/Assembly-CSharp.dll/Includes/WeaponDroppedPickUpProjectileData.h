#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponDroppedPickUpProjectileData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponDroppedPickUpProjectileData"));
	}

	template <typename T = Il2CppVector3> T& CameraPositionThrowOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& InitSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& GravityScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& WeaponPickUpAssetID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& WeaponPickUpAssetPositionOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& WeaponPickUpAssetRotationOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& LifeSpan() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& ModelScale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponDroppedPickUpProjectileData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x489A174))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponDroppedPickUpProjectileData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x489A6B0))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
