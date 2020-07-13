#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuffEffectFireMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffEffect_FireMode"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mOldFireModes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& mActorId() {
		return *(T*)((uintptr_t)this + 0x34);
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
		return ((T (*)(BuffEffectFireMode*))(Il2CppBase() + 0x52FC51C))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectFireMode*))(Il2CppBase() + 0x52FC728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectFireMode*))(Il2CppBase() + 0x52FC968))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectFireMode*))(Il2CppBase() + 0x52FC970))(this);
	}

};

}
