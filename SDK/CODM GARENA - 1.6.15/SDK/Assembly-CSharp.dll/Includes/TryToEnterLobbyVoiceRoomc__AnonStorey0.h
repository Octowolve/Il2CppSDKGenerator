#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TryToEnterLobbyVoiceRoomcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TryToEnterLobbyVoiceRoom>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& tempName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& uiscene() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TryToEnterLobbyVoiceRoomcAnonStorey0*))(Il2CppBase() + 0x36B3B70))(this);
	}

};

}
