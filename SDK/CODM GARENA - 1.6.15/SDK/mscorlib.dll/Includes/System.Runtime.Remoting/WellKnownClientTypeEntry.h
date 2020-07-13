#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class WellKnownClientTypeEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "WellKnownClientTypeEntry"));
	}

	template <typename T = uintptr_t> T& obj_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& obj_url() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& app_url() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_ApplicationUrl() {
		return ((T (*)(WellKnownClientTypeEntry*))(Il2CppBase() + 0x4B45ACC))(this);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(WellKnownClientTypeEntry*))(Il2CppBase() + 0x4B40FBC))(this);
	}
	template <typename T = Il2CppString*> T get_ObjectUrl() {
		return ((T (*)(WellKnownClientTypeEntry*))(Il2CppBase() + 0x4B45AD4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(WellKnownClientTypeEntry*))(Il2CppBase() + 0x4B45ADC))(this);
	}

};

}
