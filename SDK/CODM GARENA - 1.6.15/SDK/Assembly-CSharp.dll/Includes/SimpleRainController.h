#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleRainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleRainController"));
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
	template <typename T = bool> T& isOneShot() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& oneShotTimeleft() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& timeElapsed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isWaitingDelay() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_Variables() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x390545C))(this);
	}
	template <typename T = void> T set_Variables(uintptr_t value) {
		return ((T (*)(SimpleRainController*, uintptr_t))(Il2CppBase() + 0x3905174))(this, value);
	}
	template <typename T = int32_t> T get_RenderQueue() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x3905464))(this);
	}
	template <typename T = void> T set_RenderQueue(int32_t value) {
		return ((T (*)(SimpleRainController*, int32_t))(Il2CppBase() + 0x3904A8C))(this, value);
	}
	template <typename T = uintptr_t> T get_RainCamera() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x390546C))(this);
	}
	template <typename T = void> T set_RainCamera(uintptr_t value) {
		return ((T (*)(SimpleRainController*, uintptr_t))(Il2CppBase() + 0x390517C))(this, value);
	}
	template <typename T = float> T get_Alpha() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x3905474))(this);
	}
	template <typename T = void> T set_Alpha(float value) {
		return ((T (*)(SimpleRainController*, float))(Il2CppBase() + 0x3904FA0))(this, value);
	}
	template <typename T = Il2CppVector2> T get_GlobalWind() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x390547C))(this);
	}
	template <typename T = void> T set_GlobalWind(Il2CppVector2 value) {
		return ((T (*)(SimpleRainController*, Il2CppVector2))(Il2CppBase() + 0x3904BC4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_GForceVector() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x3905490))(this);
	}
	template <typename T = void> T set_GForceVector(Il2CppVector3 value) {
		return ((T (*)(SimpleRainController*, Il2CppVector3))(Il2CppBase() + 0x3904FA8))(this, value);
	}
	template <typename T = bool> T get_NoMoreRain() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x39054A4))(this);
	}
	template <typename T = void> T set_NoMoreRain(bool value) {
		return ((T (*)(SimpleRainController*, bool))(Il2CppBase() + 0x39044F0))(this, value);
	}
	template <typename T = uintptr_t> T get_ShaderType() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x39054AC))(this);
	}
	template <typename T = void> T set_ShaderType(uintptr_t value) {
		return ((T (*)(SimpleRainController*, uintptr_t))(Il2CppBase() + 0x3904F98))(this, value);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x3903C20))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x3904124))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x3904630))(this);
	}
	template <typename T = uintptr_t> T PlayDelay(float delay) {
		return ((T (*)(SimpleRainController*, float))(Il2CppBase() + 0x3905590))(this, delay);
	}
	template <typename T = void> T UpdateController() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x3904FB4))(this);
	}
	template <typename T = void> T CheckSpawnNum() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x3905694))(this);
	}
	template <typename T = void> T CheckSpawnTime() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x3905DD4))(this);
	}
	template <typename T = void> T Spawn() {
		return ((T (*)(SimpleRainController*))(Il2CppBase() + 0x390627C))(this);
	}
	template <typename T = float> T GetProgress(uintptr_t dc) {
		return ((T (*)(SimpleRainController*, uintptr_t))(Il2CppBase() + 0x3906798))(this, dc);
	}
	template <typename T = void> T InitializeDrawer(uintptr_t dc) {
		return ((T (*)(SimpleRainController*, uintptr_t))(Il2CppBase() + 0x39063F4))(this, dc);
	}
	template <typename T = void> T UpdateShader(uintptr_t dc, int32_t index) {
		return ((T (*)(SimpleRainController*, uintptr_t, int32_t))(Il2CppBase() + 0x390685C))(this, dc, index);
	}
	template <typename T = void> T UpdateInstance(uintptr_t dc, int32_t index) {
		return ((T (*)(SimpleRainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3906128))(this, dc, index);
	}
	template <typename T = bool> static T get_IsPlayingm__0(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3906E74))(0, t);
	}
	template <typename T = bool> static T CheckSpawnNumm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3906EA0))(0, x);
	}
	template <typename T = bool> static T CheckSpawnNumm__2(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3906ECC))(0, x);
	}
	template <typename T = bool> static T CheckSpawnNumm__3(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3906EFC))(0, x);
	}
	template <typename T = bool> static T CheckSpawnTimem__4(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3906FC0))(0, x);
	}
	template <typename T = bool> static T Spawnm__5(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3906FF0))(0, x);
	}

};

}
