#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettlementCardWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettlementCard_Weapon"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& uiGrids() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& attachmentHighlight() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& attachmentTemplate() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& bgAttachmentDetails() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& attachmentGridRoot_OneLineStyle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& attachmentGridRoot_TwoLineStyle_LineOne() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& attachmentGridRoot_TwoLineStyle_LineTwo() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& attachmentSPILabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& animatorAttachments() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gridList() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupUIGrids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAllGrids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupAttachmentGrids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSPIText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupWeaponCardGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAttachmentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAttachmentDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAttachmentDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T Init() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x2992F24))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x299352C))(this);
	}
	template <typename T = void> T SetupUIGrids(bool enable) {
		return ((T (*)(SettlementCardWeapon*, bool))(Il2CppBase() + 0x29938AC))(this, enable);
	}
	template <typename T = void> T DestroyAllGrids() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x29936D8))(this);
	}
	template <typename T = void> T SetupAttachmentGrids(uintptr_t gridList) {
		return ((T (*)(SettlementCardWeapon*, uintptr_t))(Il2CppBase() + 0x299249C))(this, gridList);
	}
	template <typename T = bool> T SetData(uintptr_t data, bool isChestCard) {
		return ((T (*)(SettlementCardWeapon*, uintptr_t, bool))(Il2CppBase() + 0x2991C3C))(this, data, isChestCard);
	}
	template <typename T = void> T SetSPIText(int32_t spi) {
		return ((T (*)(SettlementCardWeapon*, int32_t))(Il2CppBase() + 0x2993F28))(this, spi);
	}
	template <typename T = void> T SetupWeaponCardGrid(Il2CppList<uintptr_t>* gridList, uintptr_t attach) {
		return ((T (*)(SettlementCardWeapon*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2993C44))(this, gridList, attach);
	}
	template <typename T = void> T StartShowing() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x29940B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponList() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x2994170))(this);
	}
	template <typename T = uintptr_t> T FindWeapon(int32_t ID, uint64_t GUID) {
		return ((T (*)(SettlementCardWeapon*, int32_t, uint64_t))(Il2CppBase() + 0x29942EC))(this, ID, GUID);
	}
	template <typename T = uintptr_t> T GetWeaponAttachmentList(int32_t ID, uint64_t GUID) {
		return ((T (*)(SettlementCardWeapon*, int32_t, uint64_t))(Il2CppBase() + 0x2993B34))(this, ID, GUID);
	}
	template <typename T = void> T OnCardClick(uintptr_t go) {
		return ((T (*)(SettlementCardWeapon*, uintptr_t))(Il2CppBase() + 0x29944EC))(this, go);
	}
	template <typename T = void> T ShowAttachmentDetails() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x2994604))(this);
	}
	template <typename T = void> T HideAttachmentDetails() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x2994868))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x2994ACC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x2994AD0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_SetData(uintptr_t P0, bool P1) {
		return ((T (*)(SettlementCardWeapon*, uintptr_t, bool))(Il2CppBase() + 0x2994AD4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetSPIText(int32_t P0) {
		return ((T (*)(SettlementCardWeapon*, int32_t))(Il2CppBase() + 0x2994AD8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartShowing() {
		return ((T (*)(SettlementCardWeapon*))(Il2CppBase() + 0x2994ADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCardClick(uintptr_t P0) {
		return ((T (*)(SettlementCardWeapon*, uintptr_t))(Il2CppBase() + 0x2994AE0))(this, P0);
	}

};

}
