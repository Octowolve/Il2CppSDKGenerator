#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnRoomPlayerEnterNtfcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnRoomPlayerEnterNtf>c__AnonStorey1"));
	}

	template <typename T = Il2CppString*> T& nickname() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnRoomPlayerEnterNtfcAnonStorey1*))(Il2CppBase() + 0x2D130FC))(this);
	}

};

}
