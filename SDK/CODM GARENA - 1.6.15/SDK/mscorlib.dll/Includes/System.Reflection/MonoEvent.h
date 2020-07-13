#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoEvent"));
	}

	template <typename T = uintptr_t> T& klass() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(MonoEvent*))(Il2CppBase() + 0x4FD3F34))(this);
	}
	template <typename T = uintptr_t> T GetAddMethod(bool nonPublic) {
		return ((T (*)(MonoEvent*, bool))(Il2CppBase() + 0x4FD3FB0))(this, nonPublic);
	}
	template <typename T = uintptr_t> T GetRemoveMethod(bool nonPublic) {
		return ((T (*)(MonoEvent*, bool))(Il2CppBase() + 0x4FD4024))(this, nonPublic);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(MonoEvent*))(Il2CppBase() + 0x4FD4098))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MonoEvent*))(Il2CppBase() + 0x4FD40C8))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MonoEvent*))(Il2CppBase() + 0x4FD40F8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonoEvent*))(Il2CppBase() + 0x4FD4128))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoEvent*, uintptr_t, bool))(Il2CppBase() + 0x4FD4228))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(MonoEvent*, bool))(Il2CppBase() + 0x4FD42EC))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoEvent*, uintptr_t, bool))(Il2CppBase() + 0x4FD439C))(this, attributeType, inherit);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MonoEvent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD4460))(this, info, context);
	}

};

}
