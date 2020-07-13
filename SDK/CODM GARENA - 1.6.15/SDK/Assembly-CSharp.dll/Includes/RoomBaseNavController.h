#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomBaseNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomBaseNavController"));
	}

	template <typename T = bool> T& m_bPreCreate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_bPreCreate() {
		return ((T (*)(RoomBaseNavController*))(Il2CppBase() + 0x4132EB8))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(RoomBaseNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4132EC0))(this, data, lastData);
	}
	template <typename T = void> T ProcessAudio() {
		return ((T (*)(RoomBaseNavController*))(Il2CppBase() + 0x4133024))(this);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(RoomBaseNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x413327C))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(RoomBaseNavController*))(Il2CppBase() + 0x41334E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(RoomBaseNavController*))(Il2CppBase() + 0x41336F8))(this);
	}

};

}
