#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetRedDotTimeStampcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetRedDotTimeStamp>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& gameType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& tag() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetRedDotTimeStampcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3828558))(this, it);
	}

};

}
