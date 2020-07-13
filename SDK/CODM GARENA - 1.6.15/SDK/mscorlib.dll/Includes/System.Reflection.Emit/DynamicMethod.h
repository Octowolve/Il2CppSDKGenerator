#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class DynamicMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "DynamicMethod"));
	}

	template <typename T = uintptr_t> T& mhandle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& returnType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& parameters() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& callingConvention() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& module() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ilgen() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& refs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pinfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& creating() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T create_dynamic_method(uintptr_t m) {
		return ((T (*)(DynamicMethod*, uintptr_t))(Il2CppBase() + 0x456AD10))(this, m);
	}
	template <typename T = void> T destroy_dynamic_method(uintptr_t m) {
		return ((T (*)(DynamicMethod*, uintptr_t))(Il2CppBase() + 0x456AD14))(this, m);
	}
	template <typename T = void> T CreateDynMethod() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456AD18))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456B118))(this);
	}
	template <typename T = uintptr_t> T GetBaseDefinition() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456B158))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(DynamicMethod*, bool))(Il2CppBase() + 0x456B15C))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(DynamicMethod*, uintptr_t, bool))(Il2CppBase() + 0x456B1EC))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetParameters() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456B27C))(this);
	}
	template <typename T = uintptr_t> T Invoke(uintptr_t obj, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* parameters, uintptr_t culture) {
		return ((T (*)(DynamicMethod*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x456B47C))(this, obj, invokeAttr, binder, parameters, culture);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(DynamicMethod*, uintptr_t, bool))(Il2CppBase() + 0x456B644))(this, attributeType, inherit);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456B6D4))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456BBB0))(this);
	}
	template <typename T = uintptr_t> T get_CallingConvention() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456BBB8))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456BBC0))(this);
	}
	template <typename T = uintptr_t> T get_MethodHandle() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456BBC8))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456BBD0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456BBA8))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456BBD8))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(DynamicMethod*))(Il2CppBase() + 0x456BBA0))(this);
	}

};

}
