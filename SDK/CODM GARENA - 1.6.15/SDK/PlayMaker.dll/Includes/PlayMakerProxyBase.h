#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerProxyBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerProxyBase"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& playMakerFSMs() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlayMakerProxyBase*))(Il2CppBase() + 0x5149140))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayMakerProxyBase*))(Il2CppBase() + 0x5149144))(this);
	}

};

}
