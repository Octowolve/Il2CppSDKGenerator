#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class RouteChangedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "RouteChangedEventHandler"));
	}


	template <typename T = void> T Invoke(uint64_t serverId) {
		return ((T (*)(RouteChangedEventHandler*, uint64_t))(Il2CppBase() + 0x44392BC))(this, serverId);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t serverId, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RouteChangedEventHandler*, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x443935C))(this, serverId, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RouteChangedEventHandler*, uintptr_t))(Il2CppBase() + 0x443941C))(this, result);
	}

};

}
