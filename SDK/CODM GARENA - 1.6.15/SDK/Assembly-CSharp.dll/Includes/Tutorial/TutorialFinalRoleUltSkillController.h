#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalRoleUltSkillController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalRoleUltSkillController"));
	}

	template <typename T = uintptr_t> T& T_TargetClickedHandler() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_CurrentPlayMakerFSM() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFSM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T T_OnClick() {
		return ((T (*)(TutorialFinalRoleUltSkillController*))(Il2CppBase() + 0x423A6EC))(this);
	}
	template <typename T = void> T T_SetClickHandler(uintptr_t clickHandler) {
		return ((T (*)(TutorialFinalRoleUltSkillController*, uintptr_t))(Il2CppBase() + 0x423A7CC))(this, clickHandler);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TutorialFinalRoleUltSkillController*))(Il2CppBase() + 0x423A874))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TutorialFinalRoleUltSkillController*))(Il2CppBase() + 0x423A918))(this);
	}
	template <typename T = void> T OnSkillBtnClick() {
		return ((T (*)(TutorialFinalRoleUltSkillController*))(Il2CppBase() + 0x423AB14))(this);
	}
	template <typename T = void> T SetFSM(uintptr_t playMakerFSM) {
		return ((T (*)(TutorialFinalRoleUltSkillController*, uintptr_t))(Il2CppBase() + 0x423AC7C))(this, playMakerFSM);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TutorialFinalRoleUltSkillController*))(Il2CppBase() + 0x423AD24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TutorialFinalRoleUltSkillController*))(Il2CppBase() + 0x423AD2C))(this);
	}

};

}
