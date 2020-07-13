#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AngleRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AngleRange"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_AngleList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsFull() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CutRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CutRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClosestAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWalkableVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(AngleRange*))(Il2CppBase() + 0x2B412E4))(this);
	}
	template <typename T = float> T ClampRange(float v) {
		return ((T (*)(AngleRange*, float))(Il2CppBase() + 0x2B413C0))(this, v);
	}
	template <typename T = bool> T InRange(uintptr_t range, float angle) {
		return ((T (*)(AngleRange*, uintptr_t, float))(Il2CppBase() + 0x2B41498))(this, range, angle);
	}
	template <typename T = uintptr_t> T CutRange(uintptr_t range, uintptr_t cut, uintptr_t add) {
		return ((T (*)(AngleRange*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B41628))(this, range, cut, add);
	}
	template <typename T = void> T CutRange_1(float from, float to) {
		return ((T (*)(AngleRange*, float, float))(Il2CppBase() + 0x2B4188C))(this, from, to);
	}
	template <typename T = bool> T GetClosestAngle(float angle, uintptr_t* angleAdjusted) {
		return ((T (*)(AngleRange*, float, uintptr_t*))(Il2CppBase() + 0x2B41C38))(this, angle, angleAdjusted);
	}
	template <typename T = Il2CppVector3> T CalcWalkableVector(Il2CppVector3 vec) {
		return ((T (*)(AngleRange*, Il2CppVector3))(Il2CppBase() + 0x2B41EF8))(this, vec);
	}
	template <typename T = void> T DebugDraw(Il2CppVector3 pos) {
		return ((T (*)(AngleRange*, Il2CppVector3))(Il2CppBase() + 0x2B42198))(this, pos);
	}

};

}
