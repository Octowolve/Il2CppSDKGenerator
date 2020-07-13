#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Core.PathCore {

class LinearDecoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Core.PathCore", "LinearDecoder"));
	}


	template <typename T = void> T FinalizePath(uintptr_t p, Il2CppArray<uintptr_t>* wps, bool isClosedPath) {
		return ((T (*)(LinearDecoder*, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x44B2368))(this, p, wps, isClosedPath);
	}
	template <typename T = Il2CppVector3> T GetPoint(float perc, Il2CppArray<uintptr_t>* wps, uintptr_t p, Il2CppArray<uintptr_t>* controlPoints) {
		return ((T (*)(LinearDecoder*, float, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44B2640))(this, perc, wps, p, controlPoints);
	}
	template <typename T = void> T SetTimeToLengthTables(uintptr_t p, int32_t subdivisions) {
		return ((T (*)(LinearDecoder*, uintptr_t, int32_t))(Il2CppBase() + 0x44B23A8))(this, p, subdivisions);
	}
	template <typename T = void> T SetWaypointsLengths(uintptr_t p, int32_t subdivisions) {
		return ((T (*)(LinearDecoder*, uintptr_t, int32_t))(Il2CppBase() + 0x44B283C))(this, p, subdivisions);
	}

};

}
