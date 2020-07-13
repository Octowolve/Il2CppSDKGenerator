#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmColor"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(FsmColor*))(Il2CppBase() + 0x2F05EDC))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(FsmColor*, uintptr_t))(Il2CppBase() + 0x2EE0804))(this, value);
	}
	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmColor*))(Il2CppBase() + 0x2F05EEC))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmColor*, uintptr_t))(Il2CppBase() + 0x2F05F84))(this, value);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmColor*))(Il2CppBase() + 0x2F06064))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmColor*))(Il2CppBase() + 0x2F060F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmColor*))(Il2CppBase() + 0x2F060FC))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F06108))(0, value);
	}

};

}
