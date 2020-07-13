#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PerkConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PerkConfConfig"));
	}

	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PerkType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Slot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& CanDuplication() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MaxSPI() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& ShowEquipment() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& ConfigFile() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& LogicType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Buff0() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Buff1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Buff2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Buff3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Buff4() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Param_1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Param_2() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Param_3() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& ShowRare() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& SortWeight() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& PveLoadValue() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& AttrId_1() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& AttrValue_1() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& AttrId_2() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& AttrValue_2() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& AttrId_3() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& AttrValue_3() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& AttrId_4() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& AttrValue_4() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& AttrId_5() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& AttrValue_5() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& BasicPower() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& OpTargetType() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& OpTargetValue() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& MaxValueDay() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillInBuffID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F58C))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(PerkConfConfig*, uintptr_t))(Il2CppBase() + 0x377F594))(this, value);
	}
	template <typename T = uintptr_t> T get_PerkType() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F59C))(this);
	}
	template <typename T = void> T set_PerkType(uintptr_t value) {
		return ((T (*)(PerkConfConfig*, uintptr_t))(Il2CppBase() + 0x377F5A4))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F5AC))(this);
	}
	template <typename T = void> T FillInBuffID(uintptr_t buffIDList) {
		return ((T (*)(PerkConfConfig*, uintptr_t))(Il2CppBase() + 0x377F660))(this, buffIDList);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F844))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F8EC))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(PerkConfConfig*, Il2CppString*))(Il2CppBase() + 0x377F8F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F8FC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x376ADD8))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(PerkConfConfig*, Il2CppString*))(Il2CppBase() + 0x377F90C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F914))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F8E4))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(PerkConfConfig*, uint32_t))(Il2CppBase() + 0x377F924))(this, value);
	}
	template <typename T = int32_t> T get_Slot() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F658))(this);
	}
	template <typename T = void> T set_Slot(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F92C))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F934))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F93C))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F944))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F94C))(this, value);
	}
	template <typename T = int32_t> T get_CanDuplication() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F954))(this);
	}
	template <typename T = void> T set_CanDuplication(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F95C))(this, value);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F964))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F96C))(this, value);
	}
	template <typename T = int32_t> T get_MaxSPI() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F974))(this);
	}
	template <typename T = void> T set_MaxSPI(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F97C))(this, value);
	}
	template <typename T = bool> T get_ShowEquipment() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F984))(this);
	}
	template <typename T = void> T set_ShowEquipment(bool value) {
		return ((T (*)(PerkConfConfig*, bool))(Il2CppBase() + 0x377F98C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConfigFile() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F994))(this);
	}
	template <typename T = void> T set_ConfigFile(Il2CppString* value) {
		return ((T (*)(PerkConfConfig*, Il2CppString*))(Il2CppBase() + 0x377F99C))(this, value);
	}
	template <typename T = int32_t> T get_LogicType() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F9A4))(this);
	}
	template <typename T = void> T set_LogicType(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F9AC))(this, value);
	}
	template <typename T = int32_t> T get_Buff0() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F81C))(this);
	}
	template <typename T = void> T set_Buff0(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F9B4))(this, value);
	}
	template <typename T = int32_t> T get_Buff1() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F824))(this);
	}
	template <typename T = void> T set_Buff1(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F9BC))(this, value);
	}
	template <typename T = int32_t> T get_Buff2() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F82C))(this);
	}
	template <typename T = void> T set_Buff2(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F9C4))(this, value);
	}
	template <typename T = int32_t> T get_Buff3() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F834))(this);
	}
	template <typename T = void> T set_Buff3(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F9CC))(this, value);
	}
	template <typename T = int32_t> T get_Buff4() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F83C))(this);
	}
	template <typename T = void> T set_Buff4(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F9D4))(this, value);
	}
	template <typename T = int32_t> T get_Param_1() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F9DC))(this);
	}
	template <typename T = void> T set_Param_1(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F9E4))(this, value);
	}
	template <typename T = int32_t> T get_Param_2() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F9EC))(this);
	}
	template <typename T = void> T set_Param_2(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377F9F4))(this, value);
	}
	template <typename T = int32_t> T get_Param_3() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377F9FC))(this);
	}
	template <typename T = void> T set_Param_3(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FA04))(this, value);
	}
	template <typename T = bool> T get_ShowRare() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FA0C))(this);
	}
	template <typename T = void> T set_ShowRare(bool value) {
		return ((T (*)(PerkConfConfig*, bool))(Il2CppBase() + 0x377FA14))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FA1C))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(PerkConfConfig*, bool))(Il2CppBase() + 0x377FA24))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FA2C))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FA34))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x376ADC8))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(PerkConfConfig*, Il2CppString*))(Il2CppBase() + 0x377FA3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FA44))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x376ADD0))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FA54))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FA5C))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FA64))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FA6C))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(PerkConfConfig*, Il2CppString*))(Il2CppBase() + 0x377FA74))(this, value);
	}
	template <typename T = int32_t> T get_SortWeight() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FA7C))(this);
	}
	template <typename T = void> T set_SortWeight(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FA84))(this, value);
	}
	template <typename T = int32_t> T get_PveLoadValue() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FA8C))(this);
	}
	template <typename T = void> T set_PveLoadValue(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FA94))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_1() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FA9C))(this);
	}
	template <typename T = void> T set_AttrId_1(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FAA4))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_1() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FAAC))(this);
	}
	template <typename T = void> T set_AttrValue_1(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FAB4))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_2() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FABC))(this);
	}
	template <typename T = void> T set_AttrId_2(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FAC4))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_2() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FACC))(this);
	}
	template <typename T = void> T set_AttrValue_2(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FAD4))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_3() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FADC))(this);
	}
	template <typename T = void> T set_AttrId_3(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FAE4))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_3() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FAEC))(this);
	}
	template <typename T = void> T set_AttrValue_3(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FAF4))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_4() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FAFC))(this);
	}
	template <typename T = void> T set_AttrId_4(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FB04))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_4() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB0C))(this);
	}
	template <typename T = void> T set_AttrValue_4(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FB14))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_5() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB1C))(this);
	}
	template <typename T = void> T set_AttrId_5(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FB24))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_5() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB2C))(this);
	}
	template <typename T = void> T set_AttrValue_5(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FB34))(this, value);
	}
	template <typename T = int32_t> T get_BasicPower() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB3C))(this);
	}
	template <typename T = void> T set_BasicPower(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FB44))(this, value);
	}
	template <typename T = int32_t> T get_OpTargetType() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB4C))(this);
	}
	template <typename T = void> T set_OpTargetType(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FB54))(this, value);
	}
	template <typename T = int32_t> T get_OpTargetValue() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB5C))(this);
	}
	template <typename T = void> T set_OpTargetValue(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FB64))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB6C))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(PerkConfConfig*, bool))(Il2CppBase() + 0x377FB74))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB7C))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FB84))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB8C))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(PerkConfConfig*, uint32_t))(Il2CppBase() + 0x377FB94))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FB9C))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FBA4))(this, value);
	}
	template <typename T = int32_t> T get_MaxValueDay() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x377FBAC))(this);
	}
	template <typename T = void> T set_MaxValueDay(int32_t value) {
		return ((T (*)(PerkConfConfig*, int32_t))(Il2CppBase() + 0x377FBB4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PerkConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377FBBC))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(PerkConfConfig*))(Il2CppBase() + 0x3780188))(this);
	}

};

}
