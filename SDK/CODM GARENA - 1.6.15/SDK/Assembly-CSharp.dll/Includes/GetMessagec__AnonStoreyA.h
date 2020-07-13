#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMessagecAnonStoreyA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMessage>c__AnonStoreyA"));
	}

	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetMessagecAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x329A7D8))(this, it);
	}

};

}
