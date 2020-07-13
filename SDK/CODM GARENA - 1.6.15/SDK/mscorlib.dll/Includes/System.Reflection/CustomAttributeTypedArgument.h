#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class CustomAttributeTypedArgument
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "CustomAttributeTypedArgument"));
	}

	template <typename T = uintptr_t> T& argumentType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CustomAttributeTypedArgument*))(Il2CppBase() + 0x456648C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(CustomAttributeTypedArgument*, uintptr_t))(Il2CppBase() + 0x4566494))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CustomAttributeTypedArgument*))(Il2CppBase() + 0x456649C))(this);
	}

};

}
