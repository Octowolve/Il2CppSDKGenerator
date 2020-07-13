#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class CUAnimationEventStruct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "CUAnimationEventStruct"));
	}


	template <typename T = uintptr_t> T get_eventType() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_eventType(uintptr_t value) {
		return ((T (*)(CUAnimationEventStruct*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(CUAnimationEventStruct*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_isActivate() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isActivate(bool value) {
		return ((T (*)(CUAnimationEventStruct*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_strValue(Il2CppString* value) {
		return ((T (*)(CUAnimationEventStruct*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue2() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_strValue2(Il2CppString* value) {
		return ((T (*)(CUAnimationEventStruct*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uint64_t> T get_value1() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_value1(uint64_t value) {
		return ((T (*)(CUAnimationEventStruct*, uint64_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_value2() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_value2(float value) {
		return ((T (*)(CUAnimationEventStruct*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_value3() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_value3(float value) {
		return ((T (*)(CUAnimationEventStruct*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_vec(Il2CppVector3 value) {
		return ((T (*)(CUAnimationEventStruct*, Il2CppVector3))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec2() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_vec2(Il2CppVector3 value) {
		return ((T (*)(CUAnimationEventStruct*, Il2CppVector3))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_AssetObj() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_AssetObj(uintptr_t value) {
		return ((T (*)(CUAnimationEventStruct*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_TickMode() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Tick(float timeDelta, uintptr_t inActor) {
		return ((T (*)(CUAnimationEventStruct*, float, uintptr_t))(Il2CppBase() + 0x0))(this, timeDelta, inActor);
	}
	template <typename T = void> T SetCallback(uintptr_t inCallback) {
		return ((T (*)(CUAnimationEventStruct*, uintptr_t))(Il2CppBase() + 0x0))(this, inCallback);
	}
	template <typename T = void> T Init(uintptr_t inActor, float inAnimLen) {
		return ((T (*)(CUAnimationEventStruct*, uintptr_t, float))(Il2CppBase() + 0x0))(this, inActor, inAnimLen);
	}
	template <typename T = void> T shutdown() {
		return ((T (*)(CUAnimationEventStruct*))(Il2CppBase() + 0x0))(this);
	}

};

}
