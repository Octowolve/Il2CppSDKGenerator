#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectDeadEyeEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_DeadEyeEffect"));
	}

	template <typename T = uintptr_t> T& m_LockEffect() {
		return *(T*)((uintptr_t)this + 0x30);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectDeadEyeEffect*))(Il2CppBase() + 0x37523E8))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectDeadEyeEffect*))(Il2CppBase() + 0x37524B8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectDeadEyeEffect*, float))(Il2CppBase() + 0x3752588))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectDeadEyeEffect*))(Il2CppBase() + 0x3752CBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectDeadEyeEffect*))(Il2CppBase() + 0x3752CC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectDeadEyeEffect*, float))(Il2CppBase() + 0x3752CC4))(this, P0);
	}

};

}
