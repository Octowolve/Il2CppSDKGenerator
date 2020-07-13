#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class ArrayType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "ArrayType"));
	}

	template <typename T = int32_t> T& rank() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T IsArrayImpl() {
		return ((T (*)(ArrayType*))(Il2CppBase() + 0x456658C))(this);
	}
	template <typename T = int32_t> T GetArrayRank() {
		return ((T (*)(ArrayType*))(Il2CppBase() + 0x4566594))(this);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(ArrayType*))(Il2CppBase() + 0x45665A4))(this);
	}
	template <typename T = uintptr_t> T GetAttributeFlagsImpl() {
		return ((T (*)(ArrayType*))(Il2CppBase() + 0x4566660))(this);
	}
	template <typename T = Il2CppString*> T FormatName(Il2CppString* elementName) {
		return ((T (*)(ArrayType*, Il2CppString*))(Il2CppBase() + 0x4566768))(this, elementName);
	}

};

}
