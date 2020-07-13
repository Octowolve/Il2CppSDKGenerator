#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class TypeEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "TypeEntry"));
	}

	template <typename T = Il2CppString*> T& assembly_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& type_name() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_AssemblyName() {
		return ((T (*)(TypeEntry*))(Il2CppBase() + 0x4B1A6F8))(this);
	}
	template <typename T = void> T set_AssemblyName(Il2CppString* value) {
		return ((T (*)(TypeEntry*, Il2CppString*))(Il2CppBase() + 0x4B1A5F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_TypeName() {
		return ((T (*)(TypeEntry*))(Il2CppBase() + 0x4B1A6F0))(this);
	}
	template <typename T = void> T set_TypeName(Il2CppString* value) {
		return ((T (*)(TypeEntry*, Il2CppString*))(Il2CppBase() + 0x4B1A600))(this, value);
	}

};

}
