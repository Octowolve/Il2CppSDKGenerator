#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.AI {

class NavMeshHit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.AI", "NavMeshHit"));
	}

	template <typename T = Il2CppVector3> T& m_Position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Distance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_Mask() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_Hit() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppVector3> T get_position() {
		return ((T (*)(NavMeshHit*))(Il2CppBase() + 0x46832A4))(this);
	}
	template <typename T = bool> T get_hit() {
		return ((T (*)(NavMeshHit*))(Il2CppBase() + 0x46832C8))(this);
	}

};

}
