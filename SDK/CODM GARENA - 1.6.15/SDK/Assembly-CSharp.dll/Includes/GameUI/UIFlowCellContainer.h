#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlowCellContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlowCellContainer"));
	}

	template <typename T = uintptr_t> T& Cell() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Row() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T Activate(int32_t row) {
		return ((T (*)(UIFlowCellContainer*, int32_t))(Il2CppBase() + 0x3ADBE40))(this, row);
	}
	template <typename T = uintptr_t> T DeActivate() {
		return ((T (*)(UIFlowCellContainer*))(Il2CppBase() + 0x3ADBF74))(this);
	}

};

}
