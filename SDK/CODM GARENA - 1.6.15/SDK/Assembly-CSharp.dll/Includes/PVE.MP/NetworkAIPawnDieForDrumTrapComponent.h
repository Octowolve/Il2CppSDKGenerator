#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIPawnDieForDrumTrapComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIPawnDieForDrumTrapComponent"));
	}

	template <typename T = uintptr_t> T& m_HitBy() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bNeedUpdatePosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& InitialPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& TargetPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& totalTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& SpeedX() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& SpeedZ() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& SpeedY() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& G() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& SpeedVec() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& Pos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& dTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHitBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReachTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppVector3> T get_InitialPosition() {
		return ((T (*)(NetworkAIPawnDieForDrumTrapComponent*))(Il2CppBase() + 0x3EA4810))(this);
	}
	template <typename T = void> T set_InitialPosition(Il2CppVector3 value) {
		return ((T (*)(NetworkAIPawnDieForDrumTrapComponent*, Il2CppVector3))(Il2CppBase() + 0x3EA4824))(this, value);
	}
	template <typename T = Il2CppVector3> T get_TargetPosition() {
		return ((T (*)(NetworkAIPawnDieForDrumTrapComponent*))(Il2CppBase() + 0x3EA4830))(this);
	}
	template <typename T = void> T set_TargetPosition(Il2CppVector3 value) {
		return ((T (*)(NetworkAIPawnDieForDrumTrapComponent*, Il2CppVector3))(Il2CppBase() + 0x3EA4844))(this, value);
	}
	template <typename T = void> T StartMove(Il2CppVector3 beginPos, Il2CppVector3 endPos) {
		return ((T (*)(NetworkAIPawnDieForDrumTrapComponent*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3EA4850))(this, beginPos, endPos);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NetworkAIPawnDieForDrumTrapComponent*))(Il2CppBase() + 0x3EA4A68))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NetworkAIPawnDieForDrumTrapComponent*))(Il2CppBase() + 0x3EA4E10))(this);
	}
	template <typename T = void> T SetHitBy(uintptr_t hit) {
		return ((T (*)(NetworkAIPawnDieForDrumTrapComponent*, uintptr_t))(Il2CppBase() + 0x3EA4EF0))(this, hit);
	}
	template <typename T = void> T OnReachTargetPos() {
		return ((T (*)(NetworkAIPawnDieForDrumTrapComponent*))(Il2CppBase() + 0x3EA4CAC))(this);
	}

};

}
