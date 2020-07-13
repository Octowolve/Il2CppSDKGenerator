#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class Buff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Buff"));
	}

	template <typename T = uint32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& m_From() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& m_TargetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ConfList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Conf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_Layer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_SetTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_Effect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_GivenBy() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& OnBuffTimeOver() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_Active() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_ServerActive() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGivenBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTargetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelayRemoveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uint32_t> T get_UID() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749D00))(this);
	}
	template <typename T = uint32_t> T get_From() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749D08))(this);
	}
	template <typename T = uint32_t> T get_TargetID() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749D10))(this);
	}
	template <typename T = uintptr_t> T get_Conf() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749D18))(this);
	}
	template <typename T = int32_t> T get_Layer() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749D20))(this);
	}
	template <typename T = float> T get_SetTime() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749D28))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749D30))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749D48))(this);
	}
	template <typename T = int32_t> T get_Group() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749E14))(this);
	}
	template <typename T = int32_t> T get_Power() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749E2C))(this);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749E44))(this);
	}
	template <typename T = bool> T get_Coexist() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749E4C))(this);
	}
	template <typename T = uintptr_t> T get_CombineType_Add() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749E74))(this);
	}
	template <typename T = uintptr_t> T get_CombineType_Remove() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749E8C))(this);
	}
	template <typename T = int32_t> T get_LayerMax() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749EA4))(this);
	}
	template <typename T = uintptr_t> T get_ConditionType() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749EBC))(this);
	}
	template <typename T = float> T get_ConditionParam() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749ED4))(this);
	}
	template <typename T = float> T get_Probability() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749EEC))(this);
	}
	template <typename T = Il2CppString*> T get_EffectConfig() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749F04))(this);
	}
	template <typename T = uintptr_t> T get_EffectType() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749FD0))(this);
	}
	template <typename T = float> T get_EffectParam1() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x3749FE8))(this);
	}
	template <typename T = float> T get_EffectParam2() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A000))(this);
	}
	template <typename T = float> T get_EffectParam3() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A018))(this);
	}
	template <typename T = float> T get_EffectParam4() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A030))(this);
	}
	template <typename T = Il2CppString*> T get_TriggerSoundEvent() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A048))(this);
	}
	template <typename T = Il2CppString*> T get_TrigetOverSoundEvent() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A114))(this);
	}
	template <typename T = bool> T get_IsDelayDeleteBuff() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A1E0))(this);
	}
	template <typename T = float> T get_DelayRemoveTime() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A208))(this);
	}
	template <typename T = float> T get_CalcVal() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A2D0))(this);
	}
	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A4B0))(this);
	}
	template <typename T = uintptr_t> T get_GivenBy() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374A4B8))(this);
	}
	template <typename T = void> T Init(uint32_t targetID, uint32_t from, uint32_t uid, uintptr_t conf) {
		return ((T (*)(Buff*, uint32_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x374A4C0))(this, targetID, from, uid, conf);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374B5FC))(this);
	}
	template <typename T = void> T UpdateTarget(uintptr_t target) {
		return ((T (*)(Buff*, uintptr_t))(Il2CppBase() + 0x374B77C))(this, target);
	}
	template <typename T = void> T UpdateGivenBy(uintptr_t givenBy) {
		return ((T (*)(Buff*, uintptr_t))(Il2CppBase() + 0x374BA9C))(this, givenBy);
	}
	template <typename T = void> T UpdateState(bool active, int32_t layer, float duration, bool trigger) {
		return ((T (*)(Buff*, bool, int32_t, float, bool))(Il2CppBase() + 0x374B8F0))(this, active, layer, duration, trigger);
	}
	template <typename T = void> T RefreshTriggerEffect(bool active) {
		return ((T (*)(Buff*, bool))(Il2CppBase() + 0x374CA88))(this, active);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t msg) {
		return ((T (*)(Buff*, uintptr_t))(Il2CppBase() + 0x374CBE4))(this, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(Buff*, float))(Il2CppBase() + 0x374CCA8))(this, deltaTime);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374CEB8))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(Buff*, bool))(Il2CppBase() + 0x374CEC0))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374CEC8))(this);
	}
	template <typename T = void> T OnDelayRemoveStart() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374CF60))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(Buff*, bool))(Il2CppBase() + 0x374D018))(this, isHidden);
	}
	template <typename T = Il2CppString*> T BuildBuffInfo() {
		return ((T (*)(Buff*))(Il2CppBase() + 0x374D0DC))(this);
	}

};

}
