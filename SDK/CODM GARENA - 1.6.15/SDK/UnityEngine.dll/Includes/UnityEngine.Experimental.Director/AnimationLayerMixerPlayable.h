#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class AnimationLayerMixerPlayable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "AnimationLayerMixerPlayable"));
	}


	template <typename T = bool> T IsLayerAdditive(uint32_t layerIndex) {
		return ((T (*)(AnimationLayerMixerPlayable*, uint32_t))(Il2CppBase() + 0x4DAD42C))(this, layerIndex);
	}
	template <typename T = bool> static T IsLayerAdditiveInternal(uintptr_t handle, uint32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x4DAD438))(0, handle, layerIndex);
	}
	template <typename T = bool> static T INTERNAL_CALL_IsLayerAdditiveInternal(uintptr_t handle, uint32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x4DAD43C))(0, handle, layerIndex);
	}
	template <typename T = bool> T SetLayerToAdditive(uint32_t layerIndex, bool value) {
		return ((T (*)(AnimationLayerMixerPlayable*, uint32_t, bool))(Il2CppBase() + 0x4DAD4DC))(this, layerIndex, value);
	}
	template <typename T = bool> static T SetLayerAdditiveInternal(uintptr_t handle, uint32_t layerIndex, bool value) {
		return ((T (*)(void *, uintptr_t, uint32_t, bool))(Il2CppBase() + 0x4DAD500))(0, handle, layerIndex, value);
	}
	template <typename T = bool> static T INTERNAL_CALL_SetLayerAdditiveInternal(uintptr_t handle, uint32_t layerIndex, bool value) {
		return ((T (*)(void *, uintptr_t, uint32_t, bool))(Il2CppBase() + 0x4DAD518))(0, handle, layerIndex, value);
	}
	template <typename T = void> T SetMixerLayerMaskFromAvatarMask(uint32_t layerIndex, uintptr_t mask) {
		return ((T (*)(AnimationLayerMixerPlayable*, uint32_t, uintptr_t))(Il2CppBase() + 0x4DAD5C0))(this, layerIndex, mask);
	}
	template <typename T = void> static T SetLayerMaskFromAvatarMaskInternal(uintptr_t handle, uint32_t layerIndex, uintptr_t mask) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4DAD5E4))(0, handle, layerIndex, mask);
	}
	template <typename T = void> static T INTERNAL_CALL_SetLayerMaskFromAvatarMaskInternal(uintptr_t handle, uint32_t layerIndex, uintptr_t mask) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4DAD5FC))(0, handle, layerIndex, mask);
	}

};

}
