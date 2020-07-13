#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class BaseMeshEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "BaseMeshEffect"));
	}

	template <typename T = uintptr_t> T& m_Graphic() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_graphic() {
		return ((T (*)(BaseMeshEffect*))(Il2CppBase() + 0x3D09EE8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BaseMeshEffect*))(Il2CppBase() + 0x3D09FD0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BaseMeshEffect*))(Il2CppBase() + 0x3D0A0BC))(this);
	}
	template <typename T = void> T OnDidApplyAnimationProperties() {
		return ((T (*)(BaseMeshEffect*))(Il2CppBase() + 0x3D0A1A8))(this);
	}
	template <typename T = void> T ModifyMesh(uintptr_t mesh) {
		return ((T (*)(BaseMeshEffect*, uintptr_t))(Il2CppBase() + 0x3D0A294))(this, mesh);
	}
	template <typename T = void> T ModifyMesh_1(uintptr_t vh) {
		return ((T (*)(BaseMeshEffect*, uintptr_t))(Il2CppBase() + 0x0))(this, vh);
	}

};

}
