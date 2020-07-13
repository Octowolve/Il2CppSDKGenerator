#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CrosshairConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CrosshairConfConfig"));
	}

	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LoadoutShowIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& MaxValueDay() {
		return *(T*)((uintptr_t)this + 0x4C);
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

	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BBAC))(this);
	}
	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BBB4))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(CrosshairConfConfig*, uintptr_t))(Il2CppBase() + 0x463BBBC))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BBC4))(this);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BC70))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BC78))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BD20))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(CrosshairConfConfig*, Il2CppString*))(Il2CppBase() + 0x463BD28))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BD30))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BD40))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(CrosshairConfConfig*, Il2CppString*))(Il2CppBase() + 0x463BD48))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BD50))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BD18))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(CrosshairConfConfig*, uint32_t))(Il2CppBase() + 0x463BD60))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BD68))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(CrosshairConfConfig*, int32_t))(Il2CppBase() + 0x463BD70))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BD78))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(CrosshairConfConfig*, int32_t))(Il2CppBase() + 0x463BD80))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BD88))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(CrosshairConfConfig*, bool))(Il2CppBase() + 0x463BD90))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BD98))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(CrosshairConfConfig*, Il2CppString*))(Il2CppBase() + 0x463BDA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BDA8))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BC68))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(CrosshairConfConfig*, int32_t))(Il2CppBase() + 0x463BDB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LoadoutShowIcon() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BDC0))(this);
	}
	template <typename T = void> T set_LoadoutShowIcon(Il2CppString* value) {
		return ((T (*)(CrosshairConfConfig*, Il2CppString*))(Il2CppBase() + 0x463BDC8))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BDD0))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(CrosshairConfConfig*, int32_t))(Il2CppBase() + 0x463BDD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BDE0))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(CrosshairConfConfig*, Il2CppString*))(Il2CppBase() + 0x463BDE8))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BDF0))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(CrosshairConfConfig*, bool))(Il2CppBase() + 0x463BDF8))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BE00))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(CrosshairConfConfig*, uint32_t))(Il2CppBase() + 0x463BE08))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BE10))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(CrosshairConfConfig*, int32_t))(Il2CppBase() + 0x463BE18))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BE20))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(CrosshairConfConfig*, int32_t))(Il2CppBase() + 0x463BE28))(this, value);
	}
	template <typename T = int32_t> T get_MaxValueDay() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463BE30))(this);
	}
	template <typename T = void> T set_MaxValueDay(int32_t value) {
		return ((T (*)(CrosshairConfConfig*, int32_t))(Il2CppBase() + 0x463BE38))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CrosshairConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463BE40))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(CrosshairConfConfig*))(Il2CppBase() + 0x463C0A4))(this);
	}

};

}
