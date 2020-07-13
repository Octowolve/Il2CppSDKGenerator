#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ProjectLocationToMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ProjectLocationToMap"));
	}

	template <typename T = uintptr_t> T& GPSLocation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mapProjection() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& minLongitude() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& maxLongitude() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& minLatitude() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& maxLatitude() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& minX() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& minY() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& width() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& height() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& projectedX() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& projectedY() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& normalized() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& x() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& y() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ProjectLocationToMap*))(Il2CppBase() + 0x4D7F364))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ProjectLocationToMap*))(Il2CppBase() + 0x4D7F4F0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ProjectLocationToMap*))(Il2CppBase() + 0x4D7F830))(this);
	}
	template <typename T = void> T DoProjectGPSLocation() {
		return ((T (*)(ProjectLocationToMap*))(Il2CppBase() + 0x4D7F548))(this);
	}
	template <typename T = void> T DoEquidistantCylindrical() {
		return ((T (*)(ProjectLocationToMap*))(Il2CppBase() + 0x4D7F834))(this);
	}
	template <typename T = void> T DoMercatorProjection() {
		return ((T (*)(ProjectLocationToMap*))(Il2CppBase() + 0x4D7F920))(this);
	}
	template <typename T = float> static T LatitudeToMercator(float latitudeInDegrees) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4D7FA28))(0, latitudeInDegrees);
	}

};

}
