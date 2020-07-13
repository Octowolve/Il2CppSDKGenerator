#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class RaycastResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "RaycastResult"));
	}

	template <typename T = uintptr_t> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& module() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& depth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& sortingLayer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& sortingOrder() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& worldPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& worldNormal() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& screenPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(RaycastResult*))(Il2CppBase() + 0x3D058E8))(this);
	}
	template <typename T = void> T set_gameObject(uintptr_t value) {
		return ((T (*)(RaycastResult*, uintptr_t))(Il2CppBase() + 0x3D058F0))(this, value);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(RaycastResult*))(Il2CppBase() + 0x3D05A04))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RaycastResult*))(Il2CppBase() + 0x3D05A0C))(this);
	}

};

}
