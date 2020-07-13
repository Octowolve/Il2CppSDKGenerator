#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyMapDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyMapDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mModes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mLastStay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseSystemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadModes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_Modes() {
		return ((T (*)(LobbyMapDataStore*))(Il2CppBase() + 0x36922D4))(this);
	}
	template <typename T = void> T set_LastStay(uintptr_t value) {
		return ((T (*)(LobbyMapDataStore*, uintptr_t))(Il2CppBase() + 0x36922DC))(this, value);
	}
	template <typename T = uintptr_t> T get_LastStay() {
		return ((T (*)(LobbyMapDataStore*))(Il2CppBase() + 0x36922EC))(this);
	}
	template <typename T = uintptr_t> T ParseSystemType(uintptr_t mode) {
		return ((T (*)(LobbyMapDataStore*, uintptr_t))(Il2CppBase() + 0x36922F4))(this, mode);
	}
	template <typename T = void> T ReloadModes() {
		return ((T (*)(LobbyMapDataStore*))(Il2CppBase() + 0x36923C8))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(LobbyMapDataStore*))(Il2CppBase() + 0x369257C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(LobbyMapDataStore*))(Il2CppBase() + 0x36927D8))(this);
	}

};

}
