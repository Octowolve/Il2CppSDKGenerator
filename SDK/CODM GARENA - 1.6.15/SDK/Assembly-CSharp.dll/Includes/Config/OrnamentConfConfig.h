#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class OrnamentConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "OrnamentConfConfig"));
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
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& MaxValueDay() {
		return *(T*)((uintptr_t)this + 0x48);
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
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D678))(this);
	}
	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D680))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(OrnamentConfConfig*, uintptr_t))(Il2CppBase() + 0x377D688))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D690))(this);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D73C))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D744))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x376AEE8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(OrnamentConfConfig*, Il2CppString*))(Il2CppBase() + 0x377D7E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x376AEC0))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x376AEF0))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(OrnamentConfConfig*, Il2CppString*))(Il2CppBase() + 0x377D7EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x376AED0))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x376AEB8))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(OrnamentConfConfig*, uint32_t))(Il2CppBase() + 0x377D7F4))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x376AEE0))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(OrnamentConfConfig*, int32_t))(Il2CppBase() + 0x377D7FC))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D804))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(OrnamentConfConfig*, int32_t))(Il2CppBase() + 0x377D80C))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D814))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(OrnamentConfConfig*, bool))(Il2CppBase() + 0x377D81C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D824))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(OrnamentConfConfig*, Il2CppString*))(Il2CppBase() + 0x377D82C))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D834))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D734))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(OrnamentConfConfig*, int32_t))(Il2CppBase() + 0x377D844))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D84C))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(OrnamentConfConfig*, int32_t))(Il2CppBase() + 0x377D854))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D85C))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(OrnamentConfConfig*, Il2CppString*))(Il2CppBase() + 0x377D864))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D86C))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(OrnamentConfConfig*, bool))(Il2CppBase() + 0x377D874))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D87C))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(OrnamentConfConfig*, uint32_t))(Il2CppBase() + 0x377D884))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D88C))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(OrnamentConfConfig*, int32_t))(Il2CppBase() + 0x377D894))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D89C))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(OrnamentConfConfig*, int32_t))(Il2CppBase() + 0x377D8A4))(this, value);
	}
	template <typename T = int32_t> T get_MaxValueDay() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377D8AC))(this);
	}
	template <typename T = void> T set_MaxValueDay(int32_t value) {
		return ((T (*)(OrnamentConfConfig*, int32_t))(Il2CppBase() + 0x377D8B4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(OrnamentConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377D8BC))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(OrnamentConfConfig*))(Il2CppBase() + 0x377DB88))(this);
	}

};

}
