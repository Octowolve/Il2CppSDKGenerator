#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessInterferenceDrone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcess_InterferenceDrone"));
	}

	template <typename T = bool> T& m_FindPredictPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_CachedPredictPoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_CachedDroneEffect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSendRequestOnBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DragTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedStopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPredict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmDragUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmQuickUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseRemoteControlledSkillItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContinuousUsing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseSkillSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOneDirectionSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T IsSendRequestOnBegin() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B2FB08))(this);
	}
	template <typename T = void> T OnDragBegin() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B2FBA8))(this);
	}
	template <typename T = void> T DragTick(float delatTime) {
		return ((T (*)(BRSkillProcessInterferenceDrone*, float))(Il2CppBase() + 0x1B306E8))(this, delatTime);
	}
	template <typename T = void> T OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B30848))(this);
	}
	template <typename T = bool> T NeedStopAim() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B30900))(this);
	}
	template <typename T = void> T ShowPredict(bool bShow) {
		return ((T (*)(BRSkillProcessInterferenceDrone*, bool))(Il2CppBase() + 0x1B2FC58))(this, bShow);
	}
	template <typename T = void> T OnConfirmDragUse() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B309A0))(this);
	}
	template <typename T = void> T OnConfirmQuickUse() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B30D00))(this);
	}
	template <typename T = void> T UseRemoteControlledSkillItem(int32_t itemID) {
		return ((T (*)(BRSkillProcessInterferenceDrone*, int32_t))(Il2CppBase() + 0x1B30B10))(this, itemID);
	}
	template <typename T = void> T OnCancelUseSkill() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B30E6C))(this);
	}
	template <typename T = bool> T IsContinuousUsing() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B30F1C))(this);
	}
	template <typename T = bool> T CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B31170))(this);
	}
	template <typename T = bool> T CheckUseSkillSpace(int32_t checkType, float checkSize) {
		return ((T (*)(BRSkillProcessInterferenceDrone*, int32_t, float))(Il2CppBase() + 0x1B31298))(this, checkType, checkSize);
	}
	template <typename T = bool> T CheckOneDirectionSpace(Il2CppVector3 pawnPosition, Il2CppVector3 direction, float size) {
		return ((T (*)(BRSkillProcessInterferenceDrone*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x1B317C8))(this, pawnPosition, direction, size);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSendRequestOnBegin() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B31948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragBegin() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B3194C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DragTick(float P0) {
		return ((T (*)(BRSkillProcessInterferenceDrone*, float))(Il2CppBase() + 0x1B31950))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B31954))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedStopAim() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B31958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnConfirmDragUse() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B3195C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnConfirmQuickUse() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B31960))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCancelUseSkill() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B31964))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsContinuousUsing() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B31968))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessInterferenceDrone*))(Il2CppBase() + 0x1B31A3C))(this);
	}

};

}
