#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDRoadIntersection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDRoadIntersection"));
	}

	template <typename T = uintptr_t> T& iStopType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bLightsEnabled() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bFlipped() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& bLeftTurnYieldOnGreen() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = uintptr_t> T& rType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& lType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LightsRR() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LightsRL() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LightsLL() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LightsLR() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& opt_FixedTime_RegularLightLength() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& opt_FixedTime_LeftTurnLightLength() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& opt_FixedTime_AllRedLightLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& opt_FixedTime_YellowLightLength() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& opt_AutoUpdateIntersections() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FixedTimeSequenceList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& FixedTimeIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GSDRoadIntersection*))(Il2CppBase() + 0x3E30E90))(this);
	}
	template <typename T = void> T CreateFixedSequence() {
		return ((T (*)(GSDRoadIntersection*))(Il2CppBase() + 0x3E3101C))(this);
	}
	template <typename T = uintptr_t> T TrafficLightFixedUpdate(float tTime) {
		return ((T (*)(GSDRoadIntersection*, float))(Il2CppBase() + 0x3E319AC))(this, tTime);
	}
	template <typename T = void> T FixedTime_Increment() {
		return ((T (*)(GSDRoadIntersection*))(Il2CppBase() + 0x3E31658))(this);
	}

};

}
