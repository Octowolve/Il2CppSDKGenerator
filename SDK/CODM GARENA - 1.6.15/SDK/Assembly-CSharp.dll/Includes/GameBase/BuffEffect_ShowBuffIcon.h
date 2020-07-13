#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectShowBuffIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_ShowBuffIcon"));
	}

	template <typename T = int32_t> T& m_ItemID() {
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

	template <typename T = bool> T get_OnlyForLocalPlayer() {
		return ((T (*)(BuffEffectShowBuffIcon*))(Il2CppBase() + 0x3C3DFE4))(this);
	}
	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectShowBuffIcon*))(Il2CppBase() + 0x3C3DFEC))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectShowBuffIcon*))(Il2CppBase() + 0x3C3E300))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectShowBuffIcon*))(Il2CppBase() + 0x3C3E5C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectShowBuffIcon*))(Il2CppBase() + 0x3C3E5C8))(this);
	}

};

}
