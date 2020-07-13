#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponPartAttribData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponPart_AttribData"));
	}

	template <typename T = float> T& FireIntervalScale() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& MaxThroughWall() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& PenetrationValue() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& PenetrationDamageModifier() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponPartAttribData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C4F0E8))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponPartAttribData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C50174))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
