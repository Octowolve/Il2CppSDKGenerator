#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Networking.PlayerConnection {

class PlayerEditorConnectionEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& messageTypeSubscribers() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& connectionEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& disconnectionEvent() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T InvokeMessageIdSubscribers(uintptr_t messageId, Il2CppArray<uintptr_t>* data, int32_t playerId) {
		return ((T (*)(PlayerEditorConnectionEvents*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4ABADF8))(this, messageId, data, playerId);
	}

};

}
