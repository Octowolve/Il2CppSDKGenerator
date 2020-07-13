#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CODCrossHairTempest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "COD_CrossHair_Tempest"));
	}

	template <typename T = float> T& m_TotalChargeTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_ChargeStartTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_ChargeStarted() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_ProgressWidget() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_AccumulatingCrosshairSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_AccumulatedCrosshairSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OpenAimOnlyElements() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CloseAimOnlyElements() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTotalChargeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReStartCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCrosshairColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CODCrossHairTempest*))(Il2CppBase() + 0x3A2934C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CODCrossHairTempest*))(Il2CppBase() + 0x3A29354))(this);
	}
	template <typename T = void> T SetTotalChargeTime(float chargeTime) {
		return ((T (*)(CODCrossHairTempest*, float))(Il2CppBase() + 0x3A29560))(this, chargeTime);
	}
	template <typename T = void> T ReStartCharge() {
		return ((T (*)(CODCrossHairTempest*))(Il2CppBase() + 0x3A29618))(this);
	}
	template <typename T = void> T StopCharge() {
		return ((T (*)(CODCrossHairTempest*))(Il2CppBase() + 0x3A296CC))(this);
	}
	template <typename T = void> T OpenAim() {
		return ((T (*)(CODCrossHairTempest*))(Il2CppBase() + 0x3A29770))(this);
	}
	template <typename T = void> T CloseAim() {
		return ((T (*)(CODCrossHairTempest*))(Il2CppBase() + 0x3A29404))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CODCrossHairTempest*, float))(Il2CppBase() + 0x3A298CC))(this, dt);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CODCrossHairTempest*))(Il2CppBase() + 0x3A29F80))(this);
	}
	template <typename T = void> T UpdateCrosshairColor(float progress) {
		return ((T (*)(CODCrossHairTempest*, float))(Il2CppBase() + 0x3A29ACC))(this, progress);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(CODCrossHairTempest*))(Il2CppBase() + 0x3A2A038))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CODCrossHairTempest*, float))(Il2CppBase() + 0x3A2A040))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(CODCrossHairTempest*))(Il2CppBase() + 0x3A2A048))(this);
	}

};

}
