#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1501
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass15_0`1"));
	}

	template <typename T = void*> T& valueSelector() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& testValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T ForgivingCaseSensitiveFindb__0(uintptr_t s) {
		return ((T (*)(cDisplayClass1501*, uintptr_t))(Il2CppBase() + 0x4B68168))(this, s);
	}
	template <typename T = bool> T ForgivingCaseSensitiveFindb__1(uintptr_t s) {
		return ((T (*)(cDisplayClass1501*, uintptr_t))(Il2CppBase() + 0x4B68264))(this, s);
	}

};

}
