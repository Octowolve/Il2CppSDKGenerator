#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlayableController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlayableController"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ToPlayable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNearClipPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_findChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_findChildEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_findChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_findParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T ToPlayable(uintptr_t inAnimator) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D99244))(0, inAnimator);
	}
	template <typename T = void> static T SetNearClipPlane(uintptr_t cam, float inNearClipPlane) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1D99380))(0, cam, inNearClipPlane);
	}
	template <typename T = uintptr_t> static T findChild(uintptr_t inNode, Il2CppString* name, bool fullName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1D99448))(0, inNode, name, fullName);
	}
	template <typename T = uintptr_t> static T findChildEx(uintptr_t inNode, Il2CppString* name, bool fullName, bool allhide) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x33533F8))(0, inNode, name, fullName, allhide);
	}
	template <typename T = uintptr_t> static T findChild_1(uintptr_t inNode, Il2CppString* name, bool lowercase, bool fullName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x1D99724))(0, inNode, name, lowercase, fullName);
	}
	template <typename T = uintptr_t> static T findParent(uintptr_t inNode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3353588))(0, inNode);
	}

};

}
