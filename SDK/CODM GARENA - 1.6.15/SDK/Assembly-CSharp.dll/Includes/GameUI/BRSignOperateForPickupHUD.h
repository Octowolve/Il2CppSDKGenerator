#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRSignOperateForPickupHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRSignOperateForPickupHUD"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMarkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOverPickupItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnMarkBtnClick() {
		return ((T (*)(BRSignOperateForPickupHUD*))(Il2CppBase() + 0x3DBE904))(this);
	}
	template <typename T = void> T OnDragOverPickupItemView(uintptr_t PickupItemView) {
		return ((T (*)(BRSignOperateForPickupHUD*, uintptr_t))(Il2CppBase() + 0x3DBEA4C))(this, PickupItemView);
	}
	template <typename T = void> T xLuaBaseProxy_OnMarkBtnClick() {
		return ((T (*)(BRSignOperateForPickupHUD*))(Il2CppBase() + 0x3DBEAEC))(this);
	}

};

}
