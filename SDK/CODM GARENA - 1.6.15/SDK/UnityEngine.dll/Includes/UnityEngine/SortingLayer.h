#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SortingLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SortingLayer"));
	}

	template <typename T = int32_t> T& m_Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> static T GetLayerValueFromID(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E85380))(0, id);
	}

};

}
