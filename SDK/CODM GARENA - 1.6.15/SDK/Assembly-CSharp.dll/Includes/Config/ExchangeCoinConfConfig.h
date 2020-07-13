#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ExchangeCoinConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ExchangeCoinConfConfig"));
	}

	template <typename T = int32_t> T& CoinID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& InventoryShow() {
		return *(T*)((uintptr_t)this + 0x1C);
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
		return ((T (*)(ExchangeCoinConfConfig*))(Il2CppBase() + 0x4643854))(this);
	}
	template <typename T = int32_t> T get_CoinID() {
		return ((T (*)(ExchangeCoinConfConfig*))(Il2CppBase() + 0x46438F4))(this);
	}
	template <typename T = void> T set_CoinID(int32_t value) {
		return ((T (*)(ExchangeCoinConfConfig*, int32_t))(Il2CppBase() + 0x46438FC))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(ExchangeCoinConfConfig*))(Il2CppBase() + 0x4643904))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(ExchangeCoinConfConfig*, int32_t))(Il2CppBase() + 0x464390C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ExchangeCoinConfConfig*))(Il2CppBase() + 0x4643914))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ExchangeCoinConfConfig*, Il2CppString*))(Il2CppBase() + 0x464391C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ExchangeCoinConfConfig*))(Il2CppBase() + 0x4643924))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(ExchangeCoinConfConfig*))(Il2CppBase() + 0x4643934))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(ExchangeCoinConfConfig*, Il2CppString*))(Il2CppBase() + 0x464393C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ExchangeCoinConfConfig*))(Il2CppBase() + 0x4643944))(this);
	}
	template <typename T = int32_t> T get_InventoryShow() {
		return ((T (*)(ExchangeCoinConfConfig*))(Il2CppBase() + 0x4643954))(this);
	}
	template <typename T = void> T set_InventoryShow(int32_t value) {
		return ((T (*)(ExchangeCoinConfConfig*, int32_t))(Il2CppBase() + 0x464395C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ExchangeCoinConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4643964))(this, bytes, position);
	}

};

}
