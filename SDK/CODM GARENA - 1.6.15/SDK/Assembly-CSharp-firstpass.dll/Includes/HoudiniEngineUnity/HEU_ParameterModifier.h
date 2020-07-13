#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUParameterModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_ParameterModifier"));
	}

	template <typename T = int32_t> T& _parameterIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _action() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _instanceIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _modifierValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& _floatValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _intValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> static T GetNewModifier(uintptr_t action, int32_t parameterIndex, int32_t instanceIndex, int32_t modifierValue) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2BE46B4))(0, action, parameterIndex, instanceIndex, modifierValue);
	}

};

}
