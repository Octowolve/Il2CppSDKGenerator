#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ExperPropertyManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ExperPropertyManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& SGThrowWeaponDamageMultiple() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& SGSpinerWeaponDamageMultiple() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& ResetTipsFlag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint64_t>*> T& BuffItemIDList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uint64_t>*> T& ClipItemIDList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PropertyList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_HealthRate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWithExperProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSuitWeaponAddition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSAddition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T ResetData(uintptr_t getExperRes) {
		return ((T (*)(ExperPropertyManager*, uintptr_t))(Il2CppBase() + 0x31CEDCC))(this, getExperRes);
	}
	template <typename T = void> T ResetData_1(Il2CppList<uintptr_t>* inExpertNumberList) {
		return ((T (*)(ExperPropertyManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x31CEEC0))(this, inExpertNumberList);
	}
	template <typename T = uintptr_t> T GetProperty(uintptr_t expertID) {
		return ((T (*)(ExperPropertyManager*, uintptr_t))(Il2CppBase() + 0x31CF38C))(this, expertID);
	}
	template <typename T = void> T RecycleProperty() {
		return ((T (*)(ExperPropertyManager*))(Il2CppBase() + 0x31CF1B0))(this);
	}
	template <typename T = void> T AddProperty(uintptr_t playerInfo, uintptr_t property) {
		return ((T (*)(ExperPropertyManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31CF53C))(this, playerInfo, property);
	}
	template <typename T = void> T InitWithExperProp(uintptr_t playerInfo) {
		return ((T (*)(ExperPropertyManager*, uintptr_t))(Il2CppBase() + 0x31CF67C))(this, playerInfo);
	}
	template <typename T = void> T GetSuitWeaponAddition(uintptr_t weapon) {
		return ((T (*)(ExperPropertyManager*, uintptr_t))(Il2CppBase() + 0x31CFA20))(this, weapon);
	}
	template <typename T = void> T GetPSAddition(uintptr_t weapon, uintptr_t clipAmmoCount, uintptr_t carriedAmmoCount) {
		return ((T (*)(ExperPropertyManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x31CFAF0))(this, weapon, clipAmmoCount, carriedAmmoCount);
	}

};

}
