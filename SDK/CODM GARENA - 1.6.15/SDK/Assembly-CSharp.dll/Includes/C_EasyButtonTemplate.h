#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CEasyButtonTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C_EasyButtonTemplate"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_ButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_ButtonPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_ButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(CEasyButtonTemplate*))(Il2CppBase() + 0x5310944))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CEasyButtonTemplate*))(Il2CppBase() + 0x5310AC4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CEasyButtonTemplate*))(Il2CppBase() + 0x5310C44))(this);
	}
	template <typename T = void> T On_ButtonDown(Il2CppString* buttonName) {
		return ((T (*)(CEasyButtonTemplate*, Il2CppString*))(Il2CppBase() + 0x5310DC4))(this, buttonName);
	}
	template <typename T = void> T On_ButtonPress(Il2CppString* buttonName) {
		return ((T (*)(CEasyButtonTemplate*, Il2CppString*))(Il2CppBase() + 0x5310E64))(this, buttonName);
	}
	template <typename T = void> T On_ButtonUp(Il2CppString* buttonName) {
		return ((T (*)(CEasyButtonTemplate*, Il2CppString*))(Il2CppBase() + 0x5310F04))(this, buttonName);
	}

};

}
