#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class DolphinUpdateVersionCfgResExtract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "DolphinUpdateVersionCfg_ResExtract"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUserDateString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T GetUserDateString() {
		return ((T (*)(DolphinUpdateVersionCfgResExtract*))(Il2CppBase() + 0x2E36C50))(this);
	}
	template <typename T = bool> T get_IsNeedExtract() {
		return ((T (*)(DolphinUpdateVersionCfgResExtract*))(Il2CppBase() + 0x2E36D08))(this);
	}

};

}
