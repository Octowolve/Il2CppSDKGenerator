#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalSelectFireModeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalSelectFireModeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_CurrentPlayMakerFSM() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_CurrentFireModeType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMirrorBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHipShootBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TutorialFinalSelectFireModeController*))(Il2CppBase() + 0x423AE7C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TutorialFinalSelectFireModeController*))(Il2CppBase() + 0x423AF20))(this);
	}
	template <typename T = void> T OnMirrorBtnClick(uintptr_t obj) {
		return ((T (*)(TutorialFinalSelectFireModeController*, uintptr_t))(Il2CppBase() + 0x423B494))(this, obj);
	}
	template <typename T = void> T OnHipShootBtnClick(uintptr_t obj) {
		return ((T (*)(TutorialFinalSelectFireModeController*, uintptr_t))(Il2CppBase() + 0x423B560))(this, obj);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(TutorialFinalSelectFireModeController*))(Il2CppBase() + 0x423B62C))(this);
	}
	template <typename T = void> T Show(uintptr_t playMakerFsm) {
		return ((T (*)(TutorialFinalSelectFireModeController*, uintptr_t))(Il2CppBase() + 0x423BC74))(this, playMakerFsm);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TutorialFinalSelectFireModeController*))(Il2CppBase() + 0x423BD1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TutorialFinalSelectFireModeController*))(Il2CppBase() + 0x423BD24))(this);
	}

};

}
