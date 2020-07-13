#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class NetworkDisconnection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "NetworkDisconnection"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& LostConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Disconnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
