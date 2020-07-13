#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Core.PathCore {

class CatmullRomDecoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Core.PathCore", "CatmullRomDecoder"));
	}


	template <typename T = void> T FinalizePath(uintptr_t p, Il2CppArray<uintptr_t>* wps, bool isClosedPath) {
		return ((T (*)(CatmullRomDecoder*, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x44B11C0))(this, p, wps, isClosedPath);
	}
	template <typename T = Il2CppVector3> T GetPoint(float perc, Il2CppArray<uintptr_t>* wps, uintptr_t p, Il2CppArray<uintptr_t>* controlPoints) {
		return ((T (*)(CatmullRomDecoder*, float, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44B1D08))(this, perc, wps, p, controlPoints);
	}
	template <typename T = void> T SetTimeToLengthTables(uintptr_t p, int32_t subdivisions) {
		return ((T (*)(CatmullRomDecoder*, uintptr_t, int32_t))(Il2CppBase() + 0x44B1564))(this, p, subdivisions);
	}
	template <typename T = void> T SetWaypointsLengths(uintptr_t p, int32_t subdivisions) {
		return ((T (*)(CatmullRomDecoder*, uintptr_t, int32_t))(Il2CppBase() + 0x44B17DC))(this, p, subdivisions);
	}

};

}
