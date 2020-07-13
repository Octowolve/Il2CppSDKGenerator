#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDroppedPickupBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDroppedPickupBox"));
	}

	template <typename T = Il2CppString*> T& EFFECT_POINT_SOCKET() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& TARGET_VOLUME_POINT_SOCKET() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_ItemId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_ServerPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_InLoading() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CurrentGo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& AssetId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_CurrBRDroppedPickupBoxState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_TriggerDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Config() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_bBoxOpened() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_bStopOpenByWall() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = bool> T& m_IsInit() {
		return *(T*)((uintptr_t)this + 0x46);
	}
	template <typename T = float> static T& CheckLoclaPawnZDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& CheckLoclaPawnXDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& CheckLoclaPawnYDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoxEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickBoxObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanRegist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBoxState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBoxAreaState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAutoOpenBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerStay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLocalPlayerAround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestResetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = int32_t> T get_AssetId() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B57EC))(this);
	}
	template <typename T = void> T set_AssetId(int32_t value) {
		return ((T (*)(BRDroppedPickupBox*, int32_t))(Il2CppBase() + 0x18B57F4))(this, value);
	}
	template <typename T = int32_t> T get_ActorID() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B57FC))(this);
	}
	template <typename T = void> T set_ActorID(int32_t value) {
		return ((T (*)(BRDroppedPickupBox*, int32_t))(Il2CppBase() + 0x18B5804))(this, value);
	}
	template <typename T = void> T LoadAsset() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B580C))(this);
	}
	template <typename T = void> T ClearLoad() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B59C0))(this);
	}
	template <typename T = void> T OnAssetReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(BRDroppedPickupBox*, int32_t, uintptr_t))(Il2CppBase() + 0x18B5B38))(this, assetID, obj);
	}
	template <typename T = void> T AddTrigger() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B6B44))(this);
	}
	template <typename T = void> T Init(Il2CppVector3 pos, Il2CppQuaternion rot, int32_t actorID, int32_t itemID, bool boxIsOpen) {
		return ((T (*)(BRDroppedPickupBox*, Il2CppVector3, Il2CppQuaternion, int32_t, int32_t, bool))(Il2CppBase() + 0x18B7118))(this, pos, rot, actorID, itemID, boxIsOpen);
	}
	template <typename T = uintptr_t> T GetBoxEffect() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B7610))(this);
	}
	template <typename T = void> T ClearAsset() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B790C))(this);
	}
	template <typename T = void> T TickBoxObserver() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B7B78))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B7F28))(this);
	}
	template <typename T = void> T Despawn(bool despawnVisible) {
		return ((T (*)(BRDroppedPickupBox*, bool))(Il2CppBase() + 0x18B8990))(this, despawnVisible);
	}
	template <typename T = bool> T CanRegist() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B8CDC))(this);
	}
	template <typename T = void> T SetBoxState(bool isOpen) {
		return ((T (*)(BRDroppedPickupBox*, bool))(Il2CppBase() + 0x18B6FA0))(this, isOpen);
	}
	template <typename T = void> T SetBoxAreaState(uintptr_t status) {
		return ((T (*)(BRDroppedPickupBox*, uintptr_t))(Il2CppBase() + 0x18B9168))(this, status);
	}
	template <typename T = void> T ResetPosition() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B9404))(this);
	}
	template <typename T = void> T SetAnimatorState() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B699C))(this);
	}
	template <typename T = void> T SetEffectPoint() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B8E68))(this);
	}
	template <typename T = void> T ShowEffect(bool bShow) {
		return ((T (*)(BRDroppedPickupBox*, bool))(Il2CppBase() + 0x18B9668))(this, bShow);
	}
	template <typename T = bool> T CheckAutoOpenBox(bool isTriggerEnter) {
		return ((T (*)(BRDroppedPickupBox*, bool))(Il2CppBase() + 0x18B9904))(this, isTriggerEnter);
	}
	template <typename T = bool> T IsShowBox() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18B9C98))(this);
	}
	template <typename T = void> T OnTriggerStay(uintptr_t other) {
		return ((T (*)(BRDroppedPickupBox*, uintptr_t))(Il2CppBase() + 0x18B9DDC))(this, other);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRDroppedPickupBox*, uintptr_t))(Il2CppBase() + 0x18B9EC8))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRDroppedPickupBox*, uintptr_t))(Il2CppBase() + 0x18BA6C4))(this, other);
	}
	template <typename T = void> T CheckLocalPlayerAround() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18BA28C))(this);
	}
	template <typename T = void> T TestResetPos() {
		return ((T (*)(BRDroppedPickupBox*))(Il2CppBase() + 0x18BAB30))(this);
	}

};

}
