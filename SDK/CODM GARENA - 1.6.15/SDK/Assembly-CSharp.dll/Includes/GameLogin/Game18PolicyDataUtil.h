#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class Game18PolicyDataUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "Game18PolicyDataUtil"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tlog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Wirte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Data2List() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T Tlog() {
		return ((T (*)(void *))(Il2CppBase() + 0x33D56E0))(0);
	}
	template <typename T = void> static T Wirte(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33D4F78))(0, data);
	}
	template <typename T = uintptr_t> static T Read() {
		return ((T (*)(void *))(Il2CppBase() + 0x33D5A58))(0);
	}
	template <typename T = void> static T Log(uintptr_t data, Il2CppString* content, Il2CppString* logName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x33D5FF4))(0, data, content, logName);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T Data2List(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33D5E44))(0, data);
	}

};

}
