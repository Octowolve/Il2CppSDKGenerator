#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdInPlaceAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_InPlaceAttack"));
	}

	template <typename T = uintptr_t> T& m_SpecialMove() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_DesiredTarget() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdInPlaceAttack*, uintptr_t))(Il2CppBase() + 0x4CEB2CC))(this, inParam);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdInPlaceAttack*))(Il2CppBase() + 0x4CEB414))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdInPlaceAttack*))(Il2CppBase() + 0x4CEB4FC))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdInPlaceAttack*))(Il2CppBase() + 0x4CEB5C0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdInPlaceAttack*))(Il2CppBase() + 0x4CEB688))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdInPlaceAttack*))(Il2CppBase() + 0x4CEB690))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdInPlaceAttack*))(Il2CppBase() + 0x4CEB698))(this);
	}

};

}
