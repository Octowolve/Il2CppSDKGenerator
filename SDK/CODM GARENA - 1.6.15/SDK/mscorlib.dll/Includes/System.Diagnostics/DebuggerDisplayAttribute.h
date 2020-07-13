#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class DebuggerDisplayAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics", "DebuggerDisplayAttribute"));
	}

	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(DebuggerDisplayAttribute*, Il2CppString*))(Il2CppBase() + 0x366ECDC))(this, value);
	}

};

}
