#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Networking.PlayerConnection {

class PlayerConnection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Networking.PlayerConnection", "PlayerConnection"));
	}

	template <typename T = uintptr_t> static T& connectionNative() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_PlayerEditorConnectionEvents() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_connectedPlayers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ABA71C))(0);
	}
	template <typename T = uintptr_t> static T CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ABA800))(0);
	}
	template <typename T = uintptr_t> T GetConnectionNativeApi() {
		return ((T (*)(PlayerConnection*))(Il2CppBase() + 0x4ABA97C))(this);
	}
	template <typename T = void> T Send(uintptr_t messageId, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PlayerConnection*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4ABAA3C))(this, messageId, data);
	}
	template <typename T = void> static T MessageCallbackInternal(uintptr_t data, uint64_t size, uint64_t guid, Il2CppString* messageId) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint64_t, Il2CppString*))(Il2CppBase() + 0x4ABAC58))(0, data, size, guid, messageId);
	}
	template <typename T = void> static T ConnectedCallbackInternal(int32_t playerId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4ABB330))(0, playerId);
	}
	template <typename T = void> static T DisconnectedCallback(int32_t playerId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4ABB418))(0, playerId);
	}

};

}
