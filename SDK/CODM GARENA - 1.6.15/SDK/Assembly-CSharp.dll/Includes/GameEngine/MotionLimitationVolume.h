#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MotionLimitationVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MotionLimitationVolume"));
	}

	template <typename T = Il2CppVector2> T& HorizontalRotationLimit() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& MoveAngleLimit() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& MaxSpeedLimit() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector2> T& OriginalVerticalRotationLimit() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector2> T& OriginalHorizontalRotationLimit() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& OriginalMaxSpeedLimit() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(MotionLimitationVolume*, uintptr_t))(Il2CppBase() + 0x270F83C))(this, pawn);
	}
	template <typename T = void> T OnPawnExitVolume(uintptr_t pawn) {
		return ((T (*)(MotionLimitationVolume*, uintptr_t))(Il2CppBase() + 0x270FA2C))(this, pawn);
	}
	template <typename T = Il2CppVector3> T GetAcceleration(uintptr_t pawn) {
		return ((T (*)(MotionLimitationVolume*, uintptr_t))(Il2CppBase() + 0x270FB4C))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnEnterVolume(uintptr_t P0) {
		return ((T (*)(MotionLimitationVolume*, uintptr_t))(Il2CppBase() + 0x270FD4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnExitVolume(uintptr_t P0) {
		return ((T (*)(MotionLimitationVolume*, uintptr_t))(Il2CppBase() + 0x270FD54))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetAcceleration(uintptr_t P0) {
		return ((T (*)(MotionLimitationVolume*, uintptr_t))(Il2CppBase() + 0x270FD5C))(this, P0);
	}

};

}
