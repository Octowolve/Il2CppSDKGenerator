#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMTaskProgressHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMTaskProgressHUD"));
	}

	template <typename T = bool> T& m_bShowingEndTips() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = float> T& ProgressLength() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TaskNodeContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TaskNodeNormal_Template() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& TaskNodeActive_Template() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TaskLineNormal_Template() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TaskLineActive_Template() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ExcutingLine_Template() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ExcutingArrow_Template() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& FirstPointExcuting_Template() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& currentTaskName() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TaskStartTips() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& TaskAnimRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TaskNodes() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TaskLines() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TaskExcutingLines() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TaskExcutingArrows() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_FirstActive() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_FirstExcutingLine() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_FirstExcutingArrow() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_bHasInited() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ProgressBarDesc() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& CollectProgressBar() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SurviveProgressBar() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& GuardingProgrssBar() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CustomProgressBar() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& bBeginUpdateExcuting() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& taskDisplayPrefix() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& totalProgress() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& currentClientProgress() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& lastTaskIdx() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& hasPlayL1S1PassBGM() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& hasPlayL1S2PassBGM() {
		return *(T*)((uintptr_t)this + 0xF5);
	}
	template <typename T = bool> T& hasPlayL1S3PassBGM() {
		return *(T*)((uintptr_t)this + 0xF6);
	}
	template <typename T = bool> T& hasPlayL2S1PassBGM() {
		return *(T*)((uintptr_t)this + 0xF7);
	}
	template <typename T = bool> T& hasPlayL2S2PassBGM() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& hasPlayL2S3PassBGM() {
		return *(T*)((uintptr_t)this + 0xF9);
	}
	template <typename T = bool> T& lastFirst() {
		return *(T*)((uintptr_t)this + 0xFA);
	}
	template <typename T = bool> T& m_ShowTargetShark() {
		return *(T*)((uintptr_t)this + 0xFB);
	}
	template <typename T = float> static T& TARGET_SHAKE_Interval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CacheTarget() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& Normal() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_CurrentStyle() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& m_CurrentProgress() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& m_MaxProgress() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uint32_t> T& m_GuardingId() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& m_TargetTimeSec() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& targetValue() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& interpSpeed() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& m_CacheCurrentTaskName() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDOMObjectiveVolumeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTotalTaskNodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentTaskNodeIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayZMLevelFinishSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBossFight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyShowingEndTaskTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lua_ShowTaskBeginTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTaskBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowTaskBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TaskBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenTaskNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTaskNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Task_IData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTargetSharkTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TargetSharkTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopShark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lua_SetProgressBarStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchProgressBarStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lua_SetMaxProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lua_SetCurrentProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lua_SetProgressBarTargetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lua_SetProgressBarInterpSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lua_SetTaskName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A62A18))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A62B2C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A62B34))(this);
	}
	template <typename T = void> T SetDOMObjectiveVolumeActive(int32_t areaId) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A62B40))(this, areaId);
	}
	template <typename T = void> T SetTotalTaskNodes(int32_t totalTaskNode) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A62D2C))(this, totalTaskNode);
	}
	template <typename T = void> T SetCurrentTaskNodeIndex(int32_t currentTaskIndex) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A643C4))(this, currentTaskIndex);
	}
	template <typename T = void> T PlayZMLevelFinishSound(int32_t crtTaskIdx) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A64934))(this, crtTaskIdx);
	}
	template <typename T = bool> T IsBossFight() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A64E24))(this);
	}
	template <typename T = void> T NotifyShowingEndTaskTips(uintptr_t MSG) {
		return ((T (*)(ZMTaskProgressHUD*, uintptr_t))(Il2CppBase() + 0x2A64F20))(this, MSG);
	}
	template <typename T = void> T Lua_ShowTaskBeginTips(Il2CppString* content) {
		return ((T (*)(ZMTaskProgressHUD*, Il2CppString*))(Il2CppBase() + 0x2A65048))(this, content);
	}
	template <typename T = void> T ShowTaskBegin() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A65118))(this);
	}
	template <typename T = void> T DelayShowTaskBegin() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A65238))(this);
	}
	template <typename T = void> T TaskBegin() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A65300))(this);
	}
	template <typename T = void> T GenTaskNode(int32_t nodeCount) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A62DE0))(this, nodeCount);
	}
	template <typename T = void> T UpdateTaskNode(int32_t CurrentNodeIdx) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A64474))(this, CurrentNodeIdx);
	}
	template <typename T = void> T Task_IData(int32_t CurrentNodeIdx) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A65548))(this, CurrentNodeIdx);
	}
	template <typename T = void> T CheckTargetSharkTrigger(int32_t target) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A658BC))(this, target);
	}
	template <typename T = void> T TargetSharkTrigger() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A65978))(this);
	}
	template <typename T = uintptr_t> T StopShark() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A65A10))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A65AF8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A65BA8))(this);
	}
	template <typename T = void> T BossShow(uintptr_t netWorkBossAIPawn) {
		return ((T (*)(ZMTaskProgressHUD*, uintptr_t))(Il2CppBase() + 0x2A65D4C))(this, netWorkBossAIPawn);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A65E14))(this);
	}
	template <typename T = void> T Lua_SetProgressBarStyle(int32_t Style) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A65FB4))(this, Style);
	}
	template <typename T = void> T SwitchProgressBarStyle(uintptr_t style) {
		return ((T (*)(ZMTaskProgressHUD*, uintptr_t))(Il2CppBase() + 0x2A660FC))(this, style);
	}
	template <typename T = void> T Lua_SetMaxProgress(int32_t max) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A662F4))(this, max);
	}
	template <typename T = void> T Lua_SetCurrentProgress(int32_t current) {
		return ((T (*)(ZMTaskProgressHUD*, int32_t))(Il2CppBase() + 0x2A663AC))(this, current);
	}
	template <typename T = void> T Lua_SetProgressBarTargetValue(float value) {
		return ((T (*)(ZMTaskProgressHUD*, float))(Il2CppBase() + 0x2A66608))(this, value);
	}
	template <typename T = void> T Lua_SetProgressBarInterpSpeed(float interpSpeed) {
		return ((T (*)(ZMTaskProgressHUD*, float))(Il2CppBase() + 0x2A666B4))(this, interpSpeed);
	}
	template <typename T = void> T Lua_SetTaskName(Il2CppString* name) {
		return ((T (*)(ZMTaskProgressHUD*, Il2CppString*))(Il2CppBase() + 0x2A66760))(this, name);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A6682C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ZMTaskProgressHUD*, float))(Il2CppBase() + 0x2A66834))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A66D78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A66D80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A66D88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(ZMTaskProgressHUD*))(Il2CppBase() + 0x2A66D90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ZMTaskProgressHUD*, float))(Il2CppBase() + 0x2A66D98))(this, P0);
	}

};

}
