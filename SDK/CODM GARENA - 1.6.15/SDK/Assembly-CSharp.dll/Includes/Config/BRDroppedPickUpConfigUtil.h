#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRDroppedPickUpConfigUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRDroppedPickUpConfigUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Derived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOutlineColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToSettingItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ToSettingItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ToSettingItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T Derived(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3348D6C))(0, config);
	}
	template <typename T = uintptr_t> static T GetOutlineColor(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D47EDC))(0, config);
	}
	template <typename T = uintptr_t> static T ToSettingItemType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D480A0))(0, type);
	}
	template <typename T = uintptr_t> static T ToSettingItemType_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D48154))(0, type);
	}
	template <typename T = uintptr_t> static T ToSettingItemType_2(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D48208))(0, type);
	}

};

}
