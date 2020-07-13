#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SkillConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SkillConfConfig"));
	}

	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MaxSPI() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsPVE() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Buff0() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Buff1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Buff2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Buff3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& ForAR() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& ForSniper() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& ForLMG() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = bool> T& ForSMG() {
		return *(T*)((uintptr_t)this + 0x43);
	}
	template <typename T = bool> T& ForShotgun() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& ForPistol() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = bool> T& ForLaunch() {
		return *(T*)((uintptr_t)this + 0x46);
	}
	template <typename T = bool> T& ForMelee() {
		return *(T*)((uintptr_t)this + 0x47);
	}
	template <typename T = int32_t> T& UnloadPrice() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& ShowRare() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& SortWeight() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAdaptWeaponType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E0E9C))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(SkillConfConfig*, uintptr_t))(Il2CppBase() + 0x30E0EA4))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E0EAC))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E0EB4))(this);
	}
	template <typename T = bool> T IsAdaptWeaponType(uintptr_t weaponType) {
		return ((T (*)(SkillConfConfig*, uintptr_t))(Il2CppBase() + 0x30E0F60))(this, weaponType);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E10C8))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1168))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(SkillConfConfig*, uint32_t))(Il2CppBase() + 0x30E1170))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1178))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1180))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1188))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1190))(this, value);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1198))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E11A0))(this, value);
	}
	template <typename T = int32_t> T get_MaxSPI() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E11A8))(this);
	}
	template <typename T = void> T set_MaxSPI(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E11B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E11B8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(SkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E11C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E11C8))(this);
	}
	template <typename T = bool> T get_IsPVE() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E11D8))(this);
	}
	template <typename T = void> T set_IsPVE(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E11E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E11E8))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(SkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E11F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E11F8))(this);
	}
	template <typename T = int32_t> T get_Buff0() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1208))(this);
	}
	template <typename T = void> T set_Buff0(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1210))(this, value);
	}
	template <typename T = int32_t> T get_Buff1() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1218))(this);
	}
	template <typename T = void> T set_Buff1(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1220))(this, value);
	}
	template <typename T = int32_t> T get_Buff2() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1228))(this);
	}
	template <typename T = void> T set_Buff2(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1230))(this, value);
	}
	template <typename T = int32_t> T get_Buff3() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1238))(this);
	}
	template <typename T = void> T set_Buff3(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1240))(this, value);
	}
	template <typename T = bool> T get_ForAR() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1088))(this);
	}
	template <typename T = void> T set_ForAR(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E1248))(this, value);
	}
	template <typename T = bool> T get_ForSniper() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1090))(this);
	}
	template <typename T = void> T set_ForSniper(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E1250))(this, value);
	}
	template <typename T = bool> T get_ForLMG() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1098))(this);
	}
	template <typename T = void> T set_ForLMG(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E1258))(this, value);
	}
	template <typename T = bool> T get_ForSMG() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E10A0))(this);
	}
	template <typename T = void> T set_ForSMG(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E1260))(this, value);
	}
	template <typename T = bool> T get_ForShotgun() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E10A8))(this);
	}
	template <typename T = void> T set_ForShotgun(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E1268))(this, value);
	}
	template <typename T = bool> T get_ForPistol() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E10B0))(this);
	}
	template <typename T = void> T set_ForPistol(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E1270))(this, value);
	}
	template <typename T = bool> T get_ForLaunch() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E10B8))(this);
	}
	template <typename T = void> T set_ForLaunch(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E1278))(this, value);
	}
	template <typename T = bool> T get_ForMelee() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E10C0))(this);
	}
	template <typename T = void> T set_ForMelee(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E1280))(this, value);
	}
	template <typename T = int32_t> T get_UnloadPrice() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1288))(this);
	}
	template <typename T = void> T set_UnloadPrice(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1290))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1298))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E12A0))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E12A8))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E12B0))(this, value);
	}
	template <typename T = bool> T get_ShowRare() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E12B8))(this);
	}
	template <typename T = void> T set_ShowRare(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E12C0))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E12C8))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(SkillConfConfig*, bool))(Il2CppBase() + 0x30E12D0))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E12D8))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E12E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E12E8))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(SkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E12F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E12F8))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E0F58))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1308))(this, value);
	}
	template <typename T = int32_t> T get_GoGetUrl() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1310))(this);
	}
	template <typename T = void> T set_GoGetUrl(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1318))(this, value);
	}
	template <typename T = int32_t> T get_SortWeight() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1320))(this);
	}
	template <typename T = void> T set_SortWeight(int32_t value) {
		return ((T (*)(SkillConfConfig*, int32_t))(Il2CppBase() + 0x30E1328))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SkillConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E1330))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SkillConfConfig*))(Il2CppBase() + 0x30E1764))(this);
	}

};

}
