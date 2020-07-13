#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Ray2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Ray2D"));
	}

	template <typename T = Il2CppVector2> T& m_Origin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector2> T& m_Direction() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector2> T get_origin() {
		return ((T (*)(Ray2D*))(Il2CppBase() + 0x4ACAE8C))(this);
	}
	template <typename T = void> T set_origin(Il2CppVector2 value) {
		return ((T (*)(Ray2D*, Il2CppVector2))(Il2CppBase() + 0x4ACAEA8))(this, value);
	}
	template <typename T = Il2CppVector2> T get_direction() {
		return ((T (*)(Ray2D*))(Il2CppBase() + 0x4ACAEC8))(this);
	}
	template <typename T = void> T set_direction(Il2CppVector2 value) {
		return ((T (*)(Ray2D*, Il2CppVector2))(Il2CppBase() + 0x4ACAF14))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Ray2D*))(Il2CppBase() + 0x4ACB0FC))(this);
	}

};

}
