#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class Property
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Property"));
	}

	template <typename T = uintptr_t> T& PropType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& IntVal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& FloatVal_Plus() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& FloatVal_Multi() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FloatVal_Div() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> static T& UseNewFormula() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SubAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStringValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCalcType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseBoolVal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcByBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_BoolVal() {
		return ((T (*)(Property*))(Il2CppBase() + 0x2DBD1BC))(this);
	}
	template <typename T = void> T AddAll(uintptr_t prop) {
		return ((T (*)(Property*, uintptr_t))(Il2CppBase() + 0x2DBD1E8))(this, prop);
	}
	template <typename T = void> T SubAll(uintptr_t prop) {
		return ((T (*)(Property*, uintptr_t))(Il2CppBase() + 0x2DBD30C))(this, prop);
	}
	template <typename T = void> T SetValue(uintptr_t calcType, float val) {
		return ((T (*)(Property*, uintptr_t, float))(Il2CppBase() + 0x2DBD430))(this, calcType, val);
	}
	template <typename T = void> T AddValue(uintptr_t calcType, float val) {
		return ((T (*)(Property*, uintptr_t, float))(Il2CppBase() + 0x2DBD54C))(this, calcType, val);
	}
	template <typename T = void> T SetValue_1(int32_t val) {
		return ((T (*)(Property*, int32_t))(Il2CppBase() + 0x2DBD678))(this, val);
	}
	template <typename T = void> T AddValue_1(int32_t val) {
		return ((T (*)(Property*, int32_t))(Il2CppBase() + 0x2DBD750))(this, val);
	}
	template <typename T = void> T SetStringValue(Il2CppString* propName, Il2CppString* strCalcType, Il2CppString* strVal) {
		return ((T (*)(Property*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2DBD830))(this, propName, strCalcType, strVal);
	}
	template <typename T = uintptr_t> T GetCalcType(Il2CppString* calcType) {
		return ((T (*)(Property*, Il2CppString*))(Il2CppBase() + 0x2DBDD80))(this, calcType);
	}
	template <typename T = void> T IncreaseBoolVal(int32_t val) {
		return ((T (*)(Property*, int32_t))(Il2CppBase() + 0x2DBDF90))(this, val);
	}
	template <typename T = float> T CalcByBase(float baseVal) {
		return ((T (*)(Property*, float))(Il2CppBase() + 0x2DBE070))(this, baseVal);
	}

};

}
