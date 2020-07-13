#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Core.PathCore {

class ABSPathDecoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Core.PathCore", "ABSPathDecoder"));
	}


	template <typename T = void> T FinalizePath(uintptr_t p, Il2CppArray<uintptr_t>* wps, bool isClosedPath) {
		return ((T (*)(ABSPathDecoder*, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, p, wps, isClosedPath);
	}
	template <typename T = Il2CppVector3> T GetPoint(float perc, Il2CppArray<uintptr_t>* wps, uintptr_t p, Il2CppArray<uintptr_t>* controlPoints) {
		return ((T (*)(ABSPathDecoder*, float, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, perc, wps, p, controlPoints);
	}

};

}
