#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREventBtnHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREventBtnHUD"));
	}

	template <typename T = bool> T& m_IsBtnInit() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = uintptr_t> T& m_BtnMgr() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BtnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_BrEventBtnType() {
		return ((T (*)(BREventBtnHUD*))(Il2CppBase() + 0x18F4630))(this);
	}
	template <typename T = void> T TrySetActive(bool isActive, uintptr_t rootComponent) {
		return ((T (*)(BREventBtnHUD*, bool, uintptr_t))(Il2CppBase() + 0x18F4638))(this, isActive, rootComponent);
	}
	template <typename T = void> T BtnInit(uintptr_t showRoot) {
		return ((T (*)(BREventBtnHUD*, uintptr_t))(Il2CppBase() + 0x18F4810))(this, showRoot);
	}

};

}
