#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentRPGData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponent_RPGData"));
	}

	template <typename T = Il2CppString*> T& LaunchMode() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = int32_t> T& LaunchMode_IntValue() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& LockTime() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& MaxLockAngle() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& MaxTrackAngle() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& ExplodeDistance() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = float> T& LockDis() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = float> T& Bot_FireOffsetX() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& Bot_FireOffsetY() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& Bot_FireOffsetZ() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_LaunchMode_Enum() {
		return ((T (*)(WeaponFireComponentRPGData*))(Il2CppBase() + 0x4C3EB10))(this);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentRPGData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C3EBF0))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponFireComponentRPGData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C3F1B0))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
