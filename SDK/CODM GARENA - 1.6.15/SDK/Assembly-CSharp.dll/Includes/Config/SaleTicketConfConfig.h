#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SaleTicketConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SaleTicketConfConfig"));
	}

	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& SubjectionSystem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SubjectionSeason() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SaleMuch() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& ShowTicket() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& MaxValueDay() {
		return *(T*)((uintptr_t)this + 0x58);
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

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DC8F4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DC99C))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(SaleTicketConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DC9A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DC9AC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DC9BC))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(SaleTicketConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DC9C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DC9CC))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DC994))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(SaleTicketConfConfig*, uint32_t))(Il2CppBase() + 0x30DC9DC))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DC9E4))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DC9EC))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DC9F4))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DC9FC))(this, value);
	}
	template <typename T = int32_t> T get_SubjectionSystem() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA04))(this);
	}
	template <typename T = void> T set_SubjectionSystem(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DCA0C))(this, value);
	}
	template <typename T = int32_t> T get_SubjectionSeason() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA14))(this);
	}
	template <typename T = void> T set_SubjectionSeason(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DCA1C))(this, value);
	}
	template <typename T = int32_t> T get_SaleMuch() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA24))(this);
	}
	template <typename T = void> T set_SaleMuch(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DCA2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_StartTime() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA34))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppString* value) {
		return ((T (*)(SaleTicketConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DCA3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA44))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(SaleTicketConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DCA4C))(this, value);
	}
	template <typename T = bool> T get_ShowTicket() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA54))(this);
	}
	template <typename T = void> T set_ShowTicket(bool value) {
		return ((T (*)(SaleTicketConfConfig*, bool))(Il2CppBase() + 0x30DCA5C))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA64))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(SaleTicketConfConfig*, bool))(Il2CppBase() + 0x30DCA6C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA74))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(SaleTicketConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DCA7C))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA84))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCA94))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DCA9C))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCAA4))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DCAAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCAB4))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(SaleTicketConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DCABC))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCAC4))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(SaleTicketConfConfig*, bool))(Il2CppBase() + 0x30DCACC))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCAD4))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(SaleTicketConfConfig*, uint32_t))(Il2CppBase() + 0x30DCADC))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCAE4))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DCAEC))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCAF4))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DCAFC))(this, value);
	}
	template <typename T = int32_t> T get_MaxValueDay() {
		return ((T (*)(SaleTicketConfConfig*))(Il2CppBase() + 0x30DCB04))(this);
	}
	template <typename T = void> T set_MaxValueDay(int32_t value) {
		return ((T (*)(SaleTicketConfConfig*, int32_t))(Il2CppBase() + 0x30DCB0C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SaleTicketConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DCB14))(this, bytes, position);
	}

};

}
