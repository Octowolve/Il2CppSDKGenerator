#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class MaskUtilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "MaskUtilities"));
	}


	template <typename T = void> static T Notify2DMaskStateChanged(uintptr_t mask) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D38850))(0, mask);
	}
	template <typename T = void> static T NotifyStencilStateChanged(uintptr_t mask) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D365D4))(0, mask);
	}
	template <typename T = uintptr_t> static T FindRootSortOverrideCanvas(uintptr_t start) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D36F48))(0, start);
	}
	template <typename T = int32_t> static T GetStencilDepth(uintptr_t transform, uintptr_t stopAfter) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D37190))(0, transform, stopAfter);
	}
	template <typename T = bool> static T IsDescendantOrSelf(uintptr_t father, uintptr_t child) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D38BDC))(0, father, child);
	}
	template <typename T = uintptr_t> static T GetRectMaskForClippable(uintptr_t clippable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D38254))(0, clippable);
	}
	template <typename T = void> static T GetRectMasksForClip(uintptr_t clipper, Il2CppList<uintptr_t>* masks) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D38E24))(0, clipper, masks);
	}

};

}
