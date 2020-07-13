#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyExpBuffView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyExpBuffView"));
	}

	template <typename T = uintptr_t> T& ExpBuffRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& GridBuffIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelCoefficient() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SpriteLines() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ContainerTip() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteTipBg() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ContainerBuffDetail() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_Item_Dis_Dif() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& BG_WIDTH_ADD() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_LobbyExpBuffDS() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& REFRESH_INTERVAL() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& m_RefershInvterval() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_LastState() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& PlayerExpBufDetail() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& WeaponExpBufDetail() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnTipPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshBuffDetailShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(LobbyExpBuffView*))(Il2CppBase() + 0x433D644))(this);
	}
	template <typename T = uintptr_t> T get_LobbyExpBuffDS() {
		return ((T (*)(LobbyExpBuffView*))(Il2CppBase() + 0x433D6F4))(this);
	}
	template <typename T = void> T SetBuffInfo(bool bInit) {
		return ((T (*)(LobbyExpBuffView*, bool))(Il2CppBase() + 0x433D7A4))(this, bInit);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LobbyExpBuffView*))(Il2CppBase() + 0x433DCC8))(this);
	}
	template <typename T = void> T CheckRefresh() {
		return ((T (*)(LobbyExpBuffView*))(Il2CppBase() + 0x433DBF4))(this);
	}
	template <typename T = void> T _RefreshBuffInfo() {
		return ((T (*)(LobbyExpBuffView*))(Il2CppBase() + 0x433DD6C))(this);
	}
	template <typename T = void> T OnBtnTipPress(uintptr_t obj, bool Press) {
		return ((T (*)(LobbyExpBuffView*, uintptr_t, bool))(Il2CppBase() + 0x433E7D0))(this, obj, Press);
	}
	template <typename T = void> T _RefreshBuffDetailShowed(bool force) {
		return ((T (*)(LobbyExpBuffView*, bool))(Il2CppBase() + 0x433E4D4))(this, force);
	}

};

}
