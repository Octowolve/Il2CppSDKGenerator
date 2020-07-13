#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FunctionCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FunctionCall"));
	}

	template <typename T = Il2CppString*> T& FunctionName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& parameterType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BoolParameter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& FloatParameter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& IntParameter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GameObjectParameter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ObjectParameter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& StringParameter() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Vector2Parameter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Vector3Parameter() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& RectParamater() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& QuaternionParameter() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& MaterialParameter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TextureParameter() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ColorParameter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& EnumParameter() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& ArrayParameter() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T ResetParameters() {
		return ((T (*)(FunctionCall*))(Il2CppBase() + 0x2F223E4))(this);
	}
	template <typename T = Il2CppString*> T get_ParameterType() {
		return ((T (*)(FunctionCall*))(Il2CppBase() + 0x2F225E4))(this);
	}
	template <typename T = void> T set_ParameterType(Il2CppString* value) {
		return ((T (*)(FunctionCall*, Il2CppString*))(Il2CppBase() + 0x2F225EC))(this, value);
	}

};

}
