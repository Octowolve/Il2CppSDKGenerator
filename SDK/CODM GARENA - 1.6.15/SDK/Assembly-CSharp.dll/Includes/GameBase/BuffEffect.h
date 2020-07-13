#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_ParamFloatArray1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ParamIntArry1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Buff() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_EffectActive() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsHidden() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EffectGOList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_Delay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CameraEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_TriggerCameraEffect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_EffectTickTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& EFFECT_TICK_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseStringParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCheckEffectInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEffectInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBuffIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTriggerScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTargetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelayRemoveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> T get_IsPersistent() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374E280))(this);
	}
	template <typename T = bool> T get_OnlyForLocalPlayer() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374E288))(this);
	}
	template <typename T = bool> T get_ControlCameraEffect() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374E290))(this);
	}
	template <typename T = void> T ParseStringParam() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374E298))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t effectType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x374A5E4))(0, effectType);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374E504))(this);
	}
	template <typename T = void> T Init(uintptr_t buff) {
		return ((T (*)(BuffEffect*, uintptr_t))(Il2CppBase() + 0x374E528))(this, buff);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374E5D0))(this);
	}
	template <typename T = void> T TriggerEffect() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374BB44))(this);
	}
	template <typename T = void> T DelayCheckEffectInfos() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374F11C))(this);
	}
	template <typename T = void> T CheckEffectInfo(int32_t effectID, Il2CppString* socket) {
		return ((T (*)(BuffEffect*, int32_t, Il2CppString*))(Il2CppBase() + 0x374E680))(this, effectID, socket);
	}
	template <typename T = void> T CheckBuffIcon(Il2CppString* buffIconName) {
		return ((T (*)(BuffEffect*, Il2CppString*))(Il2CppBase() + 0x374EB14))(this, buffIconName);
	}
	template <typename T = void> T CheckTriggerScreenEffect() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374ECCC))(this);
	}
	template <typename T = void> T CheckEndScreenEffect() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374F328))(this);
	}
	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374F5E4))(this);
	}
	template <typename T = void> T TriggerEffectOver() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374C2FC))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374F67C))(this);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t msg) {
		return ((T (*)(BuffEffect*, uintptr_t))(Il2CppBase() + 0x374F714))(this, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffect*, float))(Il2CppBase() + 0x374F7B4))(this, deltaTime);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374F9A4))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(BuffEffect*, bool))(Il2CppBase() + 0x374F9AC))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374F9B4))(this);
	}
	template <typename T = void> T OnDelayRemoveStart() {
		return ((T (*)(BuffEffect*))(Il2CppBase() + 0x374FBEC))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(BuffEffect*, bool))(Il2CppBase() + 0x374FC84))(this, isHidden);
	}

};

}
