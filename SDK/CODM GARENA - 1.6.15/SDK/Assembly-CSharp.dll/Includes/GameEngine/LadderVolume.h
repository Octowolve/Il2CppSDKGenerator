#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LadderVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LadderVolume"));
	}

	template <typename T = Il2CppVector3> T& m_ClimbDir() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& m_LookDir() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& m_LeftDir() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& LadderStep() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& LadderButtomGap() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& LadderTopGap() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TopEnterVolume() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& HightLightLadderDir() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& IsForbidDownToLadder() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = uintptr_t> T& m_BoxCollider() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_TriggerCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_TriggerCount2() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> static T& EnableLadderVolumeCenterAddFix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& LadderVolumeCenterAddFixRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendShowUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCalcLaddeRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateLadderStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CalculateLadderStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppVector3> T get_ClimbDir() {
		return ((T (*)(LadderVolume*))(Il2CppBase() + 0x247A2C8))(this);
	}
	template <typename T = Il2CppVector3> T get_LookDir() {
		return ((T (*)(LadderVolume*))(Il2CppBase() + 0x247A2DC))(this);
	}
	template <typename T = Il2CppVector3> T get_LeftDir() {
		return ((T (*)(LadderVolume*))(Il2CppBase() + 0x247A2F0))(this);
	}
	template <typename T = uintptr_t> T get_targetLadderVolume() {
		return ((T (*)(LadderVolume*))(Il2CppBase() + 0x247A304))(this);
	}
	template <typename T = uintptr_t> T GetCurrentBoxCollider() {
		return ((T (*)(LadderVolume*))(Il2CppBase() + 0x247A308))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LadderVolume*))(Il2CppBase() + 0x247A45C))(this);
	}
	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(LadderVolume*, uintptr_t))(Il2CppBase() + 0x247A6C4))(this, pawn);
	}
	template <typename T = void> T OnPawnExitVolume(uintptr_t pawn) {
		return ((T (*)(LadderVolume*, uintptr_t))(Il2CppBase() + 0x247AD1C))(this, pawn);
	}
	template <typename T = void> T SendShowUI(bool inShow, uintptr_t pawn, uintptr_t inLadderVolume) {
		return ((T (*)(LadderVolume*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x247A87C))(this, inShow, pawn, inLadderVolume);
	}
	template <typename T = float> T GetCalcLaddeRadius(float radius) {
		return ((T (*)(LadderVolume*, float))(Il2CppBase() + 0x247AE60))(this, radius);
	}
	template <typename T = Il2CppVector3> T GetLadderPos(float radius) {
		return ((T (*)(LadderVolume*, float))(Il2CppBase() + 0x247AFC8))(this, radius);
	}
	template <typename T = void> T CalculateLadderStep(Il2CppList<Il2CppVector3>* ladderStepList, float radius) {
		return ((T (*)(LadderVolume*, Il2CppList<Il2CppVector3>*, float))(Il2CppBase() + 0x247B374))(this, ladderStepList, radius);
	}
	template <typename T = void> T CalculateLadderStep_1(Il2CppList<float>* ladderStepList) {
		return ((T (*)(LadderVolume*, Il2CppList<float>*))(Il2CppBase() + 0x247B834))(this, ladderStepList);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LadderVolume*))(Il2CppBase() + 0x247BD20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnEnterVolume(uintptr_t P0) {
		return ((T (*)(LadderVolume*, uintptr_t))(Il2CppBase() + 0x247BD28))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnExitVolume(uintptr_t P0) {
		return ((T (*)(LadderVolume*, uintptr_t))(Il2CppBase() + 0x247BD30))(this, P0);
	}

};

}
