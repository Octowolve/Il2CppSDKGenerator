#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREventBtnMgrHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREventBtnMgrHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_IsBtnActive() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AllBtnObjs() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AddBtn(uintptr_t btn, uintptr_t showRoot) {
		return ((T (*)(BREventBtnMgrHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18F4B58))(this, btn, showRoot);
	}
	template <typename T = void> T TrySetActive(uintptr_t btnType, bool isActive) {
		return ((T (*)(BREventBtnMgrHUD*, uintptr_t, bool))(Il2CppBase() + 0x18F49E4))(this, btnType, isActive);
	}
	template <typename T = void> T DoSetActive(int32_t idx, bool isActive) {
		return ((T (*)(BREventBtnMgrHUD*, int32_t, bool))(Il2CppBase() + 0x18F4E58))(this, idx, isActive);
	}

};

}
