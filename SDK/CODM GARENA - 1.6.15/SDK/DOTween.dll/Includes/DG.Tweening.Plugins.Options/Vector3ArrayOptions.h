#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Options {

class Vector3ArrayOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Options", "Vector3ArrayOptions"));
	}

	template <typename T = uintptr_t> T& axisConstraint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& snapping() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& durations() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3ArrayOptions*))(Il2CppBase() + 0x44B6184))(this);
	}

};

}
