#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDRoad
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDRoad"));
	}

	template <typename T = float> static T& TilingScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& opt_MaxVV() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GSDRoad*))(Il2CppBase() + 0x3E30E10))(this);
	}
	template <typename T = void> T BreakRoadBasedOn(uintptr_t breakNode) {
		return ((T (*)(GSDRoad*, uintptr_t))(Il2CppBase() + 0x3E30E1C))(this, breakNode);
	}
	template <typename T = void> static T MergeRoads(uintptr_t road1, uintptr_t road2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E30E20))(0, road1, road2);
	}
	template <typename T = void> T OnlyAdjustUV() {
		return ((T (*)(GSDRoad*))(Il2CppBase() + 0x3E30E24))(this);
	}
	template <typename T = void> T AdjustUVAndPosition(Il2CppVector3 pos1, Il2CppVector3 pos2) {
		return ((T (*)(GSDRoad*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3E30E28))(this, pos1, pos2);
	}
	template <typename T = void> T AdjustUV() {
		return ((T (*)(GSDRoad*))(Il2CppBase() + 0x3E30E30))(this);
	}
	template <typename T = void> T AdjustMaxMin(uintptr_t MaxV, uintptr_t MinV, float roadLength, float Tiling) {
		return ((T (*)(GSDRoad*, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x3E30E34))(this, MaxV, MinV, roadLength, Tiling);
	}
	template <typename T = void> T AdjustPosition(Il2CppVector3 pos1, Il2CppVector3 pos2) {
		return ((T (*)(GSDRoad*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3E30E2C))(this, pos1, pos2);
	}
	template <typename T = void> T CleanInvalidVertices() {
		return ((T (*)(GSDRoad*))(Il2CppBase() + 0x3E30E38))(this);
	}
	template <typename T = void> T TryDoUvMirror() {
		return ((T (*)(GSDRoad*))(Il2CppBase() + 0x3E30E3C))(this);
	}

};

}
