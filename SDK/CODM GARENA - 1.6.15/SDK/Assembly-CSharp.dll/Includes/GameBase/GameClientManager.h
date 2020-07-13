#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameClientManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameClientManager"));
	}

	template <typename T = uintptr_t> static T& FrameWorkObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGameFrameWork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreateFrameworkCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> static T CheckGameFrameWork(uintptr_t frameWork) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31F0270))(0, frameWork);
	}
	template <typename T = void> static T OnCreateFrameworkCompleted(uintptr_t frameWork) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31F0790))(0, frameWork);
	}

};

}
