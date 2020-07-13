#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectSmokePerspectiveEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_SmokePerspectiveEffect"));
	}

	template <typename T = bool> T& m_HasApplyEffect() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPropertySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectSmokePerspectiveEffect*))(Il2CppBase() + 0x3C41430))(this);
	}
	template <typename T = void> T ApplyPropertySet() {
		return ((T (*)(BuffEffectSmokePerspectiveEffect*))(Il2CppBase() + 0x3C414E8))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSmokePerspectiveEffect*))(Il2CppBase() + 0x3C416F8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectSmokePerspectiveEffect*, float))(Il2CppBase() + 0x3C41908))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectSmokePerspectiveEffect*))(Il2CppBase() + 0x3C419BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSmokePerspectiveEffect*))(Il2CppBase() + 0x3C419C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectSmokePerspectiveEffect*, float))(Il2CppBase() + 0x3C419CC))(this, P0);
	}

};

}
