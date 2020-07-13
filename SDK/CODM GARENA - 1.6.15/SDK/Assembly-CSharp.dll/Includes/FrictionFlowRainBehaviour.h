#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FrictionFlowRainBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FrictionFlowRainBehaviour"));
	}

	template <typename T = uintptr_t> T& rainController() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Variables() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRainImmidiate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyFinalDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyGlobalWind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_swap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_swap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_rainController() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDA638))(this);
	}
	template <typename T = void> T set_rainController(uintptr_t value) {
		return ((T (*)(FrictionFlowRainBehaviour*, uintptr_t))(Il2CppBase() + 0x3CDA640))(this, value);
	}
	template <typename T = int32_t> T get_CurrentDrawCall() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDA648))(this);
	}
	template <typename T = int32_t> T get_MaxDrawCall() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDA80C))(this);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDA830))(this);
	}
	template <typename T = bool> T get_IsEnabled() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDAAAC))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDAAEC))(this);
	}
	template <typename T = void> T StartRain() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDB1C4))(this);
	}
	template <typename T = void> T StopRain() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDB3CC))(this);
	}
	template <typename T = void> T StopRainImmidiate() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDB4E0))(this);
	}
	template <typename T = void> T ApplyFinalDepth(int32_t depth) {
		return ((T (*)(FrictionFlowRainBehaviour*, int32_t))(Il2CppBase() + 0x3CDB640))(this, depth);
	}
	template <typename T = void> T ApplyGlobalWind(Il2CppVector2 globalWind) {
		return ((T (*)(FrictionFlowRainBehaviour*, Il2CppVector2))(Il2CppBase() + 0x3CDB760))(this, globalWind);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDB89C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDB988))(this);
	}
	template <typename T = uintptr_t> T CreateController() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDAC74))(this);
	}
	template <typename T = void> T InitParams() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDBAF0))(this);
	}
	template <typename T = void> T swap(uintptr_t a, uintptr_t b) {
		return ((T (*)(FrictionFlowRainBehaviour*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CDBE3C))(this, a, b);
	}
	template <typename T = void> T swap_1(uintptr_t a, uintptr_t b) {
		return ((T (*)(FrictionFlowRainBehaviour*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CDBF08))(this, a, b);
	}
	template <typename T = bool> static T get_CurrentDrawCallm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CDBFD4))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_Refresh() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDC000))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartRain() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDC008))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopRain() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDC010))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopRainImmidiate() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDC018))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyFinalDepth(int32_t P0) {
		return ((T (*)(FrictionFlowRainBehaviour*, int32_t))(Il2CppBase() + 0x3CDC020))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyGlobalWind(Il2CppVector2 P0) {
		return ((T (*)(FrictionFlowRainBehaviour*, Il2CppVector2))(Il2CppBase() + 0x3CDC028))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(FrictionFlowRainBehaviour*))(Il2CppBase() + 0x3CDC030))(this);
	}

};

}
