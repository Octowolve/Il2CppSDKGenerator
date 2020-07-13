#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InteractiveObjectWithMatinee
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InteractiveObjectWithMatinee"));
	}

	template <typename T = bool> T& bCurrentOn() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& targetVolume() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& indicatorTriggers() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& indicatorDisappearTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& indicatorDisappearWhenGetClose() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& disableIndicator() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& insideTriggers() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& OpenSound() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& CloseSound() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& OpenEffectRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& OpenEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AudioObj() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpenAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCloseAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExitIndicatorTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x245FF60))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x2460000))(this);
	}
	template <typename T = Il2CppString*> T GetOpenAnim() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x2460104))(this);
	}
	template <typename T = Il2CppString*> T GetCloseAnim() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x24601BC))(this);
	}
	template <typename T = void> T OnStateChanged(bool bOn) {
		return ((T (*)(InteractiveObjectWithMatinee*, bool))(Il2CppBase() + 0x2460274))(this, bOn);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(InteractiveObjectWithMatinee*, uintptr_t, bool))(Il2CppBase() + 0x2460778))(this, p, enter);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x24609DC))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(InteractiveObjectWithMatinee*, float))(Il2CppBase() + 0x2460E30))(this, fDeltaTime);
	}
	template <typename T = void> T OnLocalPlayerEnterExitIndicatorTrigger(bool enter, uintptr_t indicatorTriggerVol) {
		return ((T (*)(InteractiveObjectWithMatinee*, bool, uintptr_t))(Il2CppBase() + 0x2460EF0))(this, enter, indicatorTriggerVol);
	}
	template <typename T = void> T ShowIndicator() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x2460C7C))(this);
	}
	template <typename T = void> T DisableIndicator() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x246085C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x24610DC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x24611D4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x24612EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x24612F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateChanged(bool P0) {
		return ((T (*)(InteractiveObjectWithMatinee*, bool))(Il2CppBase() + 0x24612FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerEnterExit(uintptr_t P0, bool P1) {
		return ((T (*)(InteractiveObjectWithMatinee*, uintptr_t, bool))(Il2CppBase() + 0x24613A0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(InteractiveObjectWithMatinee*))(Il2CppBase() + 0x24613A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(InteractiveObjectWithMatinee*, float))(Il2CppBase() + 0x24613A8))(this, P0);
	}

};

}
