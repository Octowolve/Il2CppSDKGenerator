#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIStateObjects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIStateObjects"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& s_StateCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetStateObject(uintptr_t t, int32_t controlID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x479A2CC))(0, t, controlID);
	}

};

}
