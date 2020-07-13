#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class WellKnownServiceTypeEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "WellKnownServiceTypeEntry"));
	}

	template <typename T = uintptr_t> T& obj_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& obj_uri() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& obj_mode() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Mode() {
		return ((T (*)(WellKnownServiceTypeEntry*))(Il2CppBase() + 0x4B411DC))(this);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(WellKnownServiceTypeEntry*))(Il2CppBase() + 0x4B411D4))(this);
	}
	template <typename T = Il2CppString*> T get_ObjectUri() {
		return ((T (*)(WellKnownServiceTypeEntry*))(Il2CppBase() + 0x4B411CC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(WellKnownServiceTypeEntry*))(Il2CppBase() + 0x4B45BF8))(this);
	}

};

}
