#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LauncherPart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LauncherPart"));
	}

	template <typename T = uintptr_t> T& m_Launcher() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_LauncherAnimator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_bHasPassenger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_bWaitEject() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = float> T& m_fCarryTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_fWaitEjectTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Passenger() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LaunchStationModelName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_CurrState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_PreState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_parentPropPawn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_strSocketName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_RocketFireSocketName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_RocketFireEffect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_nAssetIDRocketFireEffect() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_LightEffect() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_LightFlashEffect() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_nAssetIDLightEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_nAssetIDLightFlashEffect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_fStartSpeedValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_fAcceleratedValue() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_fAcceleratedValueOfAV() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_fGravityValue() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& m_StartVelocity() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& m_AcceleratedVelocity() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& m_GravityVelocity() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& m_CurrVelocity() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& m_AcceleratedVelocityOfAV() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& m_LaunchDir() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_fTotalDropTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_fSumDropDeltaTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_ActorId() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_bUsable() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLauncherNetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLaunchParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAccelerateValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUpwardActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUpwardActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUpwardActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSeparatedUpwardActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSeparatedUpwardActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSeparatedUpwardActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDropActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDropActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDropActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoInactiveActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoInactiveActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoInactiveActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoActiveActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoActiveActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoActiveActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoGetReadyUpActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoGetReadyUpActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoGetReadyUpActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoBurningActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoBurningActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoBurningActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CarryPassenger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLightFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = uintptr_t> T get_Launcher() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E28274))(this);
	}
	template <typename T = void> T set_Launcher(uintptr_t value) {
		return ((T (*)(LauncherPart*, uintptr_t))(Il2CppBase() + 0x2E2827C))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrState() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E28284))(this);
	}
	template <typename T = void> T set_CurrState(uintptr_t value) {
		return ((T (*)(LauncherPart*, uintptr_t))(Il2CppBase() + 0x2E2828C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SocketName() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E28294))(this);
	}
	template <typename T = void> T set_SocketName(Il2CppString* value) {
		return ((T (*)(LauncherPart*, Il2CppString*))(Il2CppBase() + 0x2E2829C))(this, value);
	}
	template <typename T = int32_t> T get_AssetIDRocketFireEffect() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E282A4))(this);
	}
	template <typename T = void> T set_AssetIDRocketFireEffect(int32_t value) {
		return ((T (*)(LauncherPart*, int32_t))(Il2CppBase() + 0x2E282AC))(this, value);
	}
	template <typename T = int32_t> T get_AssetIDLightEffect() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E282B4))(this);
	}
	template <typename T = void> T set_AssetIDLightEffect(int32_t value) {
		return ((T (*)(LauncherPart*, int32_t))(Il2CppBase() + 0x2E282BC))(this, value);
	}
	template <typename T = int32_t> T get_AssetIDLightFlashEffect() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E282C4))(this);
	}
	template <typename T = void> T set_AssetIDLightFlashEffect(int32_t value) {
		return ((T (*)(LauncherPart*, int32_t))(Il2CppBase() + 0x2E282CC))(this, value);
	}
	template <typename T = int32_t> T get_ActorId() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E282D4))(this);
	}
	template <typename T = void> T set_ActorId(int32_t value) {
		return ((T (*)(LauncherPart*, int32_t))(Il2CppBase() + 0x2E282DC))(this, value);
	}
	template <typename T = bool> T get_Usable() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E282E4))(this);
	}
	template <typename T = void> T set_Usable(bool value) {
		return ((T (*)(LauncherPart*, bool))(Il2CppBase() + 0x2E282EC))(this, value);
	}
	template <typename T = void> T Init(uintptr_t parentPropPawn) {
		return ((T (*)(LauncherPart*, uintptr_t))(Il2CppBase() + 0x2E282F4))(this, parentPropPawn);
	}
	template <typename T = void> T LoadGameObject(Il2CppString* socketName) {
		return ((T (*)(LauncherPart*, Il2CppString*))(Il2CppBase() + 0x2E284EC))(this, socketName);
	}
	template <typename T = void> T Refresh(int32_t actorId) {
		return ((T (*)(LauncherPart*, int32_t))(Il2CppBase() + 0x2E28730))(this, actorId);
	}
	template <typename T = void> T SetLauncherNetData(uintptr_t netData) {
		return ((T (*)(LauncherPart*, uintptr_t))(Il2CppBase() + 0x2E28C68))(this, netData);
	}
	template <typename T = void> T SetLaunchParam(uintptr_t launchParam) {
		return ((T (*)(LauncherPart*, uintptr_t))(Il2CppBase() + 0x2E28DA8))(this, launchParam);
	}
	template <typename T = void> T SetAccelerateValue(float fAccelerateValue) {
		return ((T (*)(LauncherPart*, float))(Il2CppBase() + 0x2E28F08))(this, fAccelerateValue);
	}
	template <typename T = void> T DoUpwardActionBegin() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E28FF8))(this);
	}
	template <typename T = void> T DoUpwardActionTick(float deltaTime) {
		return ((T (*)(LauncherPart*, float))(Il2CppBase() + 0x2E29400))(this, deltaTime);
	}
	template <typename T = void> T DoUpwardActionEnd() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2968C))(this);
	}
	template <typename T = void> T DoSeparatedUpwardActionBegin() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E298FC))(this);
	}
	template <typename T = void> T DoSeparatedUpwardActionTick(float deltaTime) {
		return ((T (*)(LauncherPart*, float))(Il2CppBase() + 0x2E29C14))(this, deltaTime);
	}
	template <typename T = void> T DoSeparatedUpwardActionEnd() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E29EA0))(this);
	}
	template <typename T = void> T DoDropActionBegin() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E29F38))(this);
	}
	template <typename T = void> T DoDropActionTick(float deltaTime) {
		return ((T (*)(LauncherPart*, float))(Il2CppBase() + 0x2E2A054))(this, deltaTime);
	}
	template <typename T = void> T DoDropActionEnd() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2A300))(this);
	}
	template <typename T = void> T DoInactiveActionBegin() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2A398))(this);
	}
	template <typename T = void> T DoInactiveActionTick(float deltaTime) {
		return ((T (*)(LauncherPart*, float))(Il2CppBase() + 0x2E2A588))(this, deltaTime);
	}
	template <typename T = void> T DoInactiveActionEnd() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2A628))(this);
	}
	template <typename T = void> T DoActiveActionBegin() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2A6C0))(this);
	}
	template <typename T = void> T DoActiveActionTick(float deltaTime) {
		return ((T (*)(LauncherPart*, float))(Il2CppBase() + 0x2E2AB60))(this, deltaTime);
	}
	template <typename T = void> T DoActiveActionEnd() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2AC00))(this);
	}
	template <typename T = void> T DoGetReadyUpActionBegin() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2AC98))(this);
	}
	template <typename T = void> T DoGetReadyUpActionTick(float deltaTime) {
		return ((T (*)(LauncherPart*, float))(Il2CppBase() + 0x2E2B1A4))(this, deltaTime);
	}
	template <typename T = void> T DoGetReadyUpActionEnd() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2B53C))(this);
	}
	template <typename T = void> T DoBurningActionBegin() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2B5E0))(this);
	}
	template <typename T = void> T DoBurningActionTick(float deltaTime) {
		return ((T (*)(LauncherPart*, float))(Il2CppBase() + 0x2E2BDFC))(this, deltaTime);
	}
	template <typename T = void> T DoBurningActionEnd() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2BE9C))(this);
	}
	template <typename T = void> T SafeSetActive(bool bActive) {
		return ((T (*)(LauncherPart*, bool))(Il2CppBase() + 0x2E2BF34))(this, bActive);
	}
	template <typename T = void> T ChangeState(uintptr_t newState) {
		return ((T (*)(LauncherPart*, uintptr_t))(Il2CppBase() + 0x2E28B9C))(this, newState);
	}
	template <typename T = void> T BeginState(uintptr_t state) {
		return ((T (*)(LauncherPart*, uintptr_t))(Il2CppBase() + 0x2E2C180))(this, state);
	}
	template <typename T = void> T EndState(uintptr_t state) {
		return ((T (*)(LauncherPart*, uintptr_t))(Il2CppBase() + 0x2E2C054))(this, state);
	}
	template <typename T = void> T TickSimulate(float deltaTime) {
		return ((T (*)(LauncherPart*, float))(Il2CppBase() + 0x2E2C2AC))(this, deltaTime);
	}
	template <typename T = void> T CarryPassenger(uintptr_t pawn) {
		return ((T (*)(LauncherPart*, uintptr_t))(Il2CppBase() + 0x2E2C3F8))(this, pawn);
	}
	template <typename T = void> T ShowLightEffect(bool bShow) {
		return ((T (*)(LauncherPart*, bool))(Il2CppBase() + 0x2E2B74C))(this, bShow);
	}
	template <typename T = void> T ShowLightFlashEffect(bool bShow) {
		return ((T (*)(LauncherPart*, bool))(Il2CppBase() + 0x2E2BAA4))(this, bShow);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E288D0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LauncherPart*))(Il2CppBase() + 0x2E2C5EC))(this);
	}

};

}
