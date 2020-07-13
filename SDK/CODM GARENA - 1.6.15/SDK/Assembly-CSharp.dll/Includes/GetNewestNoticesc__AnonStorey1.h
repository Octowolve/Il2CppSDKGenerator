#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetNewestNoticescAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetNewestNotices>c__AnonStorey1"));
	}

	template <typename T = bool> T& isUpdateRes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& forceUpdate() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t result) {
		return ((T (*)(GetNewestNoticescAnonStorey1*, uintptr_t))(Il2CppBase() + 0x195C788))(this, result);
	}

};

}
