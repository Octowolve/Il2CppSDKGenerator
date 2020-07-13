#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Options {

class PathOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Options", "PathOptions"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& orientType() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& lockPositionAxis() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& lockRotationAxis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isClosedPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& lookAtPosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& lookAtTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& lookAhead() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& hasCustomForwardDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppQuaternion> T& forward() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& useLocalPosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isRigidbody() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppQuaternion> T& startupRot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& startupZRot() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PathOptions*))(Il2CppBase() + 0x44B5CCC))(this);
	}

};

}
