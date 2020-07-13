#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Controller"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Possess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnPossess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Restart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_ControllerEventProcessor() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x41A24F4))(this);
	}
	template <typename T = uintptr_t> T get_CurrentPawn() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x41A25AC))(this);
	}
	template <typename T = uintptr_t> T get_ViewType() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x41A25B4))(this);
	}
	template <typename T = uintptr_t> T get_PlayerInfo() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x41A25BC))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x41A2804))(this);
	}
	template <typename T = void> T Possess(uintptr_t inPawn) {
		return ((T (*)(Controller*, uintptr_t))(Il2CppBase() + 0x41A2970))(this, inPawn);
	}
	template <typename T = void> T UnPossess() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x41A2BA0))(this);
	}
	template <typename T = void> T Restart() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x41A2D1C))(this);
	}
	template <typename T = void> T OnPawnDie() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x41A2DB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(Controller*))(Il2CppBase() + 0x41A2E4C))(this);
	}

};

}
