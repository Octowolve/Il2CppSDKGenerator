#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class PVPModePlayerListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "PVPModePlayerListController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DELAY_SHOW_SECONDS_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& BanScrollHasSet() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& MAP_FLAG_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadingProgressUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCampUIListByNewPlayerJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSinglePlayerView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSameCampPlayersView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSinglePVPViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShootoutView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set1V1PVPViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set2V2PVPViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTeamPVPViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayersList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMiniMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllFlagDescIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllFlagDescLabels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMapDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFlagDescIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFlagDescLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransformLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransformEulerAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransformLocalScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRightVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_List2Vector3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTrainGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCampGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3304094))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3304168))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x33043F8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x330527C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x330541C))(this);
	}
	template <typename T = void> T OnLoadingProgressUpdate(uintptr_t Msg) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t))(Il2CppBase() + 0x330551C))(this, Msg);
	}
	template <typename T = void> T RefreshCampUIListByNewPlayerJoin(uintptr_t Msg) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t))(Il2CppBase() + 0x330599C))(this, Msg);
	}
	template <typename T = void> T RefreshList(bool isTraitorCamp) {
		return ((T (*)(PVPModePlayerListController*, bool))(Il2CppBase() + 0x3305B04))(this, isTraitorCamp);
	}
	template <typename T = void> T ShowViews() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x33048F0))(this);
	}
	template <typename T = void> T SetSinglePlayerView() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3305E60))(this);
	}
	template <typename T = void> T SetSameCampPlayersView() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x330612C))(this);
	}
	template <typename T = void> T SetSinglePVPViews() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x330660C))(this);
	}
	template <typename T = void> T SetShootoutView() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x330631C))(this);
	}
	template <typename T = void> T Set1V1PVPViews() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x33068F8))(this);
	}
	template <typename T = void> T Set2V2PVPViews() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3306AAC))(this);
	}
	template <typename T = void> T SetTeamPVPViews() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3306C5C))(this);
	}
	template <typename T = void> T GetPlayersList(uintptr_t upperSideDataList, uintptr_t lowerSideDataList) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3307150))(this, upperSideDataList, lowerSideDataList);
	}
	template <typename T = void> T OnResetMapInfo() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x330505C))(this);
	}
	template <typename T = void> T ResetMiniMap(uintptr_t data) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t))(Il2CppBase() + 0x33079D8))(this, data);
	}
	template <typename T = void> T ResetAllPoints(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PVPModePlayerListController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3307F78))(this, list);
	}
	template <typename T = void> T ResetAllPoint(uintptr_t data) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t))(Il2CppBase() + 0x3309004))(this, data);
	}
	template <typename T = void> T ResetAllFlagDescIcon(uintptr_t data) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t))(Il2CppBase() + 0x33090D4))(this, data);
	}
	template <typename T = void> T ResetAllFlagDescLabels(uintptr_t data) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t))(Il2CppBase() + 0x33091A4))(this, data);
	}
	template <typename T = void> T ResetMapDesc(uintptr_t data) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t))(Il2CppBase() + 0x3307D54))(this, data);
	}
	template <typename T = void> T ResetPoint(int32_t index, Il2CppArray<uintptr_t>* positions, Il2CppArray<uintptr_t>* angles, Il2CppArray<uintptr_t>* scales) {
		return ((T (*)(PVPModePlayerListController*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3309274))(this, index, positions, angles, scales);
	}
	template <typename T = void> T ResetFlagDescIcon(int32_t index, int32_t icon, Il2CppArray<uintptr_t>* positions, Il2CppArray<uintptr_t>* angles, Il2CppArray<uintptr_t>* scales) {
		return ((T (*)(PVPModePlayerListController*, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3309364))(this, index, icon, positions, angles, scales);
	}
	template <typename T = void> T ResetFlagDescLabel(int32_t index, Il2CppString* label, Il2CppArray<uintptr_t>* positions, int32_t direction, Il2CppArray<uintptr_t>* scales) {
		return ((T (*)(PVPModePlayerListController*, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3309460))(this, index, label, positions, direction, scales);
	}
	template <typename T = void> T ResetTransformLocalPosition(uintptr_t transform, Il2CppArray<uintptr_t>* positions) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x33081B4))(this, transform, positions);
	}
	template <typename T = void> T ResetTransformEulerAngles(uintptr_t transform, Il2CppArray<uintptr_t>* angles) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x330837C))(this, transform, angles);
	}
	template <typename T = void> T ResetTransformLocalScale(uintptr_t transform, Il2CppArray<uintptr_t>* scales) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3308514))(this, transform, scales);
	}
	template <typename T = bool> T IsRightVector(Il2CppArray<uintptr_t>* vectorArray) {
		return ((T (*)(PVPModePlayerListController*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3309710))(this, vectorArray);
	}
	template <typename T = Il2CppVector3> T List2Vector3(Il2CppArray<uintptr_t>* list, Il2CppVector3 defaut) {
		return ((T (*)(PVPModePlayerListController*, Il2CppArray<uintptr_t>*, Il2CppVector3))(Il2CppBase() + 0x330955C))(this, list, defaut);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3309800))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(PVPModePlayerListController*, uintptr_t, int32_t))(Il2CppBase() + 0x33098F8))(this, list, userContext);
	}
	template <typename T = bool> static T IsTrainGameMode(uintptr_t inMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3305784))(0, inMode);
	}
	template <typename T = bool> static T IsSameCampGameMode(uintptr_t inMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3306050))(0, inMode);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3309C68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3309C70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3309C78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3309C80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPModePlayerListController*))(Il2CppBase() + 0x3309C88))(this);
	}

};

}
