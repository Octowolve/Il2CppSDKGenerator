#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectSeeTrapFront
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_SeeTrapFront"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_TrapInfoDic() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTargetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDeactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectSeeTrapFront*))(Il2CppBase() + 0x3C3CB44))(this);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t imsg) {
		return ((T (*)(BuffEffectSeeTrapFront*, uintptr_t))(Il2CppBase() + 0x3C3D0F4))(this, imsg);
	}
	template <typename T = void> T ToggleActive(uintptr_t stick) {
		return ((T (*)(BuffEffectSeeTrapFront*, uintptr_t))(Il2CppBase() + 0x3C3CEF0))(this, stick);
	}
	template <typename T = void> T ToggleDeactive(uintptr_t stick) {
		return ((T (*)(BuffEffectSeeTrapFront*, uintptr_t))(Il2CppBase() + 0x3C3D410))(this, stick);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSeeTrapFront*))(Il2CppBase() + 0x3C3D5D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectSeeTrapFront*))(Il2CppBase() + 0x3C3D95C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTargetEvent(uintptr_t P0) {
		return ((T (*)(BuffEffectSeeTrapFront*, uintptr_t))(Il2CppBase() + 0x3C3D964))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSeeTrapFront*))(Il2CppBase() + 0x3C3D96C))(this);
	}

};

}
