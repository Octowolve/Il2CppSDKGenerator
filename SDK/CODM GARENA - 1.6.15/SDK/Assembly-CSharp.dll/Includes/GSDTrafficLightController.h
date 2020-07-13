#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDTrafficLightController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDTrafficLightController"));
	}

	template <typename T = uintptr_t> T& LightLeftObj() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LightRightObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LightsObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& MR_Left() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& MR_Right() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MR_MainsStorage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& MR_Main() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LightLeft_R() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LightLeft_Y() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LightLeft_G() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& LightRight_R() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LightRight_Y() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& LightRight_G() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Lights_R() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Lights_Y() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Lights_G() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& iLightStatus() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& iLightSubStatus() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& bLeft() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& bRight() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& bMain() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = bool> T& bUseSharedMaterial() {
		return *(T*)((uintptr_t)this + 0x53);
	}
	template <typename T = bool> T& bLeftTurnYieldOnGreen() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& bLightsEnabled() {
		return *(T*)((uintptr_t)this + 0x55);
	}

	template <typename T = void> T UpdateLights(uintptr_t tLightStatus, uintptr_t tLightSubStatus, bool _bLightsEnabled) {
		return ((T (*)(GSDTrafficLightController*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3E31A64))(this, tLightStatus, tLightSubStatus, _bLightsEnabled);
	}
	template <typename T = void> T TriggerRegular() {
		return ((T (*)(GSDTrafficLightController*))(Il2CppBase() + 0x3E32644))(this);
	}
	template <typename T = void> T TriggerLeftTurn() {
		return ((T (*)(GSDTrafficLightController*))(Il2CppBase() + 0x3E32720))(this);
	}
	template <typename T = void> T TriggerMasterLeft() {
		return ((T (*)(GSDTrafficLightController*))(Il2CppBase() + 0x3E327F8))(this);
	}
	template <typename T = void> T TriggerRightTurn() {
		return ((T (*)(GSDTrafficLightController*))(Il2CppBase() + 0x3E32944))(this);
	}
	template <typename T = void> T TriggerRed() {
		return ((T (*)(GSDTrafficLightController*))(Il2CppBase() + 0x3E328B0))(this);
	}
	template <typename T = void> T MRChange(uintptr_t MR, uintptr_t iLSSE) {
		return ((T (*)(GSDTrafficLightController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E329D8))(this, MR, iLSSE);
	}
	template <typename T = void> T MRChangeLeftYield(uintptr_t MR, uintptr_t iLYSSE) {
		return ((T (*)(GSDTrafficLightController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E330E8))(this, MR, iLYSSE);
	}
	template <typename T = void> T LightChange(int32_t tIndex, uintptr_t iLSSE) {
		return ((T (*)(GSDTrafficLightController*, int32_t, uintptr_t))(Il2CppBase() + 0x3E32C10))(this, tIndex, iLSSE);
	}
	template <typename T = void> T LightChangeHelper(uintptr_t tRed, uintptr_t tYellow, uintptr_t tGreen, uintptr_t iLSSE) {
		return ((T (*)(GSDTrafficLightController*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E33498))(this, tRed, tYellow, tGreen, iLSSE);
	}
	template <typename T = void> T Setup(bool bLeftYield) {
		return ((T (*)(GSDTrafficLightController*, bool))(Il2CppBase() + 0x3E30F18))(this, bLeftYield);
	}
	template <typename T = void> T SetupMainObjects() {
		return ((T (*)(GSDTrafficLightController*))(Il2CppBase() + 0x3E33670))(this);
	}
	template <typename T = void> T SetupObject(uintptr_t MR) {
		return ((T (*)(GSDTrafficLightController*, uintptr_t))(Il2CppBase() + 0x3E3358C))(this, MR);
	}

};

}
