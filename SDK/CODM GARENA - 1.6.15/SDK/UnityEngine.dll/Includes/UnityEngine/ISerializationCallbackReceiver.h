#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ISerializationCallbackReceiver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ISerializationCallbackReceiver"));
	}


	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(ISerializationCallbackReceiver*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(ISerializationCallbackReceiver*))(Il2CppBase() + 0x0))(this);
	}

};

}
