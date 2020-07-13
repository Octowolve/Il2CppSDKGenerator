#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialManager"));
	}

	template <typename T = bool> static T& m_IsTutorialToolsForceEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& m_TutorialEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& m_PrologueEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = bool> static T& m_TutorialFinalEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}
	template <typename T = uint64_t> T& m_LocalPlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsReconnected() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_CheckedUpdateTutorial() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& tutorialDataStore() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ForceTutorials() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_CurrentOutGameTutorial() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_CurrentInGameTutorial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& m_CurrentTutorialEventType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFtueSPVPMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForbidReceiveInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTutorialEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialPrologueEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialFinalEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCurrentOutGameTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCurrentInGameTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTutorialEventOutGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTutorialEventInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTutorialEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NofityServerTutorialFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTutorials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTutorialFromServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTutorialFtue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyServerTutorialDataChangedReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyServerTutorialStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsTutorialFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkTutorialFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MarkTutorialFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllTutorialsFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeaconReportFtueStepData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PVENewGuide_IsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PVENewGuide_Finish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewGuide_NofityServerTutorialFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewGuide_GetTutorialTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewGuide_SetTutorialTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewGuide_NotifyServerTutorialDataChangedReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TutorialFinalReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = int32_t> T GetFtueSPVPMapID() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4240004))(this);
	}
	template <typename T = bool> T ForbidReceiveInvitation() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4240114))(this);
	}
	template <typename T = bool> static T get_IsTutorialToolsForceEnable() {
		return ((T (*)(void *))(Il2CppBase() + 0x4240738))(0);
	}
	template <typename T = void> static T set_IsTutorialToolsForceEnable(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x42407E8))(0, value);
	}
	template <typename T = void> static T SetTutorialEnable(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x424089C))(0, enable);
	}
	template <typename T = bool> static T IsTutorialEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x42383C4))(0);
	}
	template <typename T = bool> static T IsTutorialPrologueEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x42409A4))(0);
	}
	template <typename T = bool> static T IsTutorialFinalEnable() {
		return ((T (*)(void *))(Il2CppBase() + 0x4240AAC))(0);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4240BB4))(this);
	}
	template <typename T = uintptr_t> T get_CurrentOutGameTutorial() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4240730))(this);
	}
	template <typename T = void> T ResetCurrentOutGameTutorial() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4236EEC))(this);
	}
	template <typename T = uintptr_t> T get_CurrentInGameTutorial() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4240C88))(this);
	}
	template <typename T = void> T ResetCurrentInGameTutorial() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4240C90))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4231B44))(0);
	}
	template <typename T = uintptr_t> T get_CurrentTutorialEventType() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4240D64))(this);
	}
	template <typename T = void> T ProcessTutorialEventOutGame(uintptr_t eventType, Il2CppArray<uintptr_t>* eventInfo) {
		return ((T (*)(TutorialManager*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4231CA0))(this, eventType, eventInfo);
	}
	template <typename T = void> T ProcessTutorialEventInGame(uintptr_t eventType, Il2CppArray<uintptr_t>* eventInfo) {
		return ((T (*)(TutorialManager*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42410F4))(this, eventType, eventInfo);
	}
	template <typename T = void> T ProcessTutorialEvent(uintptr_t currentTutorial, bool inGame, uintptr_t eventType, Il2CppArray<uintptr_t>* eventInfo) {
		return ((T (*)(TutorialManager*, uintptr_t, bool, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4240D6C))(this, currentTutorial, inGame, eventType, eventInfo);
	}
	template <typename T = void> T NofityServerTutorialFinish(uintptr_t tutorialType) {
		return ((T (*)(TutorialManager*, uintptr_t))(Il2CppBase() + 0x4241AC0))(this, tutorialType);
	}
	template <typename T = uintptr_t> T FindTutorial(uintptr_t e, bool inGame) {
		return ((T (*)(TutorialManager*, uintptr_t, bool))(Il2CppBase() + 0x424138C))(this, e, inGame);
	}
	template <typename T = void> T CreateTutorials() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4241C24))(this);
	}
	template <typename T = void> T CreateTutorialFromServer() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4241F0C))(this);
	}
	template <typename T = void> T CreateTutorialFtue() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x4242428))(this);
	}
	template <typename T = void> T RegisterCallback(uintptr_t eventType, uintptr_t call) {
		return ((T (*)(TutorialManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4242794))(this, eventType, call);
	}
	template <typename T = void> T NotifyServerTutorialDataChangedReq(int32_t tutorialType, bool isCover) {
		return ((T (*)(TutorialManager*, int32_t, bool))(Il2CppBase() + 0x4241870))(this, tutorialType, isCover);
	}
	template <typename T = void> T NotifyServerTutorialStart(int32_t tutorialType) {
		return ((T (*)(TutorialManager*, int32_t))(Il2CppBase() + 0x4241714))(this, tutorialType);
	}
	template <typename T = bool> T IsTutorialFinished(int32_t inType) {
		return ((T (*)(TutorialManager*, int32_t))(Il2CppBase() + 0x42405D4))(this, inType);
	}
	template <typename T = bool> T IsTutorialFinished_1(uintptr_t type) {
		return ((T (*)(TutorialManager*, uintptr_t))(Il2CppBase() + 0x4242A08))(this, type);
	}
	template <typename T = void> T MarkTutorialFinished(int32_t inType) {
		return ((T (*)(TutorialManager*, int32_t))(Il2CppBase() + 0x4242AE8))(this, inType);
	}
	template <typename T = void> T MarkTutorialFinished_1(uintptr_t type) {
		return ((T (*)(TutorialManager*, uintptr_t))(Il2CppBase() + 0x4242D94))(this, type);
	}
	template <typename T = bool> T CheckAllTutorialsFinished() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x42411F8))(this);
	}
	template <typename T = void> static T BeaconReportFtueStepData(int32_t eventType) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4241548))(0, eventType);
	}
	template <typename T = bool> T PVENewGuide_IsFinish(int32_t inType) {
		return ((T (*)(TutorialManager*, int32_t))(Il2CppBase() + 0x4242E74))(this, inType);
	}
	template <typename T = void> T PVENewGuide_Finish(int32_t inType) {
		return ((T (*)(TutorialManager*, int32_t))(Il2CppBase() + 0x4242F9C))(this, inType);
	}
	template <typename T = void> T NewGuide_NofityServerTutorialFinish(int32_t itemTypeCount, uintptr_t tutorialBegin) {
		return ((T (*)(TutorialManager*, int32_t, uintptr_t))(Il2CppBase() + 0x42430E8))(this, itemTypeCount, tutorialBegin);
	}
	template <typename T = int32_t> T NewGuide_GetTutorialTimes(int32_t itemTypeCount, uintptr_t tutorialBegin) {
		return ((T (*)(TutorialManager*, int32_t, uintptr_t))(Il2CppBase() + 0x4243214))(this, itemTypeCount, tutorialBegin);
	}
	template <typename T = void> T NewGuide_SetTutorialTimes(int32_t itemTypeCount, uintptr_t tutorialBegin, int32_t times) {
		return ((T (*)(TutorialManager*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x424337C))(this, itemTypeCount, tutorialBegin, times);
	}
	template <typename T = void> T NewGuide_NotifyServerTutorialDataChangedReq(int32_t itemTypeCount, uintptr_t tutorialBegin) {
		return ((T (*)(TutorialManager*, int32_t, uintptr_t))(Il2CppBase() + 0x42434F8))(this, itemTypeCount, tutorialBegin);
	}
	template <typename T = void> static T TutorialFinalReport(uintptr_t step) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x423BAFC))(0, step);
	}
	template <typename T = bool> T RegisterCallbackm__0(uintptr_t t) {
		return ((T (*)(TutorialManager*, uintptr_t))(Il2CppBase() + 0x42437D8))(this, t);
	}

};

}
