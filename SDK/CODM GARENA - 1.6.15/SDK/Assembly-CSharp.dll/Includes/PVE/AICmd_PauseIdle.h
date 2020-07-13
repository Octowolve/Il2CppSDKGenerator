#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdPauseIdle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_PauseIdle"));
	}

	template <typename T = bool> T& m_bStopAIMove() {
		return *(T*)((uintptr_t)this + 0x38);
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
		return ((T (*)(AICmdPauseIdle*, uintptr_t))(Il2CppBase() + 0x4CEDA2C))(this, inParam);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdPauseIdle*))(Il2CppBase() + 0x4CEDB3C))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdPauseIdle*))(Il2CppBase() + 0x4CEDC24))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdPauseIdle*))(Il2CppBase() + 0x4CEDCF8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdPauseIdle*))(Il2CppBase() + 0x4CEDDCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdPauseIdle*))(Il2CppBase() + 0x4CEDDD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdPauseIdle*))(Il2CppBase() + 0x4CEDDDC))(this);
	}

};

}
