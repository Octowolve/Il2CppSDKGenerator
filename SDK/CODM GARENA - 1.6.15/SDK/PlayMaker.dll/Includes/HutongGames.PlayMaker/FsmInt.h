#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmInt"));
	}

	template <typename T = int32_t> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_Value() {
		return ((T (*)(FsmInt*))(Il2CppBase() + 0x2EE8ED8))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(FsmInt*, int32_t))(Il2CppBase() + 0x2EE0714))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmInt*))(Il2CppBase() + 0x2F0CDEC))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmInt*, uintptr_t))(Il2CppBase() + 0x2F0CE80))(this, value);
	}
	template <typename T = void> T SafeAssign(uintptr_t val) {
		return ((T (*)(FsmInt*, uintptr_t))(Il2CppBase() + 0x2F0CF10))(this, val);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmInt*))(Il2CppBase() + 0x2F0D04C))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmInt*))(Il2CppBase() + 0x2F0D0E8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmInt*))(Il2CppBase() + 0x2F0D0F0))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2F0D0FC))(0, value);
	}

};

}
