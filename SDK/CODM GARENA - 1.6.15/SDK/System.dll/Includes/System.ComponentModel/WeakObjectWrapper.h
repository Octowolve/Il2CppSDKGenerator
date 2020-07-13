#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class WeakObjectWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "WeakObjectWrapper"));
	}

	template <typename T = int32_t> T& TargetHashCode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Weak() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_TargetHashCode() {
		return ((T (*)(WeakObjectWrapper*))(Il2CppBase() + 0x4CBAC8C))(this);
	}
	template <typename T = uintptr_t> T get_Weak() {
		return ((T (*)(WeakObjectWrapper*))(Il2CppBase() + 0x4CBAC94))(this);
	}

};

}
