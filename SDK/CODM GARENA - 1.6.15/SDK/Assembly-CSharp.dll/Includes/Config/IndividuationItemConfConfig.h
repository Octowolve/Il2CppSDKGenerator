#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IndividuationItemConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IndividuationItemConfConfig"));
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
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& IconName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& AnimationName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& SortWeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsBotUse() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& EffectID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& MaxValueDay() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& For_bot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomBotUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764994))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(IndividuationItemConfConfig*, uintptr_t))(Il2CppBase() + 0x376499C))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x37649A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T RandomBotUseItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x3764A50))(0);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764BC0))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764C60))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, uint32_t))(Il2CppBase() + 0x3764C68))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764C70))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764C78))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764C80))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764C88))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764C90))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(IndividuationItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x3764C98))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764CA0))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764CB0))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(IndividuationItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x3764CB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764CC0))(this);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764CD0))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764CD8))(this, value);
	}
	template <typename T = int32_t> T get_IconName() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764CE0))(this);
	}
	template <typename T = void> T set_IconName(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764CE8))(this, value);
	}
	template <typename T = Il2CppString*> T get_AnimationName() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764CF0))(this);
	}
	template <typename T = void> T set_AnimationName(Il2CppString* value) {
		return ((T (*)(IndividuationItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x3764CF8))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D00))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(IndividuationItemConfConfig*, bool))(Il2CppBase() + 0x3764D08))(this, value);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764A48))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764D10))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D18))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(IndividuationItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x3764D20))(this, value);
	}
	template <typename T = int32_t> T get_SortWeight() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D28))(this);
	}
	template <typename T = void> T set_SortWeight(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764D30))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D38))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(IndividuationItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x3764D40))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D48))(this);
	}
	template <typename T = bool> T get_IsBotUse() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D58))(this);
	}
	template <typename T = void> T set_IsBotUse(bool value) {
		return ((T (*)(IndividuationItemConfConfig*, bool))(Il2CppBase() + 0x3764D60))(this, value);
	}
	template <typename T = int32_t> T get_EffectID() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D68))(this);
	}
	template <typename T = void> T set_EffectID(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764D70))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D78))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(IndividuationItemConfConfig*, bool))(Il2CppBase() + 0x3764D80))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D88))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, uint32_t))(Il2CppBase() + 0x3764D90))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764D98))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764DA0))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764DA8))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764DB0))(this, value);
	}
	template <typename T = int32_t> T get_MaxValueDay() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764DB8))(this);
	}
	template <typename T = void> T set_MaxValueDay(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764DC0))(this, value);
	}
	template <typename T = int32_t> T get_For_bot() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3764DC8))(this);
	}
	template <typename T = void> T set_For_bot(int32_t value) {
		return ((T (*)(IndividuationItemConfConfig*, int32_t))(Il2CppBase() + 0x3764DD0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(IndividuationItemConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3764DD8))(this, bytes, position);
	}
	template <typename T = bool> static T RandomBotUseItemm__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3765134))(0, e);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(IndividuationItemConfConfig*))(Il2CppBase() + 0x3765154))(this);
	}

};

}
