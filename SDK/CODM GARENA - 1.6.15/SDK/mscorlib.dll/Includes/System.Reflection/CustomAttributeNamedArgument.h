#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class CustomAttributeNamedArgument
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "CustomAttributeNamedArgument"));
	}

	template <typename T = uintptr_t> T& typedArgument() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& memberInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CustomAttributeNamedArgument*))(Il2CppBase() + 0x4566410))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(CustomAttributeNamedArgument*, uintptr_t))(Il2CppBase() + 0x4566418))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CustomAttributeNamedArgument*))(Il2CppBase() + 0x4566420))(this);
	}

};

}
