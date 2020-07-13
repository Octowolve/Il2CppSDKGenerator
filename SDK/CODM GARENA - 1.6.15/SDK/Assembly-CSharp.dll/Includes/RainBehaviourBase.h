#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RainBehaviourBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RainBehaviourBase"));
	}

	template <typename T = int32_t> T& Depth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Alpha() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ShaderType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& VRMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& GForceVector() {
		return *(T*)((uintptr_t)this + 0x20);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB95A8))(this);
	}
	template <typename T = bool> T get_IsEnabled() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB95B0))(this);
	}
	template <typename T = int32_t> T get_CurrentDrawCall() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB95B8))(this);
	}
	template <typename T = int32_t> T get_MaxDrawCall() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB95C0))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB95C8))(this);
	}
	template <typename T = void> T StartRain() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB9660))(this);
	}
	template <typename T = void> T StopRain() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB96F8))(this);
	}
	template <typename T = void> T StopRainImmidiate() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB9790))(this);
	}
	template <typename T = void> T ApplyFinalDepth(int32_t depth) {
		return ((T (*)(RainBehaviourBase*, int32_t))(Il2CppBase() + 0x3DB9828))(this, depth);
	}
	template <typename T = void> T ApplyGlobalWind(Il2CppVector2 globalWind) {
		return ((T (*)(RainBehaviourBase*, Il2CppVector2))(Il2CppBase() + 0x3DB98C8))(this, globalWind);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB997C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RainBehaviourBase*))(Il2CppBase() + 0x3DB9A14))(this);
	}

};

}
