#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RestoreTempPartMaterialcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RestoreTempPartMaterial>c__AnonStorey5"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& partNames() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& matchWholeWords() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t data) {
		return ((T (*)(RestoreTempPartMaterialcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x3EF58BC))(this, data);
	}

};

}
