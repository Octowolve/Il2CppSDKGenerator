#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendBlackView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendBlackView"));
	}

	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& Table() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& NoBlacks() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FriendBlackView*))(Il2CppBase() + 0x3CE1508))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(FriendBlackView*))(Il2CppBase() + 0x3CE15F0))(this);
	}

};

}
