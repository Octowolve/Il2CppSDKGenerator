#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.AI {

class NavMeshDataInstance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.AI", "NavMeshDataInstance"));
	}

	template <typename T = int32_t> T& m_Handle() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T get_valid() {
		return ((T (*)(NavMeshDataInstance*))(Il2CppBase() + 0x46830F8))(this);
	}
	template <typename T = int32_t> T get_id() {
		return ((T (*)(NavMeshDataInstance*))(Il2CppBase() + 0x4683114))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(NavMeshDataInstance*, int32_t))(Il2CppBase() + 0x468311C))(this, value);
	}
	template <typename T = void> T Remove() {
		return ((T (*)(NavMeshDataInstance*))(Il2CppBase() + 0x468312C))(this);
	}
	template <typename T = void> T set_owner(uintptr_t value) {
		return ((T (*)(NavMeshDataInstance*, uintptr_t))(Il2CppBase() + 0x4683288))(this, value);
	}

};

}
