#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StaticRainBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StaticRainBehaviour"));
	}

	template <typename T = uintptr_t> T& rainController() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Variables() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRainImmidiate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyFinalDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyGlobalWind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
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

	template <typename T = uintptr_t> T get_rainController() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3951488))(this);
	}
	template <typename T = void> T set_rainController(uintptr_t value) {
		return ((T (*)(StaticRainBehaviour*, uintptr_t))(Il2CppBase() + 0x3951490))(this, value);
	}
	template <typename T = int32_t> T get_CurrentDrawCall() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3951498))(this);
	}
	template <typename T = int32_t> T get_MaxDrawCall() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x395154C))(this);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3951554))(this);
	}
	template <typename T = bool> T get_IsEnabled() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3951668))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x39516A8))(this);
	}
	template <typename T = void> T StartRain() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3951B5C))(this);
	}
	template <typename T = void> T StopRain() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3951D5C))(this);
	}
	template <typename T = void> T StopRainImmidiate() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3951E70))(this);
	}
	template <typename T = void> T ApplyFinalDepth(int32_t depth) {
		return ((T (*)(StaticRainBehaviour*, int32_t))(Il2CppBase() + 0x3951FE4))(this, depth);
	}
	template <typename T = void> T ApplyGlobalWind(Il2CppVector2 globalWind) {
		return ((T (*)(StaticRainBehaviour*, Il2CppVector2))(Il2CppBase() + 0x3952104))(this, globalWind);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3952210))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x39522D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x39523C0))(this);
	}
	template <typename T = uintptr_t> T CreateController() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3951830))(this);
	}
	template <typename T = void> T InitParams() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x395250C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Refresh() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3952680))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartRain() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3952688))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopRain() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3952690))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopRainImmidiate() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x3952698))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyFinalDepth(int32_t P0) {
		return ((T (*)(StaticRainBehaviour*, int32_t))(Il2CppBase() + 0x39526A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyGlobalWind(Il2CppVector2 P0) {
		return ((T (*)(StaticRainBehaviour*, Il2CppVector2))(Il2CppBase() + 0x39526A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x39526B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(StaticRainBehaviour*))(Il2CppBase() + 0x39526B8))(this);
	}

};

}
