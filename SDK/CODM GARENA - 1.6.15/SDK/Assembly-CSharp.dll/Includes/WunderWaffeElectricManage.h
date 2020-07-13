#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WunderWaffeElectricManage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WunderWaffeElectricManage"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ElectricItemGo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetElectric() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetElectric(int32_t ammoNum) {
		return ((T (*)(WunderWaffeElectricManage*, int32_t))(Il2CppBase() + 0xC1CB30))(this, ammoNum);
	}

};

}
