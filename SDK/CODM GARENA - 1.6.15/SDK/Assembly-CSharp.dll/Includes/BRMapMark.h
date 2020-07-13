#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRMapMark
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRMapMark"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BRMapMark*))(Il2CppBase() + 0x52F4F20))(this);
	}

};

}
