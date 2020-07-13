#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BioChemicalBarrel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BioChemicalBarrel"));
	}

	template <typename T = int32_t> T& LeakUnbrokenEffectID() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& LeakBrokenEffectID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& MinLeakRange() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& MaxLeakRange() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& MinDamage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& MaxDamage() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& DamageCD() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& LeakSpeedUnBroken() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& LeakSpeedBroken() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& OverallLeakAmount() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& CurLeakRange() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& CurLeakSpeed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& bIsLeaking() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalDamageToCircumstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLeakEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(uint32_t actorId, uintptr_t levelObj) {
		return ((T (*)(BioChemicalBarrel*, uint32_t, uintptr_t))(Il2CppBase() + 0x24B3958))(this, actorId, levelObj);
	}
	template <typename T = void> T SyncHealth(float hp) {
		return ((T (*)(BioChemicalBarrel*, float))(Il2CppBase() + 0x24B3C74))(this, hp);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BioChemicalBarrel*, float))(Il2CppBase() + 0x24B46F4))(this, deltaTime);
	}
	template <typename T = float> T CalDamageToCircumstances() {
		return ((T (*)(BioChemicalBarrel*))(Il2CppBase() + 0x24B47E4))(this);
	}
	template <typename T = void> T ShowLeakEffect(int32_t effectID, Il2CppVector3 leakCenter, float range, float duration) {
		return ((T (*)(BioChemicalBarrel*, int32_t, Il2CppVector3, float, float))(Il2CppBase() + 0x24B4894))(this, effectID, leakCenter, range, duration);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uint32_t P0, uintptr_t P1) {
		return ((T (*)(BioChemicalBarrel*, uint32_t, uintptr_t))(Il2CppBase() + 0x24B4AB8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SyncHealth(float P0) {
		return ((T (*)(BioChemicalBarrel*, float))(Il2CppBase() + 0x24B4ABC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BioChemicalBarrel*, float))(Il2CppBase() + 0x24B4C0C))(this, P0);
	}

};

}
