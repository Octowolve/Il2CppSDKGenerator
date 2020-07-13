#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class OffScreenGoodsInfoHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "OffScreenGoodsInfoHud"));
	}

	template <typename T = uintptr_t> T& widget() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TargetArrow() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TxtNum() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TxtDistance() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CdBg() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& SpriteAirborne() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& TxtOffLineNum() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_Info() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> static T& YOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DieWaitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PosOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FarestDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& minOverlapSize() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_DieTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_Distance() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_UIScene() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& m_bReflashIcon() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirborne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehivle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirplane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeatIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T get_Info() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A89B6C))(this);
	}
	template <typename T = void> T Init(uintptr_t info) {
		return ((T (*)(OffScreenGoodsInfoHud*, uintptr_t))(Il2CppBase() + 0x3A89B74))(this, info);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(OffScreenGoodsInfoHud*, bool))(Il2CppBase() + 0x3A89E54))(this, paused);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A89EF4))(this);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A89F8C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8A024))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8A0BC))(this);
	}
	template <typename T = void> T UpdateIcon() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A89CD8))(this);
	}
	template <typename T = Il2CppString*> T GetIcon(uint32_t teamNumID) {
		return ((T (*)(OffScreenGoodsInfoHud*, uint32_t))(Il2CppBase() + 0x3A8A154))(this, teamNumID);
	}
	template <typename T = void> T HideAll() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8A2FC))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8A3E8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8A4D4))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8A868))(this);
	}
	template <typename T = bool> T CheckInfo() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8A5BC))(this);
	}
	template <typename T = void> T UpdateAirborne(float distance, Il2CppVector3 worldPos) {
		return ((T (*)(OffScreenGoodsInfoHud*, float, Il2CppVector3))(Il2CppBase() + 0x3A8AC40))(this, distance, worldPos);
	}
	template <typename T = void> T UpdateCD() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8B414))(this);
	}
	template <typename T = void> T UpdateVehivle() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8B6C8))(this);
	}
	template <typename T = void> T UpdateAirplane() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8B760))(this);
	}
	template <typename T = void> T UpdateTargetArrow(Il2CppVector3 worldPos) {
		return ((T (*)(OffScreenGoodsInfoHud*, Il2CppVector3))(Il2CppBase() + 0x3A8AD20))(this, worldPos);
	}
	template <typename T = void> T UpdateDistance(float distance, Il2CppVector3 worldPos) {
		return ((T (*)(OffScreenGoodsInfoHud*, float, Il2CppVector3))(Il2CppBase() + 0x3A8AF14))(this, distance, worldPos);
	}
	template <typename T = uint32_t> T GetSeatIndex(uint32_t playerId) {
		return ((T (*)(OffScreenGoodsInfoHud*, uint32_t))(Il2CppBase() + 0x3A8A6BC))(this, playerId);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(OffScreenGoodsInfoHud*, bool))(Il2CppBase() + 0x3A8B7F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8B800))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(OffScreenGoodsInfoHud*))(Il2CppBase() + 0x3A8B808))(this);
	}

};

}
