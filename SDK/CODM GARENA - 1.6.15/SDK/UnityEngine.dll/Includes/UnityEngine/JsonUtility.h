#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class JsonUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "JsonUtility"));
	}


	template <typename T = Il2CppString*> static T ToJson(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A4894))(0, obj);
	}
	template <typename T = Il2CppString*> static T ToJson_1(uintptr_t obj, bool prettyPrint) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x47A489C))(0, obj, prettyPrint);
	}
	template <typename T = uintptr_t> static T FromJson(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3394CFC))(0, json);
	}
	template <typename T = uintptr_t> static T FromJson_1(Il2CppString* json, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x47A493C))(0, json, type);
	}

};

}
