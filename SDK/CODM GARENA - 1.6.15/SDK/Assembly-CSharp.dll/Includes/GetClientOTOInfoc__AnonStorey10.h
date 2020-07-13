#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetClientOTOInfocAnonStorey10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetClientOTOInfo>c__AnonStorey10"));
	}

	template <typename T = int32_t> T& otoOrder() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetClientOTOInfocAnonStorey10*, uintptr_t))(Il2CppBase() + 0x236AD00))(this, x);
	}

};

}
