#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ClothSphereColliderPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ClothSphereColliderPair"));
	}

	template <typename T = uintptr_t> T& m_First() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_Second() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = uintptr_t> T get_first() {
		return ((T (*)(ClothSphereColliderPair*))(Il2CppBase() + 0x46AA34C))(this);
	}
	template <typename T = uintptr_t> T get_second() {
		return ((T (*)(ClothSphereColliderPair*))(Il2CppBase() + 0x46AA35C))(this);
	}

};

}
