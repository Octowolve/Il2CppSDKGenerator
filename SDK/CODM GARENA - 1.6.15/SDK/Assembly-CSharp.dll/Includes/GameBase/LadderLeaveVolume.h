#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LadderLeaveVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LadderLeaveVolume"));
	}

	template <typename T = bool> T& CheckInverseSideLeave() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_CacheCollider() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVolumeButtomHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetForwardAndUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_CacheCollider() {
		return ((T (*)(LadderLeaveVolume*))(Il2CppBase() + 0x2E277A0))(this);
	}
	template <typename T = float> T GetVolumeButtomHeight() {
		return ((T (*)(LadderLeaveVolume*))(Il2CppBase() + 0x2E27888))(this);
	}
	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(LadderLeaveVolume*, uintptr_t))(Il2CppBase() + 0x2E27A64))(this, pawn);
	}
	template <typename T = void> T OnPawnExitVolume(uintptr_t pawn) {
		return ((T (*)(LadderLeaveVolume*, uintptr_t))(Il2CppBase() + 0x2E27CA8))(this, pawn);
	}
	template <typename T = void> T ResetForwardAndUp() {
		return ((T (*)(LadderLeaveVolume*))(Il2CppBase() + 0x2E27E58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnEnterVolume(uintptr_t P0) {
		return ((T (*)(LadderLeaveVolume*, uintptr_t))(Il2CppBase() + 0x2E27FB0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnExitVolume(uintptr_t P0) {
		return ((T (*)(LadderLeaveVolume*, uintptr_t))(Il2CppBase() + 0x2E27FB8))(this, P0);
	}

};

}
