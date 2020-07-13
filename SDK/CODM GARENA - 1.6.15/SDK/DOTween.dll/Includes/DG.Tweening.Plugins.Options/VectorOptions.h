#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Options {

class VectorOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Options", "VectorOptions"));
	}

	template <typename T = uintptr_t> T& axisConstraint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& snapping() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(VectorOptions*))(Il2CppBase() + 0x44B61DC))(this);
	}

};

}
