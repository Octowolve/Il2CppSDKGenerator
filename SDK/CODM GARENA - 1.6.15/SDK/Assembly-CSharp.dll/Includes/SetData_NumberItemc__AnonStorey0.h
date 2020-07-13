#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDataNumberItemcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetData_NumberItem>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& itemData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t p) {
		return ((T (*)(SetDataNumberItemcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1A4DFB8))(this, p);
	}
	template <typename T = void> T m__1(uintptr_t p) {
		return ((T (*)(SetDataNumberItemcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1A4E13C))(this, p);
	}
	template <typename T = void> T m__2(uintptr_t p) {
		return ((T (*)(SetDataNumberItemcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1A4E2C0))(this, p);
	}

};

}
