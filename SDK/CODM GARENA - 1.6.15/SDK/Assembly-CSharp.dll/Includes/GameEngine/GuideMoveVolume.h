#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GuideMoveVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GuideMoveVolume"));
	}

	template <typename T = float> T& TargetDirX() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& TargetDirY() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& TriggerAngle() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_Group() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& m_GroundPos() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateGroundPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetGroup(uintptr_t group) {
		return ((T (*)(GuideMoveVolume*, uintptr_t))(Il2CppBase() + 0x36F8EE4))(this, group);
	}
	template <typename T = bool> T AllowTrigger(Il2CppQuaternion rotation, Il2CppQuaternion lookRot) {
		return ((T (*)(GuideMoveVolume*, Il2CppQuaternion, Il2CppQuaternion))(Il2CppBase() + 0x36F97D0))(this, rotation, lookRot);
	}
	template <typename T = Il2CppVector3> T GetTargetDir() {
		return ((T (*)(GuideMoveVolume*))(Il2CppBase() + 0x36FA0BC))(this);
	}
	template <typename T = Il2CppVector3> T CalculateGroundPos() {
		return ((T (*)(GuideMoveVolume*))(Il2CppBase() + 0x36F9540))(this);
	}
	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(GuideMoveVolume*, uintptr_t))(Il2CppBase() + 0x36FA258))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnEnterVolume(uintptr_t P0) {
		return ((T (*)(GuideMoveVolume*, uintptr_t))(Il2CppBase() + 0x36FA3A4))(this, P0);
	}

};

}
