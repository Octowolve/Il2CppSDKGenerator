#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SparrowAreaCircle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SparrowArea_Circle"));
	}

	template <typename T = float> T& WaitTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& CreateTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ShrinkStartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& ShrinkDurationTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& CircleContinuousTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& BeginShrinkPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& BeginShrinkRadius() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& EndShrinkRadius() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_UpdateRadiusTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_CurrentRadius() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_UpdatePositionTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& m_CurrentPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupCircleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCircleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> T get_CreateTime() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A4760))(this);
	}
	template <typename T = void> T set_CreateTime(float value) {
		return ((T (*)(SparrowAreaCircle*, float))(Il2CppBase() + 0x35A4768))(this, value);
	}
	template <typename T = float> T get_ShrinkStartTime() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A4770))(this);
	}
	template <typename T = void> T set_ShrinkStartTime(float value) {
		return ((T (*)(SparrowAreaCircle*, float))(Il2CppBase() + 0x35A4778))(this, value);
	}
	template <typename T = float> T get_CircleContinuousTime() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A4780))(this);
	}
	template <typename T = void> T set_CircleContinuousTime(float value) {
		return ((T (*)(SparrowAreaCircle*, float))(Il2CppBase() + 0x35A4788))(this, value);
	}
	template <typename T = Il2CppVector3> T get_BeginShrinkPosition() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A4790))(this);
	}
	template <typename T = void> T set_BeginShrinkPosition(Il2CppVector3 value) {
		return ((T (*)(SparrowAreaCircle*, Il2CppVector3))(Il2CppBase() + 0x35A47A4))(this, value);
	}
	template <typename T = float> T get_BeginShrinkRadius() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A47B0))(this);
	}
	template <typename T = void> T set_BeginShrinkRadius(float value) {
		return ((T (*)(SparrowAreaCircle*, float))(Il2CppBase() + 0x35A47B8))(this, value);
	}
	template <typename T = float> T get_EndShrinkRadius() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A47C0))(this);
	}
	template <typename T = void> T set_EndShrinkRadius(float value) {
		return ((T (*)(SparrowAreaCircle*, float))(Il2CppBase() + 0x35A47C8))(this, value);
	}
	template <typename T = float> T get_BeginCircleTime() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A47D0))(this);
	}
	template <typename T = float> T get_EndCircleTime() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A47D8))(this);
	}
	template <typename T = float> T get_BeginShrinkTime() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A47EC))(this);
	}
	template <typename T = float> T get_EndShrinkTime() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A47F4))(this);
	}
	template <typename T = float> T get_FromBeginShrinkTime() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A4808))(this);
	}
	template <typename T = bool> T get_PropertyChanged() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A4838))(this);
	}
	template <typename T = float> T GetCurrentRadius() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A48AC))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(SparrowAreaCircle*))(Il2CppBase() + 0x35A4AC4))(this);
	}
	template <typename T = void> T SetupCircleInfo(Il2CppVector3 pos, float createTime, float circleContinuousTime, float targetRadius) {
		return ((T (*)(SparrowAreaCircle*, Il2CppVector3, float, float, float))(Il2CppBase() + 0x35A4AD8))(this, pos, createTime, circleContinuousTime, targetRadius);
	}
	template <typename T = void> T UpdateCircleInfo(Il2CppVector3 pos) {
		return ((T (*)(SparrowAreaCircle*, Il2CppVector3))(Il2CppBase() + 0x35A4C88))(this, pos);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCircleInfo(Il2CppVector3 P0) {
		return ((T (*)(SparrowAreaCircle*, Il2CppVector3))(Il2CppBase() + 0x35A4D7C))(this, P0);
	}

};

}
