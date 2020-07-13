#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SundryDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SundryDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_List() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResGetSundryConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFeatureModeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnResGetSundryConf(uintptr_t res) {
		return ((T (*)(SundryDataStore*, uintptr_t))(Il2CppBase() + 0x3F2E8EC))(this, res);
	}
	template <typename T = uintptr_t> T GetFeatureModeData() {
		return ((T (*)(SundryDataStore*))(Il2CppBase() + 0x3F2FAA0))(this);
	}

};

}
