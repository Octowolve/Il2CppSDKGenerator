#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayLastAwardProgresscAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayLastAwardProgress>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& startLv() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& endLv() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& endExp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& progressWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& pos_x() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& dur() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayLastAwardProgresscAnonStorey3*))(Il2CppBase() + 0x2C1E7F8))(this);
	}

};

}
