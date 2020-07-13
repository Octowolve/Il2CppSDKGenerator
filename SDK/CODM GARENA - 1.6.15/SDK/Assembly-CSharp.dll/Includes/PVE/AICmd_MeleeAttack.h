#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdMeleeAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_MeleeAttack"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdMeleeAttack*))(Il2CppBase() + 0x4CEBB90))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdMeleeAttack*))(Il2CppBase() + 0x4CEBC60))(this);
	}
	template <typename T = void> T OnPlayAnim() {
		return ((T (*)(AICmdMeleeAttack*))(Il2CppBase() + 0x4CEBD30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdMeleeAttack*))(Il2CppBase() + 0x4CEBE6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdMeleeAttack*))(Il2CppBase() + 0x4CEBE70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayAnim() {
		return ((T (*)(AICmdMeleeAttack*))(Il2CppBase() + 0x4CEBE74))(this);
	}

};

}
