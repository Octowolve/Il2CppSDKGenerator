#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class InGameNewGuideItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "InGameNewGuideItem"));
	}

	template <typename T = uintptr_t> T& TriggerType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ItemType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ItemState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EventEnum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_NewGuideMgr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_AttachViewID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_GuideDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_GuideText() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& CurFadeAction() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Enter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OverTimeExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interrupt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoySticksPanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOutAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T get_NeedReport() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x3169DD8))(this);
	}
	template <typename T = bool> T get_NotifyAndSelfCheck() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x3169DE0))(this);
	}
	template <typename T = void> T Register() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x3165324))(this);
	}
	template <typename T = void> T UnRegister() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x316569C))(this);
	}
	template <typename T = void> T SetItemState(uintptr_t s) {
		return ((T (*)(InGameNewGuideItem*, uintptr_t))(Il2CppBase() + 0x3169DE8))(this, s);
	}
	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(InGameNewGuideItem*, uintptr_t))(Il2CppBase() + 0x3165918))(this, Msg);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x3169E90))(this);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x316792C))(this);
	}
	template <typename T = void> T OverTimeExit() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x3169F58))(this);
	}
	template <typename T = void> T Interrupt() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x316A05C))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x3165E90))(this);
	}
	template <typename T = void> T OnDestory() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x316A16C))(this);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x316A288))(this);
	}
	template <typename T = void> T CloseEffect() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x316A52C))(this);
	}
	template <typename T = uintptr_t> T GetJoySticksPanelController() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x316A6E4))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(InGameNewGuideItem*, uintptr_t))(Il2CppBase() + 0x3165F34))(this, ID);
	}
	template <typename T = bool> T IsSpectating() {
		return ((T (*)(InGameNewGuideItem*))(Il2CppBase() + 0x316A888))(this);
	}
	template <typename T = void> T FadeInAction(uintptr_t label) {
		return ((T (*)(InGameNewGuideItem*, uintptr_t))(Il2CppBase() + 0x316AA30))(this, label);
	}
	template <typename T = void> T FadeOutAction(uintptr_t label) {
		return ((T (*)(InGameNewGuideItem*, uintptr_t))(Il2CppBase() + 0x316ACB0))(this, label);
	}

};

}
