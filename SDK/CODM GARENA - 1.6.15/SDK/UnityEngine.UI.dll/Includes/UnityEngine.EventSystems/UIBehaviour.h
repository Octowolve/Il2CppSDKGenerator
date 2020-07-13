#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class UIBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "UIBehaviour"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D09124))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3CFAD18))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D09128))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3CFAF18))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D0912C))(this);
	}
	template <typename T = bool> T IsActive() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D09130))(this);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D09138))(this);
	}
	template <typename T = void> T OnBeforeTransformParentChanged() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D0913C))(this);
	}
	template <typename T = void> T OnTransformParentChanged() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D09140))(this);
	}
	template <typename T = void> T OnDidApplyAnimationProperties() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D09144))(this);
	}
	template <typename T = void> T OnCanvasGroupChanged() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D09148))(this);
	}
	template <typename T = void> T OnCanvasHierarchyChanged() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D0914C))(this);
	}
	template <typename T = bool> T IsDestroyed() {
		return ((T (*)(UIBehaviour*))(Il2CppBase() + 0x3D09150))(this);
	}

};

}
