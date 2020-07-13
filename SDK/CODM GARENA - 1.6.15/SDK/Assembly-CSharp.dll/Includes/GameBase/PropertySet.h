#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PropertySet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PropertySet"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_PropList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnApplyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnPack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseBoolVal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcBoolVal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcByBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ApplyValue(uintptr_t propType, uintptr_t calcType, float val) {
		return ((T (*)(PropertySet*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x2DBE324))(this, propType, calcType, val);
	}
	template <typename T = void> T UnApplyValue(uintptr_t propType, uintptr_t calcType, float val) {
		return ((T (*)(PropertySet*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x2DBE4C8))(this, propType, calcType, val);
	}
	template <typename T = void> T Pack(uintptr_t prop) {
		return ((T (*)(PropertySet*, uintptr_t))(Il2CppBase() + 0x2DBE5DC))(this, prop);
	}
	template <typename T = void> T UnPack(uintptr_t prop) {
		return ((T (*)(PropertySet*, uintptr_t))(Il2CppBase() + 0x2DBE74C))(this, prop);
	}
	template <typename T = void> T IncreaseBoolVal(uintptr_t propType, int32_t val) {
		return ((T (*)(PropertySet*, uintptr_t, int32_t))(Il2CppBase() + 0x2DBE83C))(this, propType, val);
	}
	template <typename T = bool> T CalcBoolVal(uintptr_t propType) {
		return ((T (*)(PropertySet*, uintptr_t))(Il2CppBase() + 0x2DBE9CC))(this, propType);
	}
	template <typename T = float> T CalcByBase(uintptr_t propType, float baseVal) {
		return ((T (*)(PropertySet*, uintptr_t, float))(Il2CppBase() + 0x2DBEAD4))(this, propType, baseVal);
	}

};

}
