#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponKillingEffectConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponKillingEffectConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AssetIds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaterialId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Colour() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& EffectType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& EffectDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EffectSockets() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& InheritTexture() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& DetachParent() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& ShouldPlayDeadAnim() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7710))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F77B0))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(WeaponKillingEffectConfig*, int32_t))(Il2CppBase() + 0x30F77B8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssetIds() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F77C0))(this);
	}
	template <typename T = void> T set_AssetIds(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponKillingEffectConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F77C8))(this, value);
	}
	template <typename T = int32_t> T get_MaterialId() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F77D0))(this);
	}
	template <typename T = void> T set_MaterialId(int32_t value) {
		return ((T (*)(WeaponKillingEffectConfig*, int32_t))(Il2CppBase() + 0x30F77D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F77E0))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(WeaponKillingEffectConfig*, Il2CppString*))(Il2CppBase() + 0x30F77E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F77F0))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7800))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(WeaponKillingEffectConfig*, Il2CppString*))(Il2CppBase() + 0x30F7808))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7810))(this);
	}
	template <typename T = int32_t> T get_Colour() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7820))(this);
	}
	template <typename T = void> T set_Colour(int32_t value) {
		return ((T (*)(WeaponKillingEffectConfig*, int32_t))(Il2CppBase() + 0x30F7828))(this, value);
	}
	template <typename T = int32_t> T get_EffectType() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7830))(this);
	}
	template <typename T = void> T set_EffectType(int32_t value) {
		return ((T (*)(WeaponKillingEffectConfig*, int32_t))(Il2CppBase() + 0x30F7838))(this, value);
	}
	template <typename T = float> T get_EffectDuration() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7840))(this);
	}
	template <typename T = void> T set_EffectDuration(float value) {
		return ((T (*)(WeaponKillingEffectConfig*, float))(Il2CppBase() + 0x30F7848))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EffectSockets() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7850))(this);
	}
	template <typename T = void> T set_EffectSockets(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponKillingEffectConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F7858))(this, value);
	}
	template <typename T = bool> T get_InheritTexture() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7860))(this);
	}
	template <typename T = void> T set_InheritTexture(bool value) {
		return ((T (*)(WeaponKillingEffectConfig*, bool))(Il2CppBase() + 0x30F7868))(this, value);
	}
	template <typename T = bool> T get_DetachParent() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7870))(this);
	}
	template <typename T = void> T set_DetachParent(bool value) {
		return ((T (*)(WeaponKillingEffectConfig*, bool))(Il2CppBase() + 0x30F7878))(this, value);
	}
	template <typename T = bool> T get_ShouldPlayDeadAnim() {
		return ((T (*)(WeaponKillingEffectConfig*))(Il2CppBase() + 0x30F7880))(this);
	}
	template <typename T = void> T set_ShouldPlayDeadAnim(bool value) {
		return ((T (*)(WeaponKillingEffectConfig*, bool))(Il2CppBase() + 0x30F7888))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponKillingEffectConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F7890))(this, bytes, position);
	}

};

}
