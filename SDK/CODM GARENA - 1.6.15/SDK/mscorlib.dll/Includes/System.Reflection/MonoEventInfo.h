#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoEventInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoEventInfo"));
	}

	template <typename T = uintptr_t> T& declaring_type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& reflected_type() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& add_method() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& remove_method() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& raise_method() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& other_methods() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> static T get_event_info(uintptr_t ev, uintptr_t* info) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4FD4548))(0, ev, info);
	}
	template <typename T = uintptr_t> static T GetEventInfo(uintptr_t ev) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD3F64))(0, ev);
	}

};

}
