#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FrictionFlowRainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FrictionFlowRainController"));
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
	template <typename T = uintptr_t> T& _dummy() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<void*>*> T& widthPixels() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFallForceFronStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDrawer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shuffle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickRandomWeightedElement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickRandomWeightedElementEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextPositionWithFriction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T get_Variables() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC144))(this);
	}
	template <typename T = void> T set_Variables(uintptr_t value) {
		return ((T (*)(FrictionFlowRainController*, uintptr_t))(Il2CppBase() + 0x3CDBE2C))(this, value);
	}
	template <typename T = int32_t> T get_RenderQueue() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC14C))(this);
	}
	template <typename T = void> T set_RenderQueue(int32_t value) {
		return ((T (*)(FrictionFlowRainController*, int32_t))(Il2CppBase() + 0x3CDB758))(this, value);
	}
	template <typename T = uintptr_t> T get_RainCamera() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC154))(this);
	}
	template <typename T = void> T set_RainCamera(uintptr_t value) {
		return ((T (*)(FrictionFlowRainController*, uintptr_t))(Il2CppBase() + 0x3CDBE34))(this, value);
	}
	template <typename T = float> T get_Alpha() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC15C))(this);
	}
	template <typename T = void> T set_Alpha(float value) {
		return ((T (*)(FrictionFlowRainController*, float))(Il2CppBase() + 0x3CDBC5C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_GlobalWind() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC164))(this);
	}
	template <typename T = void> T set_GlobalWind(Il2CppVector2 value) {
		return ((T (*)(FrictionFlowRainController*, Il2CppVector2))(Il2CppBase() + 0x3CDB890))(this, value);
	}
	template <typename T = Il2CppVector3> T get_GForceVector() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC178))(this);
	}
	template <typename T = void> T set_GForceVector(Il2CppVector3 value) {
		return ((T (*)(FrictionFlowRainController*, Il2CppVector3))(Il2CppBase() + 0x3CDBC6C))(this, value);
	}
	template <typename T = bool> T get_NoMoreRain() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC18C))(this);
	}
	template <typename T = void> T set_NoMoreRain(bool value) {
		return ((T (*)(FrictionFlowRainController*, bool))(Il2CppBase() + 0x3CDB1BC))(this, value);
	}
	template <typename T = uintptr_t> T get_ShaderType() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC194))(this);
	}
	template <typename T = void> T set_ShaderType(uintptr_t value) {
		return ((T (*)(FrictionFlowRainController*, uintptr_t))(Il2CppBase() + 0x3CDBC54))(this, value);
	}
	template <typename T = float> T get_Distance() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC19C))(this);
	}
	template <typename T = void> T set_Distance(float value) {
		return ((T (*)(FrictionFlowRainController*, float))(Il2CppBase() + 0x3CDBC64))(this, value);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDA910))(this);
	}
	template <typename T = uintptr_t> T get_dummy() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC1A4))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDAE14))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDB2FC))(this);
	}
	template <typename T = uintptr_t> T PlayDelay(float delay) {
		return ((T (*)(FrictionFlowRainController*, float))(Il2CppBase() + 0x3CDC404))(this, delay);
	}
	template <typename T = void> T UpdateController() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDBC78))(this);
	}
	template <typename T = void> T CheckSpawnNum() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDC508))(this);
	}
	template <typename T = void> T CheckSpawnTime() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDCC48))(this);
	}
	template <typename T = void> T Spawn() {
		return ((T (*)(FrictionFlowRainController*))(Il2CppBase() + 0x3CDD0FC))(this);
	}
	template <typename T = float> T GetProgress(uintptr_t dc) {
		return ((T (*)(FrictionFlowRainController*, uintptr_t))(Il2CppBase() + 0x3CDD73C))(this, dc);
	}
	template <typename T = Il2CppVector3> T GetFallForceFronStartPos(Il2CppVector3 startPos) {
		return ((T (*)(FrictionFlowRainController*, Il2CppVector3))(Il2CppBase() + 0x3CDD800))(this, startPos);
	}
	template <typename T = void> T InitializeDrawer(uintptr_t dc) {
		return ((T (*)(FrictionFlowRainController*, uintptr_t))(Il2CppBase() + 0x3CDD274))(this, dc);
	}
	template <typename T = void> T Shuffle(Il2CppList<uintptr_t>* list) {
		return ((T (*)(FrictionFlowRainController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1E7D074))(this, list);
	}
	template <typename T = void*> T PickRandomWeightedElement(Il2CppDictionary<Il2CppVector3, float>* dictionary) {
		return ((T (*)(FrictionFlowRainController*, Il2CppDictionary<Il2CppVector3, float>*))(Il2CppBase() + 0x3CDD8F0))(this, dictionary);
	}
	template <typename T = void*> T PickRandomWeightedElementEx(Il2CppList<void*>* kvList) {
		return ((T (*)(FrictionFlowRainController*, Il2CppList<void*>*))(Il2CppBase() + 0x3CDDC98))(this, kvList);
	}
	template <typename T = Il2CppVector3> T GetNextPositionWithFriction(uintptr_t dc, float downValue, int32_t resolution, int32_t widthResolution, float dt) {
		return ((T (*)(FrictionFlowRainController*, uintptr_t, float, int32_t, int32_t, float))(Il2CppBase() + 0x3CDDFE8))(this, dc, downValue, resolution, widthResolution, dt);
	}
	template <typename T = void> T UpdateTransform(uintptr_t dc) {
		return ((T (*)(FrictionFlowRainController*, uintptr_t))(Il2CppBase() + 0x3CDE8F4))(this, dc);
	}
	template <typename T = void> T UpdateShader(uintptr_t dc, int32_t index) {
		return ((T (*)(FrictionFlowRainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3CDEBC4))(this, dc, index);
	}
	template <typename T = void> T UpdateInstance(uintptr_t dc, int32_t index) {
		return ((T (*)(FrictionFlowRainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3CDCF9C))(this, dc, index);
	}
	template <typename T = bool> static T get_IsPlayingm__0(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CDF094))(0, t);
	}
	template <typename T = bool> static T CheckSpawnNumm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CDF0C0))(0, x);
	}
	template <typename T = bool> static T CheckSpawnNumm__2(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CDF0EC))(0, x);
	}
	template <typename T = bool> static T CheckSpawnNumm__3(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CDF11C))(0, x);
	}
	template <typename T = bool> static T CheckSpawnTimem__4(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CDF1E0))(0, x);
	}
	template <typename T = bool> static T Spawnm__5(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CDF210))(0, x);
	}
	template <typename T = int32_t> static T PickRandomWeightedElementm__6(void* x, void* y) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x3CDF23C))(0, x, y);
	}
	template <typename T = int32_t> static T PickRandomWeightedElementExm__7(void* x, void* y) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x3CDF308))(0, x, y);
	}

};

}
