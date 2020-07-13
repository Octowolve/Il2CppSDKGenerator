#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CUAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CUAnimation"));
	}


	template <typename T = bool> T get_Paused() {
		return ((T (*)(CUAnimation*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Paused(bool value) {
		return ((T (*)(CUAnimation*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_isPlay() {
		return ((T (*)(CUAnimation*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_Speed() {
		return ((T (*)(CUAnimation*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Speed(float value) {
		return ((T (*)(CUAnimation*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_animator() {
		return ((T (*)(CUAnimation*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Avatar() {
		return ((T (*)(CUAnimation*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Avatar(uintptr_t value) {
		return ((T (*)(CUAnimation*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T getAvatar(int32_t inLayer) {
		return ((T (*)(CUAnimation*, int32_t))(Il2CppBase() + 0x0))(this, inLayer);
	}
	template <typename T = void> T SetLayerMask(int32_t inLayer, uintptr_t inMask, bool inAdditive, float inWeight) {
		return ((T (*)(CUAnimation*, int32_t, uintptr_t, bool, float))(Il2CppBase() + 0x0))(this, inLayer, inMask, inAdditive, inWeight);
	}
	template <typename T = bool> T play(uintptr_t inClip, float fadeLength, uintptr_t inPlayMode) {
		return ((T (*)(CUAnimation*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x0))(this, inClip, fadeLength, inPlayMode);
	}
	template <typename T = uintptr_t> T play_1(uintptr_t inBing, uintptr_t inPlayMode, int32_t inLayer, uintptr_t inAvatar) {
		return ((T (*)(CUAnimation*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, inBing, inPlayMode, inLayer, inAvatar);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T playTree(Il2CppArray<uintptr_t>* inBing, uintptr_t inPlayMode, int32_t inLayer, uintptr_t inAvatar) {
		return ((T (*)(CUAnimation*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, inBing, inPlayMode, inLayer, inAvatar);
	}
	template <typename T = void> T StopLayer(int32_t inLayer, float fadeLength) {
		return ((T (*)(CUAnimation*, int32_t, float))(Il2CppBase() + 0x0))(this, inLayer, fadeLength);
	}
	template <typename T = void> T Stop(float fadeLength) {
		return ((T (*)(CUAnimation*, float))(Il2CppBase() + 0x0))(this, fadeLength);
	}
	template <typename T = void> T Stop_1(Il2CppString* name) {
		return ((T (*)(CUAnimation*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = bool> T get_enable() {
		return ((T (*)(CUAnimation*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CUAnimation*))(Il2CppBase() + 0x0))(this);
	}

};

}
