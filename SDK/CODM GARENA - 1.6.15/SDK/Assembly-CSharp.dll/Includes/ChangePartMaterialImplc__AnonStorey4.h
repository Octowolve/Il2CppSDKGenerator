#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangePartMaterialImplcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangePartMaterialImpl>c__AnonStorey4"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& partNames() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isTemp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& matchWholeWords() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0(uintptr_t data) {
		return ((T (*)(ChangePartMaterialImplcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x3EF540C))(this, data);
	}

};

}
