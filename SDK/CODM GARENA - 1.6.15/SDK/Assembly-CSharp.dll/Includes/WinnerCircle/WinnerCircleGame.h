#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WinnerCircle {

class WinnerCircleGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WinnerCircle", "WinnerCircleGame"));
	}

	template <typename T = int32_t> static T& MatchMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsMatchGame() {
		return ((T (*)(WinnerCircleGame*))(Il2CppBase() + 0x4A53814))(this);
	}
	template <typename T = void> T EndMatch() {
		return ((T (*)(WinnerCircleGame*))(Il2CppBase() + 0x4A5381C))(this);
	}
	template <typename T = void> T ExitMatch() {
		return ((T (*)(WinnerCircleGame*))(Il2CppBase() + 0x4A53958))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WinnerCircleGame*))(Il2CppBase() + 0x4A53A64))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(WinnerCircleGame*))(Il2CppBase() + 0x4A53B3C))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(WinnerCircleGame*, uintptr_t))(Il2CppBase() + 0x4A53C14))(this, levelObject);
	}
	template <typename T = void> T xLuaBaseProxy_EndMatch() {
		return ((T (*)(WinnerCircleGame*))(Il2CppBase() + 0x4A53CFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ExitMatch() {
		return ((T (*)(WinnerCircleGame*))(Il2CppBase() + 0x4A53D04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WinnerCircleGame*))(Il2CppBase() + 0x4A53D0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(WinnerCircleGame*))(Il2CppBase() + 0x4A53D14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(WinnerCircleGame*, uintptr_t))(Il2CppBase() + 0x4A53D1C))(this, P0);
	}

};

}
