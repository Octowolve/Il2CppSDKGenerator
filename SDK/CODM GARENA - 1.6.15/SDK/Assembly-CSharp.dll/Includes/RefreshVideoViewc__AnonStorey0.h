#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshVideoViewcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshVideoView>c__AnonStorey0"));
	}

	template <typename T = bool> T& SkipBtnShow() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& videoName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& videoBGName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(RefreshVideoViewcAnonStorey0*))(Il2CppBase() + 0x1F93858))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(RefreshVideoViewcAnonStorey0*))(Il2CppBase() + 0x1F93934))(this);
	}

};

}
