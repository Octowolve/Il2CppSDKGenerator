#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class PlayerConnectionInternal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "PlayerConnectionInternal"));
	}


	template <typename T = void> T UnityEngine_IPlayerEditorConnectionNative_SendMessage(uintptr_t messageId, Il2CppArray<uintptr_t>* data, int32_t playerId) {
		return ((T (*)(PlayerConnectionInternal*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4AC67FC))(this, messageId, data, playerId);
	}
	template <typename T = void> static T SendMessage(Il2CppString* messageId, Il2CppArray<uintptr_t>* data, int32_t playerId) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4AC6998))(0, messageId, data, playerId);
	}

};

}
