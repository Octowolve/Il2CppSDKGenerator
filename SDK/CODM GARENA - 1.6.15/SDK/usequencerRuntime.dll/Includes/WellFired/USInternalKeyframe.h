#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USInternalKeyframe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USInternalKeyframe"));
	}

	template <typename T = float> T& value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& inTangent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& outTangent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& brokenTangents() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = float> T get_Value() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x485E8E0))(this);
	}
	template <typename T = void> T set_Value(float value) {
		return ((T (*)(USInternalKeyframe*, float))(Il2CppBase() + 0x485F23C))(this, value);
	}
	template <typename T = float> T get_Time() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x485D994))(this);
	}
	template <typename T = void> T set_Time(float value) {
		return ((T (*)(USInternalKeyframe*, float))(Il2CppBase() + 0x485F0DC))(this, value);
	}
	template <typename T = float> T get_InTangent() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x485E8E8))(this);
	}
	template <typename T = void> T set_InTangent(float value) {
		return ((T (*)(USInternalKeyframe*, float))(Il2CppBase() + 0x485F320))(this, value);
	}
	template <typename T = float> T get_OutTangent() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x485E8F0))(this);
	}
	template <typename T = void> T set_OutTangent(float value) {
		return ((T (*)(USInternalKeyframe*, float))(Il2CppBase() + 0x485F404))(this, value);
	}
	template <typename T = bool> T get_BrokenTangents() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x4860388))(this);
	}
	template <typename T = void> T set_BrokenTangents(bool value) {
		return ((T (*)(USInternalKeyframe*, bool))(Il2CppBase() + 0x4860390))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x4860468))(this);
	}
	template <typename T = void> T ConvertFrom(uintptr_t keyframe) {
		return ((T (*)(USInternalKeyframe*, uintptr_t))(Il2CppBase() + 0x485E468))(this, keyframe);
	}
	template <typename T = void> T Smooth() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x486046C))(this);
	}
	template <typename T = void> T Flatten() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x4860688))(this);
	}
	template <typename T = void> T RightTangentLinear() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x4860760))(this);
	}
	template <typename T = void> T RightTangentConstant() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x48608C4))(this);
	}
	template <typename T = void> T LeftTangentLinear() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x48608F8))(this);
	}
	template <typename T = void> T LeftTangentConstant() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x4860A5C))(this);
	}
	template <typename T = void> T BothTangentLinear() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x4860A90))(this);
	}
	template <typename T = void> T BothTangentConstant() {
		return ((T (*)(USInternalKeyframe*))(Il2CppBase() + 0x4860AAC))(this);
	}

};

}
