#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageImportConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageImportConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& foliageSettings() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Validate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T Validate() {
		return ((T (*)(FoliageImportConfig*))(Il2CppBase() + 0x3CD41AC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_Validate() {
		return ((T (*)(FoliageImportConfig*))(Il2CppBase() + 0x3CD424C))(this);
	}

};

}
