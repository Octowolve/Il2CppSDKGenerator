#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SplineMoveVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SplineMoveVolume"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& splineMoveList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& moveControlParam() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveAlongPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FollowPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SplineMoveVolume*))(Il2CppBase() + 0x3402AC0))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t localPawn, bool enter) {
		return ((T (*)(SplineMoveVolume*, uintptr_t, bool))(Il2CppBase() + 0x3402D28))(this, localPawn, enter);
	}
	template <typename T = void> T MoveAlongPath(uintptr_t localPawn, uintptr_t targetSplineMove) {
		return ((T (*)(SplineMoveVolume*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3403184))(this, localPawn, targetSplineMove);
	}
	template <typename T = uintptr_t> T FollowPath(uintptr_t localPawn) {
		return ((T (*)(SplineMoveVolume*, uintptr_t))(Il2CppBase() + 0x3403098))(this, localPawn);
	}
	template <typename T = bool> static T Awakem__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x34032F8))(0, e);
	}
	template <typename T = bool> static T OnLocalPlayerEnterExitm__1(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x34033A4))(0, e);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SplineMoveVolume*))(Il2CppBase() + 0x3403468))(this);
	}

};

}
