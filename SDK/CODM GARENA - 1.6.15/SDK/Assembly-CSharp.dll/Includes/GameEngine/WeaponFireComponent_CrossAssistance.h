#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentCrossAssistance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_CrossAssistance"));
	}

	template <typename T = uintptr_t> T& m_CrossAssistanceController() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStartAssistanceSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartTracePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartTraceDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_AssistanceEffectID() {
		return ((T (*)(WeaponFireComponentCrossAssistance*))(Il2CppBase() + 0x23CB360))(this);
	}
	template <typename T = void> T LoadProperties(Il2CppString* path) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, Il2CppString*))(Il2CppBase() + 0x23CB36C))(this, path);
	}
	template <typename T = void> T PlayStartAssistanceSound() {
		return ((T (*)(WeaponFireComponentCrossAssistance*))(Il2CppBase() + 0x23CB65C))(this);
	}
	template <typename T = void> T PreBeginState(uintptr_t newState) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, uintptr_t))(Il2CppBase() + 0x23CB6F4))(this, newState);
	}
	template <typename T = void> T OnActive(bool active) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, bool))(Il2CppBase() + 0x23CB80C))(this, active);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, float))(Il2CppBase() + 0x23CB8C0))(this, DeltaTime);
	}
	template <typename T = Il2CppVector3> T GetStartTracePos() {
		return ((T (*)(WeaponFireComponentCrossAssistance*))(Il2CppBase() + 0x23CBA90))(this);
	}
	template <typename T = Il2CppVector3> T GetStartTraceDir() {
		return ((T (*)(WeaponFireComponentCrossAssistance*))(Il2CppBase() + 0x23CBBCC))(this);
	}
	template <typename T = float> T GetWeaponRange() {
		return ((T (*)(WeaponFireComponentCrossAssistance*))(Il2CppBase() + 0x23CBD24))(this);
	}
	template <typename T = bool> T CalcWeaponFire(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList, float checkRange, bool resetThroughParams) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23CBDCC))(this, startPos, dir, impactList, checkRange, resetThroughParams);
	}
	template <typename T = bool> static T CalcWeaponFirem__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23CD124))(0, s);
	}
	template <typename T = void> T xLuaBaseProxy_LoadProperties(Il2CppString* P0) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, Il2CppString*))(Il2CppBase() + 0x23CD134))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PreBeginState(uintptr_t P0) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, uintptr_t))(Il2CppBase() + 0x23CD138))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnActive(bool P0) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, bool))(Il2CppBase() + 0x23CD140))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, float))(Il2CppBase() + 0x23CD148))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CalcWeaponFire(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, float P3, bool P4) {
		return ((T (*)(WeaponFireComponentCrossAssistance*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23CD14C))(this, P0, P1, P2, P3, P4);
	}

};

}
