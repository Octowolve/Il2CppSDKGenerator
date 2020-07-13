#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FlowRainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FlowRainController"));
	}

	template <typename T = uintptr_t> T& Variables() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RenderQueue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RainCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Alpha() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& GlobalWind() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& GForceVector() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& NoMoreRain() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ShaderType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isOneShot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& isWaitingDelay() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = float> T& oneShotTimeleft() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& timeElapsed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& drawers() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDrawer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Wait() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T get_Variables() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCAA74))(this);
	}
	template <typename T = void> T set_Variables(uintptr_t value) {
		return ((T (*)(FlowRainController*, uintptr_t))(Il2CppBase() + 0x3CCA790))(this, value);
	}
	template <typename T = int32_t> T get_RenderQueue() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCAA7C))(this);
	}
	template <typename T = void> T set_RenderQueue(int32_t value) {
		return ((T (*)(FlowRainController*, int32_t))(Il2CppBase() + 0x3CCA06C))(this, value);
	}
	template <typename T = uintptr_t> T get_RainCamera() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCAA84))(this);
	}
	template <typename T = void> T set_RainCamera(uintptr_t value) {
		return ((T (*)(FlowRainController*, uintptr_t))(Il2CppBase() + 0x3CCA798))(this, value);
	}
	template <typename T = float> T get_Alpha() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCAA8C))(this);
	}
	template <typename T = void> T set_Alpha(float value) {
		return ((T (*)(FlowRainController*, float))(Il2CppBase() + 0x3CCA5C0))(this, value);
	}
	template <typename T = Il2CppVector2> T get_GlobalWind() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCAA94))(this);
	}
	template <typename T = void> T set_GlobalWind(Il2CppVector2 value) {
		return ((T (*)(FlowRainController*, Il2CppVector2))(Il2CppBase() + 0x3CCA1A4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_GForceVector() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCAAA8))(this);
	}
	template <typename T = void> T set_GForceVector(Il2CppVector3 value) {
		return ((T (*)(FlowRainController*, Il2CppVector3))(Il2CppBase() + 0x3CCA5D0))(this, value);
	}
	template <typename T = bool> T get_NoMoreRain() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCAABC))(this);
	}
	template <typename T = void> T set_NoMoreRain(bool value) {
		return ((T (*)(FlowRainController*, bool))(Il2CppBase() + 0x3CC9AD0))(this, value);
	}
	template <typename T = uintptr_t> T get_ShaderType() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCAAC4))(this);
	}
	template <typename T = void> T set_ShaderType(uintptr_t value) {
		return ((T (*)(FlowRainController*, uintptr_t))(Il2CppBase() + 0x3CCA5B8))(this, value);
	}
	template <typename T = float> T get_Distance() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCAACC))(this);
	}
	template <typename T = void> T set_Distance(float value) {
		return ((T (*)(FlowRainController*, float))(Il2CppBase() + 0x3CCA5C8))(this, value);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CC9224))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CC9728))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CC9C10))(this);
	}
	template <typename T = uintptr_t> T PlayDelay(float delay) {
		return ((T (*)(FlowRainController*, float))(Il2CppBase() + 0x3CCABC8))(this, delay);
	}
	template <typename T = void> T UpdateController() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCA5DC))(this);
	}
	template <typename T = void> T CheckSpawnNum() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCACCC))(this);
	}
	template <typename T = void> T CheckSpawnTime() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCB40C))(this);
	}
	template <typename T = void> T Spawn() {
		return ((T (*)(FlowRainController*))(Il2CppBase() + 0x3CCB8C0))(this);
	}
	template <typename T = float> T GetProgress(uintptr_t dc) {
		return ((T (*)(FlowRainController*, uintptr_t))(Il2CppBase() + 0x3CCBE64))(this, dc);
	}
	template <typename T = void> T InitializeDrawer(uintptr_t dc) {
		return ((T (*)(FlowRainController*, uintptr_t))(Il2CppBase() + 0x3CCBA38))(this, dc);
	}
	template <typename T = void> T UpdateTransform(uintptr_t dc) {
		return ((T (*)(FlowRainController*, uintptr_t))(Il2CppBase() + 0x3CCBF28))(this, dc);
	}
	template <typename T = void> T UpdateShader(uintptr_t dc, int32_t index) {
		return ((T (*)(FlowRainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3CCC608))(this, dc, index);
	}
	template <typename T = void> T UpdateInstance(uintptr_t dc, int32_t index) {
		return ((T (*)(FlowRainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3CCB760))(this, dc, index);
	}
	template <typename T = uintptr_t> T Wait(float atLeast, float step, int32_t rndMax, uintptr_t callBack) {
		return ((T (*)(FlowRainController*, float, float, int32_t, uintptr_t))(Il2CppBase() + 0x3CCC4D4))(this, atLeast, step, rndMax, callBack);
	}
	template <typename T = bool> static T get_IsPlayingm__0(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CCCAE0))(0, t);
	}
	template <typename T = bool> static T CheckSpawnNumm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CCCB0C))(0, x);
	}
	template <typename T = bool> static T CheckSpawnNumm__2(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CCCB38))(0, x);
	}
	template <typename T = bool> static T CheckSpawnNumm__3(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CCCB68))(0, x);
	}
	template <typename T = bool> static T CheckSpawnTimem__4(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CCCC2C))(0, x);
	}
	template <typename T = bool> static T Spawnm__5(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CCCC5C))(0, x);
	}

};

}
