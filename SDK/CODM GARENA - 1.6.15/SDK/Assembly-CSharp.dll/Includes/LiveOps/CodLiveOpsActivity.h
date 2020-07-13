#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsActivity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsActivity"));
	}

	template <typename T = uint64_t> T& m_ActivityId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ActivityType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_LobbyIntervalTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_TagType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_ActivityEntryIcon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_ActivityEntryIconUrl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_RightIcon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_RightIconUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_ShowPic() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_ShowPicUrl() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_IsShowInLobby() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_TimeZone() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_ActivityName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& m_ActivityDesc() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_Miscellaneous() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_Miscellaneous1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_LeftNum() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_TopNum() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_MinLevel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_MinShowLevel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_TaskGroup_Id() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_ActivityBeginTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_ActivityEndTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_ActivityShowBeginTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_ActivityShowEndTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& m_FaceSpriteName() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& m_FaceDesc() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_Announcement_Id() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& m_Announcement_Content() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_TotalTaskPoints() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PointRewards() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_ActivityProgress() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int64_t> T& m_FinishTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& soldierReturnInfo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& actv_state() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& m_Actv_id() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_Activity_type_LuckBag() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_ShopRateCD() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& m_ShopRateUrlApple() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& m_ShopRateUrlGooglePlay() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& m_ShopRateServiceUrl() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& m_ShopRateMaxTipCount() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_EffectMode() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Tasks() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& m_EffectNum() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBadgeNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsNewActiviey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllTasksFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDailyExchangeTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurExchangeItemNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSingleTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMultiTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uint64_t> T get_ActivityId() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4940F68))(this);
	}
	template <typename T = uintptr_t> T get_ActivityType() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943DE0))(this);
	}
	template <typename T = int32_t> T get_LobbyIntervalTime() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943DE8))(this);
	}
	template <typename T = int32_t> T get_TagType() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943DF0))(this);
	}
	template <typename T = Il2CppString*> T get_ActivityEntryIcon() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943DF8))(this);
	}
	template <typename T = Il2CppString*> T get_ActivityEntryIconUrl() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E00))(this);
	}
	template <typename T = Il2CppString*> T get_RightIcon() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E08))(this);
	}
	template <typename T = Il2CppString*> T get_RightIconUrl() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E10))(this);
	}
	template <typename T = Il2CppString*> T get_ShowPic() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E18))(this);
	}
	template <typename T = Il2CppString*> T get_ShowPicUrl() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E20))(this);
	}
	template <typename T = int32_t> T get_IsShowInLobby() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E28))(this);
	}
	template <typename T = Il2CppString*> T get_ActivityName() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E30))(this);
	}
	template <typename T = Il2CppString*> T get_ActivityDesc() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E38))(this);
	}
	template <typename T = Il2CppString*> T get_Miscellaneous() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E40))(this);
	}
	template <typename T = Il2CppString*> T get_Miscellaneous1() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E48))(this);
	}
	template <typename T = int32_t> T get_LeftNum() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E50))(this);
	}
	template <typename T = int32_t> T get_TopNum() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E58))(this);
	}
	template <typename T = int32_t> T get_MinLevel() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E60))(this);
	}
	template <typename T = int32_t> T get_MinShowLevel() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E68))(this);
	}
	template <typename T = int32_t> T get_TaskGroup_Id() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E70))(this);
	}
	template <typename T = int32_t> T get_ActivityBeginTime() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E78))(this);
	}
	template <typename T = int32_t> T get_ActivityEndTime() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E80))(this);
	}
	template <typename T = int32_t> T get_ActivityShowBeginTime() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E88))(this);
	}
	template <typename T = int32_t> T get_AcitivityShowEndTime() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E90))(this);
	}
	template <typename T = Il2CppString*> T get_AnnouncementContent() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943E98))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PointRewards() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943EA0))(this);
	}
	template <typename T = int32_t> T get_ActivityProgress() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943EA8))(this);
	}
	template <typename T = int64_t> T get_FinishTime() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943EB0))(this);
	}
	template <typename T = uintptr_t> T get_soldierReturnInfo() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943EB8))(this);
	}
	template <typename T = void> T set_soldierReturnInfo(uintptr_t value) {
		return ((T (*)(CodLiveOpsActivity*, uintptr_t))(Il2CppBase() + 0x4943EC0))(this, value);
	}
	template <typename T = uintptr_t> T get_actv_state() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943EC8))(this);
	}
	template <typename T = void> T set_actv_state(uintptr_t value) {
		return ((T (*)(CodLiveOpsActivity*, uintptr_t))(Il2CppBase() + 0x4943ED0))(this, value);
	}
	template <typename T = uint32_t> T get_Actv_id() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943ED8))(this);
	}
	template <typename T = uintptr_t> T get_Activity_type_LuckBag() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943EE0))(this);
	}
	template <typename T = int32_t> T get_ShopRateCD() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943EE8))(this);
	}
	template <typename T = Il2CppString*> T get_ShopRateUrlApple() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943EF0))(this);
	}
	template <typename T = Il2CppString*> T get_ShopRateUrlGooglePlay() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943EF8))(this);
	}
	template <typename T = Il2CppString*> T get_ShopRateServiceUrl() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943F00))(this);
	}
	template <typename T = int32_t> T get_ShopRateMaxTipCount() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943F08))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_EffectMode() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943F10))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Tasks() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943F18))(this);
	}
	template <typename T = int32_t> T get_EffectNum() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4943F20))(this);
	}
	template <typename T = void> T SetData(uintptr_t res, Il2CppList<uintptr_t>* SubTask, int32_t index, uint64_t playerId) {
		return ((T (*)(CodLiveOpsActivity*, uintptr_t, Il2CppList<uintptr_t>*, int32_t, uint64_t))(Il2CppBase() + 0x4943F28))(this, res, SubTask, index, playerId);
	}
	template <typename T = int32_t> T GetBadgeNum() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4945DE4))(this);
	}
	template <typename T = bool> T get_isShowRed() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x49466B8))(this);
	}
	template <typename T = bool> T GetIsNewActiviey() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4946BA8))(this);
	}
	template <typename T = bool> T AllTasksFinished() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4946CD8))(this);
	}
	template <typename T = void> T SetDy(uintptr_t res, uint64_t playerId) {
		return ((T (*)(CodLiveOpsActivity*, uintptr_t, uint64_t))(Il2CppBase() + 0x4946E20))(this, res, playerId);
	}
	template <typename T = bool> T IsValid(double serverTime, uint32_t level) {
		return ((T (*)(CodLiveOpsActivity*, double, uint32_t))(Il2CppBase() + 0x4947420))(this, serverTime, level);
	}
	template <typename T = void> T SetDailyExchangeTip(uint64_t seqId, bool HightLight) {
		return ((T (*)(CodLiveOpsActivity*, uint64_t, bool))(Il2CppBase() + 0x49475E8))(this, seqId, HightLight);
	}
	template <typename T = void> T SetCurExchangeItemNum(int32_t goldNum) {
		return ((T (*)(CodLiveOpsActivity*, int32_t))(Il2CppBase() + 0x4947798))(this, goldNum);
	}
	template <typename T = uintptr_t> T GetActivityState() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x49478D4))(this);
	}
	template <typename T = uintptr_t> T GetSingleTask() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4946A94))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetMultiTask() {
		return ((T (*)(CodLiveOpsActivity*))(Il2CppBase() + 0x4947AC8))(this);
	}
	template <typename T = bool> static T GetBadgeNumm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4947BAC))(0, it);
	}
	template <typename T = bool> static T get_isShowRedm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4947C04))(0, x);
	}

};

}
