#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RoleConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RoleConfConfig"));
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
	template <typename T = bool> T& IsAIInBR() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AIID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& PVEAIID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MaxSPI() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& MaxSkill() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& DefaultSkill_1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& DefaultSkill_2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& LotterySkill() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& DefaultPerk_1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& DefaultPerk_2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& DefaultPerk_3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& AudioSwitch() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& SpecialAudioEventEx() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& DefaultAudioEventEx() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& WinnerCircle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& BasicAudioBank() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& BasicAudioBank2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& DefaultAudioBank() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& DefaultAudioBank2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& SpecialAudioBank() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& SpecialAudioBank2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& SpecialAudioBank3() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& MPBankNameEx() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& BRBankNameEX() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& ZoomInAudio() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& ZoomOutAudio() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& ShowRare() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& SortWeight() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RoleSkinBox() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& MaxValueDay() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& EntranceAni() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& ShowFixedRotation() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OpenViewSkill() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberShowConfById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30D9F5C))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(RoleConfConfig*, uintptr_t))(Il2CppBase() + 0x30D9F64))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30D9F6C))(this);
	}
	template <typename T = uintptr_t> static T GetMemberShowConfById(uint32_t id) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x30DA018))(0, id);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA144))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA1E4))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(RoleConfConfig*, uint32_t))(Il2CppBase() + 0x30DA1EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA1F4))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA1FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA204))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA214))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA21C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA224))(this);
	}
	template <typename T = bool> T get_IsAIInBR() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA234))(this);
	}
	template <typename T = void> T set_IsAIInBR(bool value) {
		return ((T (*)(RoleConfConfig*, bool))(Il2CppBase() + 0x30DA23C))(this, value);
	}
	template <typename T = int32_t> T get_AIID() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA244))(this);
	}
	template <typename T = void> T set_AIID(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA24C))(this, value);
	}
	template <typename T = int32_t> T get_PVEAIID() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA254))(this);
	}
	template <typename T = void> T set_PVEAIID(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA25C))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA264))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA26C))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA274))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA27C))(this, value);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA284))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA28C))(this, value);
	}
	template <typename T = int32_t> T get_MaxSPI() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA294))(this);
	}
	template <typename T = void> T set_MaxSPI(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA29C))(this, value);
	}
	template <typename T = int32_t> T get_MaxSkill() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA2A4))(this);
	}
	template <typename T = void> T set_MaxSkill(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA2AC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_1() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA2B4))(this);
	}
	template <typename T = void> T set_DefaultSkill_1(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA2BC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_2() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA2C4))(this);
	}
	template <typename T = void> T set_DefaultSkill_2(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA2CC))(this, value);
	}
	template <typename T = int32_t> T get_LotterySkill() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA2D4))(this);
	}
	template <typename T = void> T set_LotterySkill(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA2DC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultPerk_1() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA2E4))(this);
	}
	template <typename T = void> T set_DefaultPerk_1(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA2EC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultPerk_2() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA2F4))(this);
	}
	template <typename T = void> T set_DefaultPerk_2(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA2FC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultPerk_3() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA304))(this);
	}
	template <typename T = void> T set_DefaultPerk_3(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA30C))(this, value);
	}
	template <typename T = Il2CppString*> T get_AudioSwitch() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA314))(this);
	}
	template <typename T = void> T set_AudioSwitch(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA31C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpecialAudioEventEx() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA324))(this);
	}
	template <typename T = void> T set_SpecialAudioEventEx(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA32C))(this, value);
	}
	template <typename T = Il2CppString*> T get_DefaultAudioEventEx() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA334))(this);
	}
	template <typename T = void> T set_DefaultAudioEventEx(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA33C))(this, value);
	}
	template <typename T = Il2CppString*> T get_WinnerCircle() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA344))(this);
	}
	template <typename T = void> T set_WinnerCircle(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA34C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BasicAudioBank() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA354))(this);
	}
	template <typename T = void> T set_BasicAudioBank(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA35C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BasicAudioBank2() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA364))(this);
	}
	template <typename T = void> T set_BasicAudioBank2(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA36C))(this, value);
	}
	template <typename T = Il2CppString*> T get_DefaultAudioBank() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA374))(this);
	}
	template <typename T = void> T set_DefaultAudioBank(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA37C))(this, value);
	}
	template <typename T = Il2CppString*> T get_DefaultAudioBank2() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA384))(this);
	}
	template <typename T = void> T set_DefaultAudioBank2(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA38C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpecialAudioBank() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA394))(this);
	}
	template <typename T = void> T set_SpecialAudioBank(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA39C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpecialAudioBank2() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA3A4))(this);
	}
	template <typename T = void> T set_SpecialAudioBank2(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA3AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpecialAudioBank3() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA3B4))(this);
	}
	template <typename T = void> T set_SpecialAudioBank3(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA3BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_MPBankNameEx() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA3C4))(this);
	}
	template <typename T = void> T set_MPBankNameEx(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA3CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_BRBankNameEX() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA3D4))(this);
	}
	template <typename T = void> T set_BRBankNameEX(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA3DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ZoomInAudio() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA3E4))(this);
	}
	template <typename T = void> T set_ZoomInAudio(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA3EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ZoomOutAudio() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA3F4))(this);
	}
	template <typename T = void> T set_ZoomOutAudio(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA3FC))(this, value);
	}
	template <typename T = bool> T get_ShowRare() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA404))(this);
	}
	template <typename T = void> T set_ShowRare(bool value) {
		return ((T (*)(RoleConfConfig*, bool))(Il2CppBase() + 0x30DA40C))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA414))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(RoleConfConfig*, bool))(Il2CppBase() + 0x30DA41C))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA424))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA42C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA434))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA43C))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA444))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA010))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA454))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA45C))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA464))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA46C))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA474))(this, value);
	}
	template <typename T = int32_t> T get_SortWeight() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA47C))(this);
	}
	template <typename T = void> T set_SortWeight(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA484))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RoleSkinBox() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA48C))(this);
	}
	template <typename T = void> T set_RoleSkinBox(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RoleConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30DA494))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA49C))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(RoleConfConfig*, bool))(Il2CppBase() + 0x30DA4A4))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA4AC))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA4B4))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA4BC))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(RoleConfConfig*, uint32_t))(Il2CppBase() + 0x30DA4C4))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA4CC))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA4D4))(this, value);
	}
	template <typename T = int32_t> T get_MaxValueDay() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA4DC))(this);
	}
	template <typename T = void> T set_MaxValueDay(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA4E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EntranceAni() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA4EC))(this);
	}
	template <typename T = void> T set_EntranceAni(Il2CppString* value) {
		return ((T (*)(RoleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DA4F4))(this, value);
	}
	template <typename T = int32_t> T get_ShowFixedRotation() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA4FC))(this);
	}
	template <typename T = void> T set_ShowFixedRotation(int32_t value) {
		return ((T (*)(RoleConfConfig*, int32_t))(Il2CppBase() + 0x30DA504))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OpenViewSkill() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DA50C))(this);
	}
	template <typename T = void> T set_OpenViewSkill(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RoleConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30DA514))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RoleConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DA51C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(RoleConfConfig*))(Il2CppBase() + 0x30DAB24))(this);
	}

};

}
