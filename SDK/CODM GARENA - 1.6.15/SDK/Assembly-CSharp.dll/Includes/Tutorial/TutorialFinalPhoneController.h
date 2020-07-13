#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalPhoneController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalPhoneController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TutorialFinalPhoneController*))(Il2CppBase() + 0x4239970))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TutorialFinalPhoneController*))(Il2CppBase() + 0x4239A14))(this);
	}
	template <typename T = void> T OnListenerClick(uintptr_t go) {
		return ((T (*)(TutorialFinalPhoneController*, uintptr_t))(Il2CppBase() + 0x4239BD4))(this, go);
	}
	template <typename T = void> T Show(uintptr_t playMakerFSM, uintptr_t eventType) {
		return ((T (*)(TutorialFinalPhoneController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4239EB8))(this, playMakerFSM, eventType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TutorialFinalPhoneController*))(Il2CppBase() + 0x423A594))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TutorialFinalPhoneController*))(Il2CppBase() + 0x423A59C))(this);
	}

};

}
