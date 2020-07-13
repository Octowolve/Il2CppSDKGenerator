#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameAnimatorStateChangeClip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameAnimatorStateChangeClip"));
	}

	template <typename T = Il2CppString*> static T& discardStartEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& discardEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& reloadStartEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& reloadEndEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& clip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& leftHand() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& clipCenter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_TClip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_LeftHand() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_ClipCenter() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_discardChangeTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_discardStartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_discardTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_reloadStartTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_reloadChangeTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_reloadEndTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_CacheLayerIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_CurrentClipNameHash() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FStateUpdate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_StateIdx() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& LocPonit() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& locEulerAngles() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_owner() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_IsRun() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_revise() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEventTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StateOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_discardStateStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_discardStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_discardState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_reloadStateStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_reloadStateEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_reloadStateFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_nullState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T revise(uintptr_t obj, uintptr_t Bone) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EC198))(this, obj, Bone);
	}
	template <typename T = void> T OnChangeWeapon() {
		return ((T (*)(GameAnimatorStateChangeClip*))(Il2CppBase() + 0x31EC34C))(this);
	}
	template <typename T = void> T OnStateEnter(uintptr_t animator, int32_t layerIndex, int32_t nameHash) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x31EC3F8))(this, animator, layerIndex, nameHash);
	}
	template <typename T = bool> T GetEventTime(uintptr_t animator, int32_t layerIndex) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, int32_t))(Il2CppBase() + 0x31ECC54))(this, animator, layerIndex);
	}
	template <typename T = void> T OnStateExit() {
		return ((T (*)(GameAnimatorStateChangeClip*))(Il2CppBase() + 0x31ED468))(this);
	}
	template <typename T = void> T StateOver() {
		return ((T (*)(GameAnimatorStateChangeClip*))(Il2CppBase() + 0x31ED50C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GameAnimatorStateChangeClip*))(Il2CppBase() + 0x31ED9DC))(this);
	}
	template <typename T = void> T OnStateUpdate(uintptr_t animator) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t))(Il2CppBase() + 0x31EDA80))(this, animator);
	}
	template <typename T = void> T discardStateStart(uintptr_t animator, uintptr_t stateInfo) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EDEB0))(this, animator, stateInfo);
	}
	template <typename T = void> T discardStateChange(uintptr_t animator, uintptr_t stateInfo) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EE2FC))(this, animator, stateInfo);
	}
	template <typename T = void> T discardState(uintptr_t animator, uintptr_t stateInfo) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EE618))(this, animator, stateInfo);
	}
	template <typename T = void> T reloadStateStart(uintptr_t animator, uintptr_t stateInfo) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EE9B0))(this, animator, stateInfo);
	}
	template <typename T = void> T reloadStateEnd(uintptr_t animator, uintptr_t stateInfo) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EEF14))(this, animator, stateInfo);
	}
	template <typename T = void> T reloadStateFinish(uintptr_t animator, uintptr_t stateInfo) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EF320))(this, animator, stateInfo);
	}
	template <typename T = void> T nullState(uintptr_t animator, uintptr_t stateInfo) {
		return ((T (*)(GameAnimatorStateChangeClip*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EF80C))(this, animator, stateInfo);
	}
	template <typename T = bool> T IsEnded() {
		return ((T (*)(GameAnimatorStateChangeClip*))(Il2CppBase() + 0x31EF8FC))(this);
	}

};

}
