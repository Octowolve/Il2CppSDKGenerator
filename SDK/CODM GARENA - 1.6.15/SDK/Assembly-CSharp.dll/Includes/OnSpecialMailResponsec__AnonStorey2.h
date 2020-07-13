#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSpecialMailResponsecAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnSpecialMailResponse>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& sendTarget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& openId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& content() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& dict() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& f__ref$1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnSpecialMailResponsecAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3838A18))(this, it);
	}
	template <typename T = void> T m__1(uintptr_t result, int32_t userContext) {
		return ((T (*)(OnSpecialMailResponsecAnonStorey2*, uintptr_t, int32_t))(Il2CppBase() + 0x3838A68))(this, result, userContext);
	}

};

}
