#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LoadoutDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LoadoutDataStore"));
	}

	template <typename T = uintptr_t> T& m_PVPLoadoutSet() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_BRLoadout() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_PVELoadout() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_FtueLoadoutSet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_PVP_SelectedLoadoutIdx() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& MaxIndividuationNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_IndividuationItems() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_WinCircleIndividuationItem() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_KillCamSprayItem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CachedClickLoadout() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& CacheClickBRLoadout() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& CacheClickPVELoadout() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& CachedCopyFromLoadout() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& CachedAvatarType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LastTimeGameMode_Key() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoadoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetSquadMemberData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPLoadoutSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPSelectedLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPLoadoutByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPSeletedLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPSelectedLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVELoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFtueLoadoutSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLoadoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastTimeGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitIndividuationitems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndividuationItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveIndividuationByPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIndividuationItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWinCircleIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWinCircleIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetKillCameraSprayItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKillCamSprayItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1961468))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1961694))(this);
	}
	template <typename T = void> T SetLoadoutInfo(uintptr_t loadoutInfo) {
		return ((T (*)(LoadoutDataStore*, uintptr_t))(Il2CppBase() + 0x196174C))(this, loadoutInfo);
	}
	template <typename T = uintptr_t> T GetTargetSquadMemberData(int32_t index) {
		return ((T (*)(LoadoutDataStore*, int32_t))(Il2CppBase() + 0x1962120))(this, index);
	}
	template <typename T = uintptr_t> T GetPVPLoadoutSet() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1962314))(this);
	}
	template <typename T = uintptr_t> T GetPVPSelectedLoadout() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x19623B4))(this);
	}
	template <typename T = uintptr_t> T GetPVPLoadoutByIndex(int32_t index) {
		return ((T (*)(LoadoutDataStore*, int32_t))(Il2CppBase() + 0x19621D0))(this, index);
	}
	template <typename T = int32_t> T GetPVPSeletedLoadoutIndex() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x196245C))(this);
	}
	template <typename T = void> T SetPVPSelectedLoadoutIndex(int32_t idx) {
		return ((T (*)(LoadoutDataStore*, int32_t))(Il2CppBase() + 0x19624FC))(this, idx);
	}
	template <typename T = uintptr_t> T GetBRLoadout() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x19625A4))(this);
	}
	template <typename T = uintptr_t> T GetPVELoadout() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1962644))(this);
	}
	template <typename T = uintptr_t> T GetFtueLoadoutSet() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x19626E4))(this);
	}
	template <typename T = uintptr_t> T CreateLoadoutInfo(int32_t id, uint32_t item0, uint32_t item1, uint32_t item2, uint32_t skillId) {
		return ((T (*)(LoadoutDataStore*, int32_t, uint32_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x1962C74))(this, id, item0, item1, item2, skillId);
	}
	template <typename T = uintptr_t> T get_CachedClickLoadout() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1963860))(this);
	}
	template <typename T = void> T set_CachedClickLoadout(uintptr_t value) {
		return ((T (*)(LoadoutDataStore*, uintptr_t))(Il2CppBase() + 0x1963868))(this, value);
	}
	template <typename T = uintptr_t> T get_CacheClickBRLoadout() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1963870))(this);
	}
	template <typename T = void> T set_CacheClickBRLoadout(uintptr_t value) {
		return ((T (*)(LoadoutDataStore*, uintptr_t))(Il2CppBase() + 0x1963878))(this, value);
	}
	template <typename T = uintptr_t> T get_CacheClickPVELoadout() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1963880))(this);
	}
	template <typename T = void> T set_CacheClickPVELoadout(uintptr_t value) {
		return ((T (*)(LoadoutDataStore*, uintptr_t))(Il2CppBase() + 0x1963888))(this, value);
	}
	template <typename T = uintptr_t> T get_CachedCopyFromLoadout() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1963890))(this);
	}
	template <typename T = void> T set_CachedCopyFromLoadout(uintptr_t value) {
		return ((T (*)(LoadoutDataStore*, uintptr_t))(Il2CppBase() + 0x1963898))(this, value);
	}
	template <typename T = uintptr_t> T get_CachedAvatarType() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x19638A0))(this);
	}
	template <typename T = void> T set_CachedAvatarType(uintptr_t value) {
		return ((T (*)(LoadoutDataStore*, uintptr_t))(Il2CppBase() + 0x19638A8))(this, value);
	}
	template <typename T = void> T SaveLastTimeGameMode(int32_t modeId) {
		return ((T (*)(LoadoutDataStore*, int32_t))(Il2CppBase() + 0x19638B0))(this, modeId);
	}
	template <typename T = void> T InitIndividuationitems() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1961518))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetIndividuationItems() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x19639D0))(this);
	}
	template <typename T = void> T RemoveIndividuation(uint64_t guid) {
		return ((T (*)(LoadoutDataStore*, uint64_t))(Il2CppBase() + 0x1963A70))(this, guid);
	}
	template <typename T = void> T RemoveIndividuationByPos(int32_t posIndex) {
		return ((T (*)(LoadoutDataStore*, int32_t))(Il2CppBase() + 0x1963BFC))(this, posIndex);
	}
	template <typename T = void> T SetIndividuationItems(Il2CppList<uintptr_t>* items) {
		return ((T (*)(LoadoutDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1961B84))(this, items);
	}
	template <typename T = void> T SetWinCircleIndividuationItem(uintptr_t itemInfo) {
		return ((T (*)(LoadoutDataStore*, uintptr_t))(Il2CppBase() + 0x1961DE0))(this, itemInfo);
	}
	template <typename T = uintptr_t> T GetWinCircleIndividuationItem() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1963D60))(this);
	}
	template <typename T = void> T SetKillCameraSprayItem(uintptr_t itemInfo) {
		return ((T (*)(LoadoutDataStore*, uintptr_t))(Il2CppBase() + 0x1961F80))(this, itemInfo);
	}
	template <typename T = uintptr_t> T GetKillCamSprayItem() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1963E00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1963EA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(LoadoutDataStore*))(Il2CppBase() + 0x1963EA8))(this);
	}

};

}
