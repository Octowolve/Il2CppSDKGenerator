#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyBPExpBuffView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyBPExpBuffView"));
	}

	template <typename T = uintptr_t> T& ObjIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ObjRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ObjTips() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& LobbyTopPos() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BpExpViewTF() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_BPExpBuffDS() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_bBp() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& AllAdditionLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& EventAdditionLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CardAdditionLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& CountDownEventLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CountDownCardLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& EventRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CardRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& RootTable() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& BgWidget() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& Height_Bg() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& Height_Bg_Event() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& Height_Bg_Card() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& REFRESH_INTERVAL() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_RefershInvterval() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnTipPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeLeftText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_BPExpBuffDS() {
		return ((T (*)(LobbyBPExpBuffView*))(Il2CppBase() + 0x43370AC))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(LobbyBPExpBuffView*))(Il2CppBase() + 0x433715C))(this);
	}
	template <typename T = void> T SetBuffInfo(bool bBp) {
		return ((T (*)(LobbyBPExpBuffView*, bool))(Il2CppBase() + 0x433720C))(this, bBp);
	}
	template <typename T = void> T OnBtnTipPress(uintptr_t obj, bool Press) {
		return ((T (*)(LobbyBPExpBuffView*, uintptr_t, bool))(Il2CppBase() + 0x4337A4C))(this, obj, Press);
	}
	template <typename T = void> T RefreshUIState() {
		return ((T (*)(LobbyBPExpBuffView*))(Il2CppBase() + 0x4337B84))(this);
	}
	template <typename T = void> T SetBuffData() {
		return ((T (*)(LobbyBPExpBuffView*))(Il2CppBase() + 0x4337884))(this);
	}
	template <typename T = void> T SetUIInfo(uintptr_t actvInfo, uintptr_t cardInfo) {
		return ((T (*)(LobbyBPExpBuffView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4337C2C))(this, actvInfo, cardInfo);
	}
	template <typename T = Il2CppString*> T GetTimeLeftText(int32_t timeTamp) {
		return ((T (*)(LobbyBPExpBuffView*, int32_t))(Il2CppBase() + 0x43380DC))(this, timeTamp);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LobbyBPExpBuffView*))(Il2CppBase() + 0x4338848))(this);
	}
	template <typename T = void> T CheckRefresh() {
		return ((T (*)(LobbyBPExpBuffView*))(Il2CppBase() + 0x43388EC))(this);
	}
	template <typename T = void> T SetBgHeight(bool bEvent, bool bCard) {
		return ((T (*)(LobbyBPExpBuffView*, bool, bool))(Il2CppBase() + 0x43385F4))(this, bEvent, bCard);
	}

};

}
