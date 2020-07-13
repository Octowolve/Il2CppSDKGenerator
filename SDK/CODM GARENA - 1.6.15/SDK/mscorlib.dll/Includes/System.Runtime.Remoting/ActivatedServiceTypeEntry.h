#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ActivatedServiceTypeEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ActivatedServiceTypeEntry"));
	}

	template <typename T = uintptr_t> T& obj_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(ActivatedServiceTypeEntry*))(Il2CppBase() + 0x4B1A878))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ActivatedServiceTypeEntry*))(Il2CppBase() + 0x4B1A880))(this);
	}

};

}
