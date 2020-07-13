#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIPawnAnimationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIPawnAnimationComponent"));
	}

	template <typename T = uintptr_t> T& overrideAnimController() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimationEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRandomWalkParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t mesh) {
		return ((T (*)(PVEAIPawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x43827D8))(this, mesh);
	}
	template <typename T = void> T OnAnimationEnded(Il2CppString* animName) {
		return ((T (*)(PVEAIPawnAnimationComponent*, Il2CppString*))(Il2CppBase() + 0x43828A0))(this, animName);
	}
	template <typename T = void> T SetRandomWalkParam(int32_t randWalk) {
		return ((T (*)(PVEAIPawnAnimationComponent*, int32_t))(Il2CppBase() + 0x43829E0))(this, randWalk);
	}
	template <typename T = void> T SetRuntimeAnimatorController(uintptr_t animController, bool forceSet) {
		return ((T (*)(PVEAIPawnAnimationComponent*, uintptr_t, bool))(Il2CppBase() + 0x4382B30))(this, animController, forceSet);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PVEAIPawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x4382C5C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAnimationEnded(Il2CppString* P0) {
		return ((T (*)(PVEAIPawnAnimationComponent*, Il2CppString*))(Il2CppBase() + 0x4382C64))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetRuntimeAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(PVEAIPawnAnimationComponent*, uintptr_t, bool))(Il2CppBase() + 0x4382C6C))(this, P0, P1);
	}

};

}
