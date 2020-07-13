#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ASReloadBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ASReloadBullet"));
	}

	template <typename T = int32_t> T& mReloadCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mLostCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mOver() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T IsNeedUpdate(uintptr_t pawn) {
		return ((T (*)(ASReloadBullet*, uintptr_t))(Il2CppBase() + 0x3B7FDC0))(this, pawn);
	}
	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(ASReloadBullet*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B7FF0C))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(ASReloadBullet*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B802BC))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateUpdate(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(ASReloadBullet*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B80488))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ASReloadBullet*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B80870))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ASReloadBullet*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B808E0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateUpdate(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ASReloadBullet*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B80950))(this, P0, P1, P2);
	}

};

}
