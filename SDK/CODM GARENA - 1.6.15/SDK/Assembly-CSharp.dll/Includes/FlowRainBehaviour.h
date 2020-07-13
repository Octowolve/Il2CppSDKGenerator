#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FlowRainBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FlowRainBehaviour"));
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
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC8F4C))(this);
	}
	template <typename T = void> T set_rainController(uintptr_t value) {
		return ((T (*)(FlowRainBehaviour*, uintptr_t))(Il2CppBase() + 0x3CC8F54))(this, value);
	}
	template <typename T = int32_t> T get_CurrentDrawCall() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC8F5C))(this);
	}
	template <typename T = int32_t> T get_MaxDrawCall() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC9120))(this);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC9144))(this);
	}
	template <typename T = bool> T get_IsEnabled() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC93C0))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC9400))(this);
	}
	template <typename T = void> T StartRain() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC9AD8))(this);
	}
	template <typename T = void> T StopRain() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC9CE0))(this);
	}
	template <typename T = void> T StopRainImmidiate() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC9DF4))(this);
	}
	template <typename T = void> T ApplyFinalDepth(int32_t depth) {
		return ((T (*)(FlowRainBehaviour*, int32_t))(Il2CppBase() + 0x3CC9F54))(this, depth);
	}
	template <typename T = void> T ApplyGlobalWind(Il2CppVector2 globalWind) {
		return ((T (*)(FlowRainBehaviour*, Il2CppVector2))(Il2CppBase() + 0x3CCA074))(this, globalWind);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CCA1B0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CCA29C))(this);
	}
	template <typename T = uintptr_t> T CreateController() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CC9588))(this);
	}
	template <typename T = void> T InitParams() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CCA404))(this);
	}
	template <typename T = void> T swap(uintptr_t a, uintptr_t b) {
		return ((T (*)(FlowRainBehaviour*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CCA7A0))(this, a, b);
	}
	template <typename T = void> T swap_1(uintptr_t a, uintptr_t b) {
		return ((T (*)(FlowRainBehaviour*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CCA86C))(this, a, b);
	}
	template <typename T = bool> static T get_CurrentDrawCallm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CCA938))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_Refresh() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CCA964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartRain() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CCA96C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopRain() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CCA974))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopRainImmidiate() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CCA97C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyFinalDepth(int32_t P0) {
		return ((T (*)(FlowRainBehaviour*, int32_t))(Il2CppBase() + 0x3CCA984))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyGlobalWind(Il2CppVector2 P0) {
		return ((T (*)(FlowRainBehaviour*, Il2CppVector2))(Il2CppBase() + 0x3CCA98C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(FlowRainBehaviour*))(Il2CppBase() + 0x3CCA994))(this);
	}

};

}
