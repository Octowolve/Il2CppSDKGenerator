#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectRadarSize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_RadarSize"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectRadarSize*))(Il2CppBase() + 0x375DD30))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectRadarSize*))(Il2CppBase() + 0x375DF30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectRadarSize*))(Il2CppBase() + 0x375E130))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectRadarSize*))(Il2CppBase() + 0x375E134))(this);
	}

};

}
