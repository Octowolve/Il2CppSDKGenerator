#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimatorOverrideController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimatorOverrideController"));
	}


	template <typename T = void> static T Internal_CreateAnimatorOverrideController(uintptr_t self, uintptr_t controller) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4697738))(0, self, controller);
	}
	template <typename T = uintptr_t> T get_runtimeAnimatorController() {
		return ((T (*)(AnimatorOverrideController*))(Il2CppBase() + 0x4697800))(this);
	}
	template <typename T = void> T set_runtimeAnimatorController(uintptr_t value) {
		return ((T (*)(AnimatorOverrideController*, uintptr_t))(Il2CppBase() + 0x4697898))(this, value);
	}
	template <typename T = void> T set_Item(Il2CppString* name, uintptr_t value) {
		return ((T (*)(AnimatorOverrideController*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4697938))(this, name, value);
	}
	template <typename T = void> T Internal_SetClipByName(Il2CppString* name, uintptr_t clip) {
		return ((T (*)(AnimatorOverrideController*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x469793C))(this, name, clip);
	}
	template <typename T = void> T set_Item_1(uintptr_t clip, uintptr_t value) {
		return ((T (*)(AnimatorOverrideController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46979E4))(this, clip, value);
	}
	template <typename T = void> T Internal_SetClip(uintptr_t originalClip, uintptr_t overrideClip, bool notify) {
		return ((T (*)(AnimatorOverrideController*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4697A1C))(this, originalClip, overrideClip, notify);
	}
	template <typename T = void> T Internal_SetClip_1(uintptr_t originalClip, uintptr_t overrideClip) {
		return ((T (*)(AnimatorOverrideController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4697A00))(this, originalClip, overrideClip);
	}
	template <typename T = void> T SendNotification() {
		return ((T (*)(AnimatorOverrideController*))(Il2CppBase() + 0x4697ACC))(this);
	}
	template <typename T = uintptr_t> T Internal_GetOriginalClip(int32_t index) {
		return ((T (*)(AnimatorOverrideController*, int32_t))(Il2CppBase() + 0x4697B64))(this, index);
	}
	template <typename T = uintptr_t> T Internal_GetOverrideClip(uintptr_t originalClip) {
		return ((T (*)(AnimatorOverrideController*, uintptr_t))(Il2CppBase() + 0x4697C04))(this, originalClip);
	}
	template <typename T = int32_t> T get_overridesCount() {
		return ((T (*)(AnimatorOverrideController*))(Il2CppBase() + 0x4697CA4))(this);
	}
	template <typename T = void> T GetOverrides(Il2CppList<void*>* overrides) {
		return ((T (*)(AnimatorOverrideController*, Il2CppList<void*>*))(Il2CppBase() + 0x4697D3C))(this, overrides);
	}
	template <typename T = void> T ApplyOverrides(void* overrides) {
		return ((T (*)(AnimatorOverrideController*, void*))(Il2CppBase() + 0x4697F10))(this, overrides);
	}

};

}
