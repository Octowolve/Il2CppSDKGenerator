#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetOptionscAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetOptions>c__AnonStorey1"));
	}

	template <typename T = Il2CppString*> T& content() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t obj) {
		return ((T (*)(SetOptionscAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4701830))(this, obj);
	}

};

}
