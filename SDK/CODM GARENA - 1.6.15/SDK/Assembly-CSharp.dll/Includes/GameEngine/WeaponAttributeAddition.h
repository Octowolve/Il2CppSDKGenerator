#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponAttributeAddition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponAttributeAddition"));
	}

	template <typename T = int32_t> T& WeaponItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Attribute() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& PlusValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MultiValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdditionByBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AddValue(uintptr_t type, float value) {
		return ((T (*)(WeaponAttributeAddition*, uintptr_t, float))(Il2CppBase() + 0x2EB2FD4))(this, type, value);
	}
	template <typename T = float> T GetAdditionByBase(float baseValue) {
		return ((T (*)(WeaponAttributeAddition*, float))(Il2CppBase() + 0x2EB30B8))(this, baseValue);
	}

};

}
