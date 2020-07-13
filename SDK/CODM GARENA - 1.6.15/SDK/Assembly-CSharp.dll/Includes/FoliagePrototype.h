#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliagePrototype
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliagePrototype"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& prototypeLODs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrototypeLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Refresh() {
		return ((T (*)(FoliagePrototype*))(Il2CppBase() + 0x3CD2F74))(this);
	}
	template <typename T = uintptr_t> T GetPrototypeLOD(uintptr_t lod) {
		return ((T (*)(FoliagePrototype*, uintptr_t))(Il2CppBase() + 0x3CD366C))(this, lod);
	}

};

}
