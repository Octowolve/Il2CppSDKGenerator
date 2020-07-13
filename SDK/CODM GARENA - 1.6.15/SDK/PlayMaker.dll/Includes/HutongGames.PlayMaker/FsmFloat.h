#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmFloat"));
	}

	template <typename T = float> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = float> T get_Value() {
		return ((T (*)(FsmFloat*))(Il2CppBase() + 0x2EE8464))(this);
	}
	template <typename T = void> T set_Value(float value) {
		return ((T (*)(FsmFloat*, float))(Il2CppBase() + 0x2EE071C))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmFloat*))(Il2CppBase() + 0x2F0C654))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmFloat*, uintptr_t))(Il2CppBase() + 0x2F0C6E8))(this, value);
	}
	template <typename T = void> T SafeAssign(uintptr_t val) {
		return ((T (*)(FsmFloat*, uintptr_t))(Il2CppBase() + 0x2F0C778))(this, val);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmFloat*))(Il2CppBase() + 0x2F0C860))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmFloat*))(Il2CppBase() + 0x2F0C8FC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmFloat*))(Il2CppBase() + 0x2F0C904))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2F0C910))(0, value);
	}

};

}
