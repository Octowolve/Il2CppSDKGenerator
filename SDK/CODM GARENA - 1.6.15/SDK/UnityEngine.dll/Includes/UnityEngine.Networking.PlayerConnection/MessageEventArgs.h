#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Networking.PlayerConnection {

class MessageEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Networking.PlayerConnection", "MessageEventArgs"));
	}

	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
