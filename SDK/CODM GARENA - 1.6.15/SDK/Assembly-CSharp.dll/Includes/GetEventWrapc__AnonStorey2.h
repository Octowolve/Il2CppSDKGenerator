#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEventWrapcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetEventWrap>c__AnonStorey2"));
	}

	template <typename T = bool> T& is_static() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& eventInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& start_idx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& add() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& remove() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& f__ref$3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T m__0(uintptr_t L) {
		return ((T (*)(GetEventWrapcAnonStorey2*, uintptr_t))(Il2CppBase() + 0xF4B334))(this, L);
	}

};

}
