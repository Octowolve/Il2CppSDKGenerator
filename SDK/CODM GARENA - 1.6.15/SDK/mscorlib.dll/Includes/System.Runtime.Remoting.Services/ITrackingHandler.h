#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Services {

class ITrackingHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Services", "ITrackingHandler"));
	}


	template <typename T = void> T DisconnectedObject(uintptr_t obj) {
		return ((T (*)(ITrackingHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}
	template <typename T = void> T MarshaledObject(uintptr_t obj, uintptr_t or) {
		return ((T (*)(ITrackingHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, obj, or);
	}
	template <typename T = void> T UnmarshaledObject(uintptr_t obj, uintptr_t or) {
		return ((T (*)(ITrackingHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, obj, or);
	}

};

}
