#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class InScreenGoodsInfoHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "InScreenGoodsInfoHud"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& widget() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TxtDistance() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CdBg() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& IconGoods() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& MKGoods() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_Info() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> static T& FarestDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_Distance() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& m_OffsetAirborneWorldPos() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirborne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehivle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirplane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeatIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T get_Info() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2333B70))(this);
	}
	template <typename T = void> T Init(uintptr_t info) {
		return ((T (*)(InScreenGoodsInfoHud*, uintptr_t))(Il2CppBase() + 0x2333B78))(this, info);
	}
	template <typename T = void> T AdjustInfo() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2333C44))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(InScreenGoodsInfoHud*, bool))(Il2CppBase() + 0x2333ED4))(this, paused);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2333F74))(this);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x233400C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x23340A4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x233413C))(this);
	}
	template <typename T = void> T UpdateIcon(uint32_t teamNumID) {
		return ((T (*)(InScreenGoodsInfoHud*, uint32_t))(Il2CppBase() + 0x23341D4))(this, teamNumID);
	}
	template <typename T = void> T UpdateMK() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2333DB8))(this);
	}
	template <typename T = Il2CppString*> T GetIcon(uint32_t teamNumID) {
		return ((T (*)(InScreenGoodsInfoHud*, uint32_t))(Il2CppBase() + 0x23342D8))(this, teamNumID);
	}
	template <typename T = Il2CppString*> T GetMK(uint32_t teamNumID) {
		return ((T (*)(InScreenGoodsInfoHud*, uint32_t))(Il2CppBase() + 0x23343FC))(this, teamNumID);
	}
	template <typename T = void> T HideAll() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x23345B8))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x23347E4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2334A10))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2334DA4))(this);
	}
	template <typename T = bool> T CheckInfo() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2334AF8))(this);
	}
	template <typename T = void> T UpdateAirborne(float distance, Il2CppVector3 worldPos) {
		return ((T (*)(InScreenGoodsInfoHud*, float, Il2CppVector3))(Il2CppBase() + 0x23350E8))(this, distance, worldPos);
	}
	template <typename T = void> T UpdateCD() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x233548C))(this);
	}
	template <typename T = void> T UpdateVehivle() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2335740))(this);
	}
	template <typename T = void> T UpdateAirplane() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x23357D8))(this);
	}
	template <typename T = void> T UpdateDistance(float distance, Il2CppVector3 worldPos) {
		return ((T (*)(InScreenGoodsInfoHud*, float, Il2CppVector3))(Il2CppBase() + 0x23351C8))(this, distance, worldPos);
	}
	template <typename T = void> T AutoSetOffset() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2335870))(this);
	}
	template <typename T = uint32_t> T GetSeatIndex(uint32_t playerId) {
		return ((T (*)(InScreenGoodsInfoHud*, uint32_t))(Il2CppBase() + 0x2334BF8))(this, playerId);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(InScreenGoodsInfoHud*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2335908))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(InScreenGoodsInfoHud*, uintptr_t))(Il2CppBase() + 0x2335B7C))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(InScreenGoodsInfoHud*, bool))(Il2CppBase() + 0x2335D24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2335D2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InScreenGoodsInfoHud*))(Il2CppBase() + 0x2335D34))(this);
	}

};

}
