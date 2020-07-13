#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameScoreController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameScoreController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(GameScoreController*))(Il2CppBase() + 0x1E8EB78))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(GameScoreController*))(Il2CppBase() + 0x1E8EC84))(this);
	}
	template <typename T = void> T SetActive(bool isActive, bool recursively, bool enableOptimize) {
		return ((T (*)(GameScoreController*, bool, bool, bool))(Il2CppBase() + 0x1E8ED54))(this, isActive, recursively, enableOptimize);
	}
	template <typename T = void> T InitRecord() {
		return ((T (*)(GameScoreController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GameScoreController*))(Il2CppBase() + 0x1E8EE60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GameScoreController*))(Il2CppBase() + 0x1E8EEF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(GameScoreController*))(Il2CppBase() + 0x1E8EF00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1, bool P2) {
		return ((T (*)(GameScoreController*, bool, bool, bool))(Il2CppBase() + 0x1E8EF08))(this, P0, P1, P2);
	}

};

}
