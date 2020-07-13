#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoPropertyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoPropertyInfo"));
	}

	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& get_method() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& set_method() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> static T get_property_info(uintptr_t prop, uintptr_t info, uintptr_t req_info) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD69C8))(0, prop, info, req_info);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTypeModifiers(uintptr_t prop, bool optional) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4FD8088))(0, prop, optional);
	}

};

}
