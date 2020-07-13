#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntSceneItemMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntSceneItemMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_PropHuntGroupMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_PropHuntSpotMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PropHuntSceneItemList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_PropHuntCloneItemMap() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPropHuntGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPropHuntSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePropHuntSceneItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllSceneItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLastRoundSceneItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundNumChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloneItemBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B1FB0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B2048))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B26A0))(this);
	}
	template <typename T = void> T AddPropHuntGroup(uintptr_t group) {
		return ((T (*)(PropHuntSceneItemMgr*, uintptr_t))(Il2CppBase() + 0x3499C38))(this, group);
	}
	template <typename T = void> T AddPropHuntSpot(uintptr_t spot) {
		return ((T (*)(PropHuntSceneItemMgr*, uintptr_t))(Il2CppBase() + 0x3499D58))(this, spot);
	}
	template <typename T = void> T UpdatePropHuntSceneItem(uint32_t actorID, uint32_t assetID, bool attackable, int32_t hp, Il2CppVector3 position, Il2CppQuaternion rotation, Il2CppVector3 scale, int32_t createRound) {
		return ((T (*)(PropHuntSceneItemMgr*, uint32_t, uint32_t, bool, int32_t, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, int32_t))(Il2CppBase() + 0x349CF3C))(this, actorID, assetID, attackable, hp, position, rotation, scale, createRound);
	}
	template <typename T = void> T ClearAllSceneItem() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B21A8))(this);
	}
	template <typename T = void> T ClearLastRoundSceneItem() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B299C))(this);
	}
	template <typename T = void> T OnRoundNumChanged(int32_t curRound) {
		return ((T (*)(PropHuntSceneItemMgr*, int32_t))(Il2CppBase() + 0x34A210C))(this, curRound);
	}
	template <typename T = void> T OnCloneItemBroken(uintptr_t item) {
		return ((T (*)(PropHuntSceneItemMgr*, uintptr_t))(Il2CppBase() + 0x34B27D4))(this, item);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B2FA0))(this);
	}
	template <typename T = void> T OnExitMatch() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B3044))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B30DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B30E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B30EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B30F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnExitMatch() {
		return ((T (*)(PropHuntSceneItemMgr*))(Il2CppBase() + 0x34B30FC))(this);
	}

};

}
