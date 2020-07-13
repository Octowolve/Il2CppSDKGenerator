#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WinnerCircle {

class WinnerCircleFlowControllerEN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WinnerCircle", "WinnerCircleFlowControllerEN"));
	}

	template <typename T = bool> static T& IsOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& bFirstFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = uintptr_t> T& m_MainController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_backController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> static T& WINNER_CIRCLE_SOUNDBANK1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WINNER_CIRCLE_SOUNDBANK2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isSoundBankReady() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& CurrStage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& ShowSettlementViewFlowDelegate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideChildUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWinnerCircleBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySettlementBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBRPVPSettlementViewFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBRPVPOBSettlementViewFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPVESettlementViewFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettlementRankView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettlementExpDetailView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettlementBPView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettlementDetailDataView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBRReportWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReportPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4E870))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4E90C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4E9DC))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4EE10))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4F4DC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4F800))(this);
	}
	template <typename T = void> T HideChildUI() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4F978))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4FAA8))(this);
	}
	template <typename T = void> T PreloadSoundBank() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4ECAC))(this);
	}
	template <typename T = void> T PlayWinnerCircleBGM() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4EFF0))(this);
	}
	template <typename T = void> T PlaySettlementBGM(uintptr_t settlementDS) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A4FF10))(this, settlementDS);
	}
	template <typename T = void> T PlayMusic(Il2CppString* audioID, float delay) {
		return ((T (*)(WinnerCircleFlowControllerEN*, Il2CppString*, float))(Il2CppBase() + 0x4A50124))(this, audioID, delay);
	}
	template <typename T = void> T UnloadSoundBank() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A4FD48))(this);
	}
	template <typename T = void> T ShowBRPVPSettlementViewFlow(uintptr_t Msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A50384))(this, Msg);
	}
	template <typename T = void> T ShowBRPVPOBSettlementViewFlow(uintptr_t Msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A50A58))(this, Msg);
	}
	template <typename T = void> T ShowPVESettlementViewFlow(uintptr_t Msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A50FDC))(this, Msg);
	}
	template <typename T = void> T ShowSettlementRankView(uintptr_t Msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A51728))(this, Msg);
	}
	template <typename T = void> T OnLevelUp(uintptr_t msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A51944))(this, msg);
	}
	template <typename T = void> T ShowSettlementExpDetailView(uintptr_t Msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A51B48))(this, Msg);
	}
	template <typename T = void> T ShowSettlementBPView(uintptr_t Msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A51ECC))(this, Msg);
	}
	template <typename T = void> T ShowSettlementDetailDataView(uintptr_t Msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A521EC))(this, Msg);
	}
	template <typename T = void> T ShowBRReportWindow(uintptr_t msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A52450))(this, msg);
	}
	template <typename T = void> T OnReportPlayer(uintptr_t msg) {
		return ((T (*)(WinnerCircleFlowControllerEN*, uintptr_t))(Il2CppBase() + 0x4A52A30))(this, msg);
	}
	template <typename T = bool> static T ShowBRReportWindowm__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A52C80))(0, s);
	}
	template <typename T = bool> static T ShowBRReportWindowm__1(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A52CB0))(0, s);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A52CE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A52CE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A52CF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A52CF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A52D00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(WinnerCircleFlowControllerEN*))(Il2CppBase() + 0x4A52D08))(this);
	}

};

}
