#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USPropertyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USPropertyInfo"));
	}

	template <typename T = uintptr_t> T& propertyType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& component() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& componentType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& propertyName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& fieldName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& cachedPropertyInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& cachedFieldInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& curves() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& curves0() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& curves1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& curves2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& curves3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& tmpBool() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& tmpKeyframe() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& tmpVector2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& tmpVector3() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& tmpVector4() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppQuaternion> T& tmpQuat() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& tmpColour() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& baseInt() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int64_t> T& baseLong() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& baseFloat() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = double> T& baseDouble() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& baseBool() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector2> T& baseVector2() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector3> T& baseVector3() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& baseVector4() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppQuaternion> T& baseQuat() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& baseColour() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& previousTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& internalName() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = void*> static T& f__am$cache1F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_propertyInfo() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x4861718))(this);
	}
	template <typename T = void> T set_propertyInfo(uintptr_t value) {
		return ((T (*)(USPropertyInfo*, uintptr_t))(Il2CppBase() + 0x4861904))(this, value);
	}
	template <typename T = uintptr_t> T get_fieldInfo() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x4861940))(this);
	}
	template <typename T = void> T set_fieldInfo(uintptr_t value) {
		return ((T (*)(USPropertyInfo*, uintptr_t))(Il2CppBase() + 0x4861B2C))(this, value);
	}
	template <typename T = bool> T get_UseCurrentValue() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x4861B68))(this);
	}
	template <typename T = void> T set_UseCurrentValue(bool value) {
		return ((T (*)(USPropertyInfo*, bool))(Il2CppBase() + 0x4861C90))(this, value);
	}
	template <typename T = uintptr_t> T get_Component() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x4861EB4))(this);
	}
	template <typename T = void> T set_Component(uintptr_t value) {
		return ((T (*)(USPropertyInfo*, uintptr_t))(Il2CppBase() + 0x4861EBC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ComponentType() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x4861FD4))(this);
	}
	template <typename T = void> T set_ComponentType(Il2CppString* value) {
		return ((T (*)(USPropertyInfo*, Il2CppString*))(Il2CppBase() + 0x4861FBC))(this, value);
	}
	template <typename T = Il2CppString*> T get_PropertyName() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x4862228))(this);
	}
	template <typename T = void> T set_PropertyName(Il2CppString* value) {
		return ((T (*)(USPropertyInfo*, Il2CppString*))(Il2CppBase() + 0x4862330))(this, value);
	}
	template <typename T = uintptr_t> T get_PropertyType() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x4862334))(this);
	}
	template <typename T = Il2CppString*> T get_InternalName() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x486233C))(this);
	}
	template <typename T = void> T set_InternalName(Il2CppString* value) {
		return ((T (*)(USPropertyInfo*, Il2CppString*))(Il2CppBase() + 0x4862344))(this, value);
	}
	template <typename T = void> T CreatePropertyInfo(uintptr_t createdPropertyType) {
		return ((T (*)(USPropertyInfo*, uintptr_t))(Il2CppBase() + 0x486234C))(this, createdPropertyType);
	}
	template <typename T = void> T SetValue(float time) {
		return ((T (*)(USPropertyInfo*, float))(Il2CppBase() + 0x48630C0))(this, time);
	}
	template <typename T = void> T AddKeyframe(Il2CppList<uintptr_t>* settingCurves, uintptr_t ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, Il2CppList<uintptr_t>*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x486412C))(this, settingCurves, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_1(float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, float, uintptr_t))(Il2CppBase() + 0x4865AF8))(this, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_2(uintptr_t ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x4865BAC))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_3(uintptr_t curve, uintptr_t keyframe, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48659A4))(this, curve, keyframe, tangentMode);
	}
	template <typename T = void> T AddKeyframe_4(int32_t ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, int32_t, float, uintptr_t))(Il2CppBase() + 0x4865498))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_5(int64_t ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, int64_t, float, uintptr_t))(Il2CppBase() + 0x4865594))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_6(float ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, float, float, uintptr_t))(Il2CppBase() + 0x48656A4))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_7(double ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, double, float, uintptr_t))(Il2CppBase() + 0x4865798))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_8(bool ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, bool, float, uintptr_t))(Il2CppBase() + 0x486589C))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_9(Il2CppVector2 ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, Il2CppVector2, float, uintptr_t))(Il2CppBase() + 0x4865FE4))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_10(Il2CppVector3 ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x4866144))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_11(uintptr_t ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x4866324))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_12(Il2CppQuaternion ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, Il2CppQuaternion, float, uintptr_t))(Il2CppBase() + 0x4866570))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T AddKeyframe_13(uintptr_t ourValue, float time, uintptr_t tangentMode) {
		return ((T (*)(USPropertyInfo*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x48667BC))(this, ourValue, time, tangentMode);
	}
	template <typename T = void> T CreatePropertyCurves() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x486242C))(this);
	}
	template <typename T = uintptr_t> T GetValueForTime(float time) {
		return ((T (*)(USPropertyInfo*, float))(Il2CppBase() + 0x4866A08))(this, time);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetModifiedCurvesAtTime(float runningTime) {
		return ((T (*)(USPropertyInfo*, float))(Il2CppBase() + 0x4867450))(this, runningTime);
	}
	template <typename T = void> T StoreBaseState() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x48690EC))(this);
	}
	template <typename T = void> T RestoreBaseState() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x48693FC))(this);
	}
	template <typename T = uintptr_t> static T GetMappedType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4864FEC))(0, type);
	}
	template <typename T = uintptr_t> static T GetMappedType_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48696F4))(0, type);
	}
	template <typename T = float> T GetValue(int32_t curveIndex) {
		return ((T (*)(USPropertyInfo*, int32_t))(Il2CppBase() + 0x4869AA8))(this, curveIndex);
	}
	template <typename T = void> T BuildForCurrentValue(int32_t curveIndex) {
		return ((T (*)(USPropertyInfo*, int32_t))(Il2CppBase() + 0x4864034))(this, curveIndex);
	}
	template <typename T = Il2CppString*> T GetJSON() {
		return ((T (*)(USPropertyInfo*))(Il2CppBase() + 0x4869ED8))(this);
	}
	template <typename T = bool> static T get_UseCurrentValuem__4(uintptr_t curve) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486A004))(0, curve);
	}

};

}
