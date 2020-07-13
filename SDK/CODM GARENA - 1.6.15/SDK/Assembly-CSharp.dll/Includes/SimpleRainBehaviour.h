#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleRainBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleRainBehaviour"));
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
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3903948))(this);
	}
	template <typename T = void> T set_rainController(uintptr_t value) {
		return ((T (*)(SimpleRainBehaviour*, uintptr_t))(Il2CppBase() + 0x3903950))(this, value);
	}
	template <typename T = int32_t> T get_CurrentDrawCall() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3903958))(this);
	}
	template <typename T = int32_t> T get_MaxDrawCall() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3903B1C))(this);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3903B40))(this);
	}
	template <typename T = bool> T get_IsEnabled() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3903DBC))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3903DFC))(this);
	}
	template <typename T = void> T StartRain() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x39044F8))(this);
	}
	template <typename T = void> T StopRain() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3904700))(this);
	}
	template <typename T = void> T StopRainImmidiate() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3904814))(this);
	}
	template <typename T = void> T ApplyFinalDepth(int32_t depth) {
		return ((T (*)(SimpleRainBehaviour*, int32_t))(Il2CppBase() + 0x3904974))(this, depth);
	}
	template <typename T = void> T ApplyGlobalWind(Il2CppVector2 globalWind) {
		return ((T (*)(SimpleRainBehaviour*, Il2CppVector2))(Il2CppBase() + 0x3904A94))(this, globalWind);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3904BD0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3904CBC))(this);
	}
	template <typename T = uintptr_t> T CreateController() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3903F84))(this);
	}
	template <typename T = void> T InitParams() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3904E10))(this);
	}
	template <typename T = void> T swap(uintptr_t a, uintptr_t b) {
		return ((T (*)(SimpleRainBehaviour*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3905184))(this, a, b);
	}
	template <typename T = void> T swap_1(uintptr_t a, uintptr_t b) {
		return ((T (*)(SimpleRainBehaviour*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3905250))(this, a, b);
	}
	template <typename T = bool> static T get_CurrentDrawCallm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x390531C))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_Refresh() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x390534C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartRain() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3905354))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopRain() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x390535C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopRainImmidiate() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x3905364))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyFinalDepth(int32_t P0) {
		return ((T (*)(SimpleRainBehaviour*, int32_t))(Il2CppBase() + 0x390536C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyGlobalWind(Il2CppVector2 P0) {
		return ((T (*)(SimpleRainBehaviour*, Il2CppVector2))(Il2CppBase() + 0x3905374))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(SimpleRainBehaviour*))(Il2CppBase() + 0x390537C))(this);
	}

};

}
