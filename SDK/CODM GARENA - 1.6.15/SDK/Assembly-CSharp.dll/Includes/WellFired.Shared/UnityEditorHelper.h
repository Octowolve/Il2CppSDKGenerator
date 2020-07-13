#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class UnityEditorHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired.Shared", "UnityEditorHelper"));
	}

	template <typename T = uintptr_t> T& listeners() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T AddUpdateListener(uintptr_t listener) {
		return ((T (*)(UnityEditorHelper*, uintptr_t))(Il2CppBase() + 0x4A36078))(this, listener);
	}
	template <typename T = void> T RemoveUpdateListener(uintptr_t listener) {
		return ((T (*)(UnityEditorHelper*, uintptr_t))(Il2CppBase() + 0x4A3607C))(this, listener);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UnityEditorHelper*))(Il2CppBase() + 0x4A36080))(this);
	}
	template <typename T = bool> T IsPrefab(uintptr_t testObject) {
		return ((T (*)(UnityEditorHelper*, uintptr_t))(Il2CppBase() + 0x4A360AC))(this, testObject);
	}
	template <typename T = void> static T listenersm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A360B4))(0);
	}

};

}
