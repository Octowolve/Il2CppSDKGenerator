#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ActivatedClientTypeEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ActivatedClientTypeEntry"));
	}

	template <typename T = Il2CppString*> T& applicationUrl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& obj_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_ApplicationUrl() {
		return ((T (*)(ActivatedClientTypeEntry*))(Il2CppBase() + 0x4B1A610))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ContextAttributes() {
		return ((T (*)(ActivatedClientTypeEntry*))(Il2CppBase() + 0x4B1A618))(this);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(ActivatedClientTypeEntry*))(Il2CppBase() + 0x4B1A620))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ActivatedClientTypeEntry*))(Il2CppBase() + 0x4B1A628))(this);
	}

};

}
