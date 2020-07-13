#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProGrids {

class pgUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProGrids", "pg_Util"));
	}

	template <typename T = float> static T& EPSILON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& m_SnapOverrideCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> static T& m_NoSnapAttributeTypeCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& m_ConditionalSnapAttributeCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T ColorWithString(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4811788))(0, value);
	}
	template <typename T = Il2CppVector3> static T VectorToMask(Il2CppVector3 vec) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4811A48))(0, vec);
	}
	template <typename T = uintptr_t> static T MaskToAxis(Il2CppVector3 vec) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4811C00))(0, vec);
	}
	template <typename T = uintptr_t> static T BestAxis(Il2CppVector3 vec) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4811D50))(0, vec);
	}
	template <typename T = uintptr_t> static T CalcDragAxis(Il2CppVector3 movement, uintptr_t cam) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4811E5C))(0, movement, cam);
	}
	template <typename T = float> static T ValueFromMask(Il2CppVector3 val, Il2CppVector3 mask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x481239C))(0, val, mask);
	}
	template <typename T = Il2CppVector3> static T SnapValue(Il2CppVector3 val, float snapValue) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x48124B4))(0, val, snapValue);
	}
	template <typename T = uintptr_t> static T GetType(Il2CppString* type, Il2CppString* assembly) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x481272C))(0, type, assembly);
	}
	template <typename T = void> static T SetUnityGridEnabled(bool isEnabled) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4812BC4))(0, isEnabled);
	}
	template <typename T = bool> static T GetUnityGridEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x4812DD8))(0);
	}
	template <typename T = Il2CppVector3> static T SnapValue_1(Il2CppVector3 val, Il2CppVector3 mask, float snapValue) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4812FCC))(0, val, mask, snapValue);
	}
	template <typename T = Il2CppVector3> static T SnapToCeil(Il2CppVector3 val, Il2CppVector3 mask, float snapValue) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4813240))(0, val, mask, snapValue);
	}
	template <typename T = Il2CppVector3> static T SnapToFloor(Il2CppVector3 val, float snapValue) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4813578))(0, val, snapValue);
	}
	template <typename T = Il2CppVector3> static T SnapToFloor_1(Il2CppVector3 val, Il2CppVector3 mask, float snapValue) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x481374C))(0, val, mask, snapValue);
	}
	template <typename T = float> static T Snap(float val, float round) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x48125C4))(0, val, round);
	}
	template <typename T = float> static T SnapToFloor_2(float val, float snapValue) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4813688))(0, val, snapValue);
	}
	template <typename T = float> static T SnapToCeil_1(float val, float snapValue) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x48134B4))(0, val, snapValue);
	}
	template <typename T = Il2CppVector3> static T CeilFloor(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x48139C0))(0, v);
	}
	template <typename T = void> static T ClearSnapEnabledCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x4813A14))(0);
	}
	template <typename T = bool> static T SnapIsEnabled(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4813AF8))(0, t);
	}
	template <typename T = bool> static T SnapIsEnabledm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4814A68))(0, x);
	}
	template <typename T = bool> static T SnapIsEnabledm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4814B20))(0, x);
	}

};

}
