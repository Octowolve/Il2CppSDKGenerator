#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Options {

class QuaternionOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Options", "QuaternionOptions"));
	}

	template <typename T = uintptr_t> T& rotateMode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& axisConstraint() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& up() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(QuaternionOptions*))(Il2CppBase() + 0x44B5D14))(this);
	}

};

}
