#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SplineCurves
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SplineCurves"));
	}

	template <typename T = bool> T& bIsLooped() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& points() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<float>*> T& posLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& totalLength() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampInputValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPointIndexForInputValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIdxVal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CubicInterp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = float> T ClampInputValue(float inValue) {
		return ((T (*)(SplineCurves*, float))(Il2CppBase() + 0x30A0EBC))(this, inValue);
	}
	template <typename T = int32_t> T GetPointIndexForInputValue(float inValue) {
		return ((T (*)(SplineCurves*, float))(Il2CppBase() + 0x30A0FE8))(this, inValue);
	}
	template <typename T = float> T GetIdxVal(float inVal) {
		return ((T (*)(SplineCurves*, float))(Il2CppBase() + 0x30A1144))(this, inVal);
	}
	template <typename T = Il2CppVector3> T Eval(float inVal) {
		return ((T (*)(SplineCurves*, float))(Il2CppBase() + 0x30A1308))(this, inVal);
	}
	template <typename T = Il2CppVector3> T CubicInterp(Il2CppVector3 p0, Il2CppVector3 t0, Il2CppVector3 p1, Il2CppVector3 t1, float a) {
		return ((T (*)(SplineCurves*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x30A1714))(this, p0, t0, p1, t1, a);
	}

};

}
