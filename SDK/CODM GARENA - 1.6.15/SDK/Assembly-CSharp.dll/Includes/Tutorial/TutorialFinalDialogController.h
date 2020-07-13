#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalDialogController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalDialogController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_CurrentPlayMakerFSM() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinueBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TutorialFinalDialogController*))(Il2CppBase() + 0x4238FB8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TutorialFinalDialogController*))(Il2CppBase() + 0x423905C))(this);
	}
	template <typename T = void> T OnContinueBtnClick() {
		return ((T (*)(TutorialFinalDialogController*))(Il2CppBase() + 0x4239258))(this);
	}
	template <typename T = void> T Show(uintptr_t playMakerFSM, Il2CppString* titleLocID, Il2CppString* descLocID) {
		return ((T (*)(TutorialFinalDialogController*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42393B8))(this, playMakerFSM, titleLocID, descLocID);
	}
	template <typename T = void> T Showm__0() {
		return ((T (*)(TutorialFinalDialogController*))(Il2CppBase() + 0x4239750))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TutorialFinalDialogController*))(Il2CppBase() + 0x4239818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TutorialFinalDialogController*))(Il2CppBase() + 0x4239820))(this);
	}

};

}
