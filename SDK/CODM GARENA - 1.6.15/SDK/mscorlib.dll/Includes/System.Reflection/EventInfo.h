#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class EventInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "EventInfo"));
	}

	template <typename T = uintptr_t> T& cached_add_event() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(EventInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_EventHandlerType() {
		return ((T (*)(EventInfo*))(Il2CppBase() + 0x4FD049C))(this);
	}
	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(EventInfo*))(Il2CppBase() + 0x4FD0514))(this);
	}
	template <typename T = uintptr_t> T GetAddMethod(bool nonPublic) {
		return ((T (*)(EventInfo*, bool))(Il2CppBase() + 0x0))(this, nonPublic);
	}
	template <typename T = uintptr_t> T GetRemoveMethod(bool nonPublic) {
		return ((T (*)(EventInfo*, bool))(Il2CppBase() + 0x0))(this, nonPublic);
	}

};

}
