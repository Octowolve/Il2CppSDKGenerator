#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class ByRefType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "ByRefType"));
	}


	template <typename T = bool> T IsByRefImpl() {
		return ((T (*)(ByRefType*))(Il2CppBase() + 0x4568690))(this);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(ByRefType*))(Il2CppBase() + 0x4568698))(this);
	}
	template <typename T = Il2CppString*> T FormatName(Il2CppString* elementName) {
		return ((T (*)(ByRefType*, Il2CppString*))(Il2CppBase() + 0x4568754))(this, elementName);
	}
	template <typename T = uintptr_t> T MakeArrayType() {
		return ((T (*)(ByRefType*))(Il2CppBase() + 0x4568828))(this);
	}
	template <typename T = uintptr_t> T MakeByRefType() {
		return ((T (*)(ByRefType*))(Il2CppBase() + 0x45688D0))(this);
	}

};

}
