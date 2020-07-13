#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyMapWeakNet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyMapWeakNet"));
	}

	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LobbyMapWeakNet*))(Il2CppBase() + 0x433FFB0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LobbyMapWeakNet*))(Il2CppBase() + 0x433FFB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LobbyMapWeakNet*))(Il2CppBase() + 0x433FFE4))(this);
	}

};

}
