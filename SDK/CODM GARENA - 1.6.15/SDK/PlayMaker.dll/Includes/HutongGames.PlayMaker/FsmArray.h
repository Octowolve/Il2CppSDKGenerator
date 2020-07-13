#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmArray"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& objectTypeName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& objectType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& floatValues() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& intValues() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& boolValues() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& stringValues() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& vector4Values() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& objectReferences() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sourceArray() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& values() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T get_RawValue() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F02A38))(this);
	}
	template <typename T = void> T set_RawValue(uintptr_t value) {
		return ((T (*)(FsmArray*, uintptr_t))(Il2CppBase() + 0x2F02A40))(this, value);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F02BCC))(this);
	}
	template <typename T = void> T set_ObjectType(uintptr_t value) {
		return ((T (*)(FsmArray*, uintptr_t))(Il2CppBase() + 0x2F02DCC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ObjectTypeName() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F0310C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Values() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F03114))(this);
	}
	template <typename T = void> T set_Values(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmArray*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F032AC))(this, value);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F032B4))(this);
	}
	template <typename T = uintptr_t> T get_TypeConstraint() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F032F4))(this);
	}
	template <typename T = uintptr_t> T get_ElementType() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F02DC4))(this);
	}
	template <typename T = void> T set_ElementType(uintptr_t value) {
		return ((T (*)(FsmArray*, uintptr_t))(Il2CppBase() + 0x2F032FC))(this, value);
	}
	template <typename T = void> T InitArray() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F0313C))(this);
	}
	template <typename T = uintptr_t> T Get(int32_t index) {
		return ((T (*)(FsmArray*, int32_t))(Il2CppBase() + 0x2F03D2C))(this, index);
	}
	template <typename T = void> T Set(int32_t index, uintptr_t value) {
		return ((T (*)(FsmArray*, int32_t, uintptr_t))(Il2CppBase() + 0x2F03D88))(this, index, value);
	}
	template <typename T = uintptr_t> T Load(int32_t index) {
		return ((T (*)(FsmArray*, int32_t))(Il2CppBase() + 0x2F03660))(this, index);
	}
	template <typename T = void> T Save(int32_t index, uintptr_t value) {
		return ((T (*)(FsmArray*, int32_t, uintptr_t))(Il2CppBase() + 0x2F03E10))(this, index, value);
	}
	template <typename T = void> T SetType(uintptr_t newType) {
		return ((T (*)(FsmArray*, uintptr_t))(Il2CppBase() + 0x2F03300))(this, newType);
	}
	template <typename T = void> T SaveChanges() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F04B94))(this);
	}
	template <typename T = void> T CopyValues(uintptr_t source) {
		return ((T (*)(FsmArray*, uintptr_t))(Il2CppBase() + 0x2F04C60))(this, source);
	}
	template <typename T = void> T ConformSourceArraySize() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F04868))(this);
	}
	template <typename T = uintptr_t> T GetSourceArray() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F0335C))(this);
	}
	template <typename T = void> T Resize(int32_t newLength) {
		return ((T (*)(FsmArray*, int32_t))(Il2CppBase() + 0x2F04D04))(this, newLength);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F030F4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F05190))(this);
	}
	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F05220))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F05228))(this);
	}
	template <typename T = bool> T TestTypeConstraint(uintptr_t variableType, uintptr_t _objectType) {
		return ((T (*)(FsmArray*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F055F4))(this, variableType, _objectType);
	}
	template <typename T = uintptr_t> T RealType() {
		return ((T (*)(FsmArray*))(Il2CppBase() + 0x2F056C8))(this);
	}

};

}
