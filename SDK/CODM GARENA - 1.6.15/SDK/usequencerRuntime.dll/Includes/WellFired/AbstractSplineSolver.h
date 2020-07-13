#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class AbstractSplineSolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "AbstractSplineSolver"));
	}

	template <typename T = int32_t> static T& TOTAL_SUBDIVISIONS_PER_NODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& nodes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<float, float>*> T& segmentTimeForDistance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& PathLength() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_Nodes() {
		return ((T (*)(AbstractSplineSolver*))(Il2CppBase() + 0x48531A0))(this);
	}
	template <typename T = void> T set_Nodes(Il2CppList<uintptr_t>* value) {
		return ((T (*)(AbstractSplineSolver*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x48531A8))(this, value);
	}
	template <typename T = float> T get_PathLength() {
		return ((T (*)(AbstractSplineSolver*))(Il2CppBase() + 0x48531B0))(this);
	}
	template <typename T = void> T set_PathLength(float value) {
		return ((T (*)(AbstractSplineSolver*, float))(Il2CppBase() + 0x48531B8))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AbstractSplineSolver*))(Il2CppBase() + 0x48531C0))(this);
	}
	template <typename T = void> T Build() {
		return ((T (*)(AbstractSplineSolver*))(Il2CppBase() + 0x4853264))(this);
	}
	template <typename T = Il2CppVector3> T GetPositionOnPath(float time) {
		return ((T (*)(AbstractSplineSolver*, float))(Il2CppBase() + 0x4853470))(this, time);
	}
	template <typename T = void> T Reverse() {
		return ((T (*)(AbstractSplineSolver*))(Il2CppBase() + 0x4853830))(this);
	}
	template <typename T = void> T OnInternalDrawGizmos(uintptr_t splineColor, float displayResolution) {
		return ((T (*)(AbstractSplineSolver*, uintptr_t, float))(Il2CppBase() + 0x48538C8))(this, splineColor, displayResolution);
	}
	template <typename T = void> T Display(uintptr_t splineColor) {
		return ((T (*)(AbstractSplineSolver*, uintptr_t))(Il2CppBase() + 0x0))(this, splineColor);
	}
	template <typename T = void> T Close() {
		return ((T (*)(AbstractSplineSolver*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition(float time) {
		return ((T (*)(AbstractSplineSolver*, float))(Il2CppBase() + 0x0))(this, time);
	}

};

}
