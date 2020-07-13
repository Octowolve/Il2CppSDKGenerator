#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class IPlayerEditorConnectionNative
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "IPlayerEditorConnectionNative"));
	}


	template <typename T = void> T SendMessage(uintptr_t messageId, Il2CppArray<uintptr_t>* data, int32_t playerId) {
		return ((T (*)(IPlayerEditorConnectionNative*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, messageId, data, playerId);
	}

};

}
