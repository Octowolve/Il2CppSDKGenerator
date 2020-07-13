#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimerComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "TimerComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(TimerComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8C5B0))(this, x, y);
	}

};

}
