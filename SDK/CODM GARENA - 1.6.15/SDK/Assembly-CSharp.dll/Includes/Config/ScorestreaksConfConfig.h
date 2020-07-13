#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ScorestreaksConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ScorestreaksConfConfig"));
	}

	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& UnlockLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& URFScore() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& ENUM_WeaponName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SpriteName_Normal() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& SpriteName_Disable() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Sound() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& RoundStartDisableTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& CarePackageRandom() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& RespawnAvoid() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& KillMessageIcon() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& IndicatorSpriteName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& CheckUseSpace() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& CheckType() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& ValidUseSpaceSize() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& LocalizationUseFailedID() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CameraCenterPosition() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD33C))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(ScorestreaksConfConfig*, uintptr_t))(Il2CppBase() + 0x30DD344))(this, value);
	}
	template <typename T = bool> T get_IsBuildStreaks() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD34C))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD41C))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD430))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD438))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, uint32_t))(Il2CppBase() + 0x30DD440))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD448))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD450))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD458))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD468))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD470))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD478))(this);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD488))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD490))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD498))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD4A0))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD4A8))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD4B0))(this, value);
	}
	template <typename T = int32_t> T get_UnlockLevel() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD4B8))(this);
	}
	template <typename T = void> T set_UnlockLevel(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD4C0))(this, value);
	}
	template <typename T = int32_t> T get_Score() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD4C8))(this);
	}
	template <typename T = void> T set_Score(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD4D0))(this, value);
	}
	template <typename T = int32_t> T get_URFScore() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD4D8))(this);
	}
	template <typename T = void> T set_URFScore(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD4E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ENUM_WeaponName() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD414))(this);
	}
	template <typename T = void> T set_ENUM_WeaponName(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD4E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName_Normal() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD4F0))(this);
	}
	template <typename T = void> T set_SpriteName_Normal(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD4F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName_Disable() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD500))(this);
	}
	template <typename T = void> T set_SpriteName_Disable(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD508))(this, value);
	}
	template <typename T = Il2CppString*> T get_Sound() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD510))(this);
	}
	template <typename T = void> T set_Sound(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD518))(this, value);
	}
	template <typename T = int32_t> T get_RoundStartDisableTime() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD520))(this);
	}
	template <typename T = void> T set_RoundStartDisableTime(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD528))(this, value);
	}
	template <typename T = int32_t> T get_CarePackageRandom() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD530))(this);
	}
	template <typename T = void> T set_CarePackageRandom(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD538))(this, value);
	}
	template <typename T = int32_t> T get_RespawnAvoid() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD540))(this);
	}
	template <typename T = void> T set_RespawnAvoid(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD548))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD550))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(ScorestreaksConfConfig*, bool))(Il2CppBase() + 0x30DD558))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD560))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD568))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD570))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD578))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD580))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD428))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD590))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD598))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD5A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD5A8))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD5B0))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD5B8))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(ScorestreaksConfConfig*, bool))(Il2CppBase() + 0x30DD5C0))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD5C8))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD5D0))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD5D8))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, uint32_t))(Il2CppBase() + 0x30DD5E0))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD5E8))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD5F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_KillMessageIcon() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD5F8))(this);
	}
	template <typename T = void> T set_KillMessageIcon(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD600))(this, value);
	}
	template <typename T = Il2CppString*> T get_IndicatorSpriteName() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD608))(this);
	}
	template <typename T = void> T set_IndicatorSpriteName(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD610))(this, value);
	}
	template <typename T = bool> T get_CheckUseSpace() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD618))(this);
	}
	template <typename T = void> T set_CheckUseSpace(bool value) {
		return ((T (*)(ScorestreaksConfConfig*, bool))(Il2CppBase() + 0x30DD620))(this, value);
	}
	template <typename T = int32_t> T get_CheckType() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD628))(this);
	}
	template <typename T = void> T set_CheckType(int32_t value) {
		return ((T (*)(ScorestreaksConfConfig*, int32_t))(Il2CppBase() + 0x30DD630))(this, value);
	}
	template <typename T = float> T get_ValidUseSpaceSize() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD638))(this);
	}
	template <typename T = void> T set_ValidUseSpaceSize(float value) {
		return ((T (*)(ScorestreaksConfConfig*, float))(Il2CppBase() + 0x30DD640))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocalizationUseFailedID() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD648))(this);
	}
	template <typename T = void> T set_LocalizationUseFailedID(Il2CppString* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DD650))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CameraCenterPosition() {
		return ((T (*)(ScorestreaksConfConfig*))(Il2CppBase() + 0x30DD658))(this);
	}
	template <typename T = void> T set_CameraCenterPosition(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30DD660))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ScorestreaksConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DD668))(this, bytes, position);
	}

};

}
