#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class LinearSplineSolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "LinearSplineSolver"));
	}

	template <typename T = Il2CppDictionary<int32_t, float>*> T& segmentStartLocations() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, float>*> T& segmentDistances() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& currentSegment() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Build() {
		return ((T (*)(LinearSplineSolver*))(Il2CppBase() + 0x4856368))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(LinearSplineSolver*))(Il2CppBase() + 0x48566AC))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition(float time) {
		return ((T (*)(LinearSplineSolver*, float))(Il2CppBase() + 0x4856834))(this, time);
	}
	template <typename T = Il2CppVector3> T GetPositionOnPath(float time) {
		return ((T (*)(LinearSplineSolver*, float))(Il2CppBase() + 0x4856850))(this, time);
	}
	template <typename T = void> T Display(uintptr_t splineColor) {
		return ((T (*)(LinearSplineSolver*, uintptr_t))(Il2CppBase() + 0x4856D24))(this, splineColor);
	}

};

}
