#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelObjectExportConfigItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelObjectExportConfigItem"));
	}

	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& PrimaryKey() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ObjectParams() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T FindParam(Il2CppString* name) {
		return ((T (*)(LevelObjectExportConfigItem*, Il2CppString*))(Il2CppBase() + 0x4932D48))(this, name);
	}

};

}
