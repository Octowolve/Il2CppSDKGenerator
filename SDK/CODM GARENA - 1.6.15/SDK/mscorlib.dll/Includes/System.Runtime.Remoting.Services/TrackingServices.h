#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Services {

class TrackingServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Services", "TrackingServices"));
	}

	template <typename T = uintptr_t> static T& _handlers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T NotifyMarshaledObject(uintptr_t obj, uintptr_t or) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B430A4))(0, obj, or);
	}
	template <typename T = void> static T NotifyUnmarshaledObject(uintptr_t obj, uintptr_t or) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B41EC4))(0, obj, or);
	}
	template <typename T = void> static T NotifyDisconnectedObject(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B44C40))(0, obj);
	}

};

}
