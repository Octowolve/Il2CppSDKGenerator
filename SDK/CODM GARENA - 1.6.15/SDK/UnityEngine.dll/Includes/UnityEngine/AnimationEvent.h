#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimationEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimationEvent"));
	}

	template <typename T = float> T& m_Time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_FunctionName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_StringParameter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_ObjectReferenceParameter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_FloatParameter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_IntParameter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_MessageOptions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Source() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_StateSender() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_AnimatorStateInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_AnimatorClipInfo() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = Il2CppString*> T get_data() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FEF8))(this);
	}
	template <typename T = void> T set_data(Il2CppString* value) {
		return ((T (*)(AnimationEvent*, Il2CppString*))(Il2CppBase() + 0x468FF00))(this, value);
	}
	template <typename T = Il2CppString*> T get_stringParameter() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF08))(this);
	}
	template <typename T = void> T set_stringParameter(Il2CppString* value) {
		return ((T (*)(AnimationEvent*, Il2CppString*))(Il2CppBase() + 0x468FF10))(this, value);
	}
	template <typename T = float> T get_floatParameter() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF18))(this);
	}
	template <typename T = void> T set_floatParameter(float value) {
		return ((T (*)(AnimationEvent*, float))(Il2CppBase() + 0x468FF20))(this, value);
	}
	template <typename T = int32_t> T get_intParameter() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF28))(this);
	}
	template <typename T = void> T set_intParameter(int32_t value) {
		return ((T (*)(AnimationEvent*, int32_t))(Il2CppBase() + 0x468FF30))(this, value);
	}
	template <typename T = uintptr_t> T get_objectReferenceParameter() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF38))(this);
	}
	template <typename T = void> T set_objectReferenceParameter(uintptr_t value) {
		return ((T (*)(AnimationEvent*, uintptr_t))(Il2CppBase() + 0x468FF40))(this, value);
	}
	template <typename T = Il2CppString*> T get_functionName() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF48))(this);
	}
	template <typename T = void> T set_functionName(Il2CppString* value) {
		return ((T (*)(AnimationEvent*, Il2CppString*))(Il2CppBase() + 0x468FF50))(this, value);
	}
	template <typename T = float> T get_time() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF58))(this);
	}
	template <typename T = void> T set_time(float value) {
		return ((T (*)(AnimationEvent*, float))(Il2CppBase() + 0x468FF60))(this, value);
	}
	template <typename T = uintptr_t> T get_messageOptions() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF68))(this);
	}
	template <typename T = void> T set_messageOptions(uintptr_t value) {
		return ((T (*)(AnimationEvent*, uintptr_t))(Il2CppBase() + 0x468FF70))(this, value);
	}
	template <typename T = bool> T get_isFiredByLegacy() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF78))(this);
	}
	template <typename T = bool> T get_isFiredByAnimator() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF88))(this);
	}
	template <typename T = uintptr_t> T get_animationState() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x468FF9C))(this);
	}
	template <typename T = uintptr_t> T get_animatorStateInfo() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x469006C))(this);
	}
	template <typename T = uintptr_t> T get_animatorClipInfo() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x4690168))(this);
	}
	template <typename T = int32_t> T GetHash() {
		return ((T (*)(AnimationEvent*))(Il2CppBase() + 0x4690244))(this);
	}

};

}
