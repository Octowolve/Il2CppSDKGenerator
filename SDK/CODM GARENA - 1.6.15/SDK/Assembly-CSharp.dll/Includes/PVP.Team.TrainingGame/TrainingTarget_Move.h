#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainingTargetMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainingTarget_Move"));
	}

	template <typename T = uintptr_t> T& m_MoveRoot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& m_StartPoint() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& m_EndPoint() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& m_MoveSpeed() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& m_MoveDir() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UpdateMoveData(Il2CppVector3 startLoc, Il2CppVector3 endLoc, float speed) {
		return ((T (*)(TrainingTargetMove*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3D90D90))(this, startLoc, endLoc, speed);
	}
	template <typename T = void> T RefreshTarget(uint32_t uid, Il2CppVector3 newLocation) {
		return ((T (*)(TrainingTargetMove*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x3D90F8C))(this, uid, newLocation);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TrainingTargetMove*))(Il2CppBase() + 0x3D911B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshTarget(uint32_t P0, Il2CppVector3 P1) {
		return ((T (*)(TrainingTargetMove*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x3D91478))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(TrainingTargetMove*))(Il2CppBase() + 0x3D91498))(this);
	}

};

}
