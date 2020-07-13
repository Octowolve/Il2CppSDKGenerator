#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.AI {

class NavMeshPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.AI", "NavMeshPath"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_corners() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T DestroyNavMeshPath() {
		return ((T (*)(NavMeshPath*))(Il2CppBase() + 0x468333C))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(NavMeshPath*))(Il2CppBase() + 0x46833D4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CalculateCornersInternal() {
		return ((T (*)(NavMeshPath*))(Il2CppBase() + 0x46834B4))(this);
	}
	template <typename T = void> T CalculateCorners() {
		return ((T (*)(NavMeshPath*))(Il2CppBase() + 0x468354C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_corners() {
		return ((T (*)(NavMeshPath*))(Il2CppBase() + 0x4683574))(this);
	}

};

}
