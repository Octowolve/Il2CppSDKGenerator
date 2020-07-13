#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyWealthReposition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyWealthReposition"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& itemList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isDirty() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(LobbyWealthReposition*))(Il2CppBase() + 0x36B44B0))(this);
	}
	template <typename T = void> T ResetPosition() {
		return ((T (*)(LobbyWealthReposition*))(Il2CppBase() + 0x36B4554))(this);
	}
	template <typename T = void> T ResetImpl() {
		return ((T (*)(LobbyWealthReposition*))(Il2CppBase() + 0x36B45F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LobbyWealthReposition*))(Il2CppBase() + 0x36B4898))(this);
	}

};

}
