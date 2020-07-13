#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ContactFilter2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ContactFilter2D"));
	}

	template <typename T = bool> T& useTriggers() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& useLayerMask() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = bool> T& useDepth() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = bool> T& useOutsideDepth() {
		return *(T*)((uintptr_t)this + 0x3);
	}
	template <typename T = bool> T& useNormalAngle() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& useOutsideNormalAngle() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	template <typename T = uintptr_t> T& layerMask() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& minDepth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& maxDepth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& minNormalAngle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& maxNormalAngle() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CheckConsistency() {
		return ((T (*)(ContactFilter2D*))(Il2CppBase() + 0x4DA2FA4))(this);
	}
	template <typename T = void> T SetLayerMask(uintptr_t layerMask) {
		return ((T (*)(ContactFilter2D*, uintptr_t))(Il2CppBase() + 0x4DA2FAC))(this, layerMask);
	}
	template <typename T = void> T SetDepth(float minDepth, float maxDepth) {
		return ((T (*)(ContactFilter2D*, float, float))(Il2CppBase() + 0x4DA2FBC))(this, minDepth, maxDepth);
	}
	template <typename T = uintptr_t> static T CreateLegacyFilter(int32_t layerMask, float minDepth, float maxDepth) {
		return ((T (*)(void *, int32_t, float, float))(Il2CppBase() + 0x4DA2FD4))(0, layerMask, minDepth, maxDepth);
	}

};

}
