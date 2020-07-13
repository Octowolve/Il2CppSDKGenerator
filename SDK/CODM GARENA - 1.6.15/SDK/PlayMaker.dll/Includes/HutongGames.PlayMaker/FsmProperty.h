#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmProperty"));
	}

	template <typename T = uintptr_t> T& TargetObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& TargetTypeName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TargetType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PropertyName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& PropertyType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BoolParameter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& FloatParameter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& IntParameter() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& GameObjectParameter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& StringParameter() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Vector2Parameter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Vector3Parameter() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& RectParamater() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& QuaternionParameter() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ObjectParameter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& MaterialParameter() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& TextureParameter() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ColorParameter() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& EnumParameter() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ArrayParameter() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& setProperty() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& initialized() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = uintptr_t> T& targetObjectCached() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& memberInfo() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T SetVariable(uintptr_t variable) {
		return ((T (*)(FsmProperty*, uintptr_t))(Il2CppBase() + 0x2F100F4))(this, variable);
	}
	template <typename T = uintptr_t> T GetVariable() {
		return ((T (*)(FsmProperty*))(Il2CppBase() + 0x2F10700))(this);
	}
	template <typename T = void> T SetPropertyName(Il2CppString* propertyName) {
		return ((T (*)(FsmProperty*, Il2CppString*))(Il2CppBase() + 0x2F10FE4))(this, propertyName);
	}
	template <typename T = void> T SetValue() {
		return ((T (*)(FsmProperty*))(Il2CppBase() + 0x2F11EE0))(this);
	}
	template <typename T = void> T GetValue() {
		return ((T (*)(FsmProperty*))(Il2CppBase() + 0x2F13034))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FsmProperty*))(Il2CppBase() + 0x2F11AF4))(this);
	}
	template <typename T = void> T CheckForReinitialize() {
		return ((T (*)(FsmProperty*))(Il2CppBase() + 0x2F10EB0))(this);
	}
	template <typename T = void> T ResetParameters() {
		return ((T (*)(FsmProperty*))(Il2CppBase() + 0x2F0FEDC))(this);
	}

};

}
