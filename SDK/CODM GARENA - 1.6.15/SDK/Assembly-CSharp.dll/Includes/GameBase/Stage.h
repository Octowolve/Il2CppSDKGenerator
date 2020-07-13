#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class Stage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Stage"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_SubLevelRootList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubLevelRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSubLevelRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadMapComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_EnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(Stage*, uintptr_t))(Il2CppBase() + 0x30A2B48))(this, Msg);
	}
	template <typename T = void> T SetSubLevelRoot(uintptr_t root) {
		return ((T (*)(Stage*, uintptr_t))(Il2CppBase() + 0x30A2C4C))(this, root);
	}
	template <typename T = void> T EnableSubLevelRoot() {
		return ((T (*)(Stage*))(Il2CppBase() + 0x30A2D64))(this);
	}
	template <typename T = void> T OnLoadMapComplete(uintptr_t msg) {
		return ((T (*)(Stage*, uintptr_t))(Il2CppBase() + 0x30A2FA4))(this, msg);
	}
	template <typename T = void> T EnterGame() {
		return ((T (*)(Stage*))(Il2CppBase() + 0x30A3044))(this);
	}
	template <typename T = void> T EnterGame_1(Il2CppVector3 spawnLocation, Il2CppQuaternion spawnRotation) {
		return ((T (*)(Stage*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x30A3308))(this, spawnLocation, spawnRotation);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(Stage*, uintptr_t))(Il2CppBase() + 0x30A34A8))(this, P0);
	}

};

}
