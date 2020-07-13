#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CamosConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CamosConfConfig"));
	}

	template <typename T = uintptr_t> T& WeaponType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CA() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& EveryFirearmCanUse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& FirearmType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& FirearmID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& NeedUnlocked() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& UnlockKill() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& GetXP() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B7F4))(this);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B8A0))(this);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B8A8))(this);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B8B0))(this);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B960))(this);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B968))(this);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B970))(this);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B978))(this);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B980))(this);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B988))(this);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B990))(this);
	}
	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BA40))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BA48))(this);
	}
	template <typename T = int32_t> T get_CA() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BAF0))(this);
	}
	template <typename T = void> T set_CA(int32_t value) {
		return ((T (*)(CamosConfConfig*, int32_t))(Il2CppBase() + 0x2D5BAF8))(this, value);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BAE8))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(CamosConfConfig*, uint32_t))(Il2CppBase() + 0x2D5BB00))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BB08))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(CamosConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5BB10))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BB18))(this);
	}
	template <typename T = bool> T get_EveryFirearmCanUse() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BB28))(this);
	}
	template <typename T = void> T set_EveryFirearmCanUse(bool value) {
		return ((T (*)(CamosConfConfig*, bool))(Il2CppBase() + 0x2D5BB30))(this, value);
	}
	template <typename T = int32_t> T get_FirearmType() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5B898))(this);
	}
	template <typename T = void> T set_FirearmType(int32_t value) {
		return ((T (*)(CamosConfConfig*, int32_t))(Il2CppBase() + 0x2D5BB38))(this, value);
	}
	template <typename T = uint64_t> T get_FirearmID() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BB40))(this);
	}
	template <typename T = void> T set_FirearmID(uint64_t value) {
		return ((T (*)(CamosConfConfig*, uint64_t))(Il2CppBase() + 0x2D5BB48))(this, value);
	}
	template <typename T = bool> T get_NeedUnlocked() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BB58))(this);
	}
	template <typename T = void> T set_NeedUnlocked(bool value) {
		return ((T (*)(CamosConfConfig*, bool))(Il2CppBase() + 0x2D5BB60))(this, value);
	}
	template <typename T = int32_t> T get_UnlockKill() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BB68))(this);
	}
	template <typename T = void> T set_UnlockKill(int32_t value) {
		return ((T (*)(CamosConfConfig*, int32_t))(Il2CppBase() + 0x2D5BB70))(this, value);
	}
	template <typename T = int32_t> T get_GetXP() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BB78))(this);
	}
	template <typename T = void> T set_GetXP(int32_t value) {
		return ((T (*)(CamosConfConfig*, int32_t))(Il2CppBase() + 0x2D5BB80))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CamosConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5BB88))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(CamosConfConfig*))(Il2CppBase() + 0x2D5BDA4))(this);
	}

};

}
