#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoCMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoCMethod"));
	}

	template <typename T = uintptr_t> T& mhandle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& reftype() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetParameters() {
		return ((T (*)(MonoCMethod*))(Il2CppBase() + 0x4FD31AC))(this);
	}
	template <typename T = uintptr_t> T InternalInvoke(uintptr_t obj, Il2CppArray<uintptr_t>* parameters, uintptr_t* exc) {
		return ((T (*)(MonoCMethod*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4FD31C4))(this, obj, parameters, exc);
	}
	template <typename T = uintptr_t> T Invoke(uintptr_t obj, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* parameters, uintptr_t culture) {
		return ((T (*)(MonoCMethod*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4FD31C8))(this, obj, invokeAttr, binder, parameters, culture);
	}
	template <typename T = uintptr_t> T Invoke_1(uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* parameters, uintptr_t culture) {
		return ((T (*)(MonoCMethod*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4FD3848))(this, invokeAttr, binder, parameters, culture);
	}
	template <typename T = uintptr_t> T get_MethodHandle() {
		return ((T (*)(MonoCMethod*))(Il2CppBase() + 0x4FD3888))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(MonoCMethod*))(Il2CppBase() + 0x4FD38B8))(this);
	}
	template <typename T = uintptr_t> T get_CallingConvention() {
		return ((T (*)(MonoCMethod*))(Il2CppBase() + 0x4FD3924))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MonoCMethod*))(Il2CppBase() + 0x4FD3990))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(MonoCMethod*))(Il2CppBase() + 0x4FD3998))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MonoCMethod*))(Il2CppBase() + 0x4FD3A04))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoCMethod*, uintptr_t, bool))(Il2CppBase() + 0x4FD3A30))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(MonoCMethod*, bool))(Il2CppBase() + 0x4FD3AF4))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoCMethod*, uintptr_t, bool))(Il2CppBase() + 0x4FD3BA4))(this, attributeType, inherit);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonoCMethod*))(Il2CppBase() + 0x4FD3C68))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MonoCMethod*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD3EAC))(this, info, context);
	}

};

}
