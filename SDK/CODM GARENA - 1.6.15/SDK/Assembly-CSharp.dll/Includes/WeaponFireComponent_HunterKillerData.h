#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentHunterKillerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponent_HunterKillerData"));
	}

	template <typename T = float> T& BoostSpeed() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& BoostAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& TurnAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& CruiseHeight() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& ForwardFov() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = float> T& ForwardDist() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = float> T& LookDownFov() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& DetectDist() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& InitStartTime() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = float> T& MaxTrackAngle() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = Il2CppVector3> T& BoundBox() {
		return *(T*)((uintptr_t)this + 0x24C);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentHunterKillerData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48A5200))(this, bytes, position, targetType, mask, index, interrupt);
	}

};

}
