#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPartMaterialcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPartMaterial>c__AnonStorey2"));
	}

	template <typename T = Il2CppString*> T& partName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t data) {
		return ((T (*)(GetPartMaterialcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3EF5458))(this, data);
	}

};

}
