#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class RegionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "RegionInfo"));
	}

	template <typename T = uintptr_t> static T& currentRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lcid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& regionId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& iso2Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& iso3Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& win3Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& englishName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& currencySymbol() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& isoCurrencySymbol() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& currencyEnglishName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map1B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_CurrentRegion() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FDC090))(0);
	}
	template <typename T = bool> T GetByTerritory(uintptr_t ci) {
		return ((T (*)(RegionInfo*, uintptr_t))(Il2CppBase() + 0x3FDBD64))(this, ci);
	}
	template <typename T = bool> T construct_internal_region_from_name(Il2CppString* name) {
		return ((T (*)(RegionInfo*, Il2CppString*))(Il2CppBase() + 0x3FDC08C))(this, name);
	}
	template <typename T = Il2CppString*> T get_CurrencyEnglishName() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC22C))(this);
	}
	template <typename T = Il2CppString*> T get_CurrencySymbol() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC234))(this);
	}
	template <typename T = Il2CppString*> T get_DisplayName() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC23C))(this);
	}
	template <typename T = Il2CppString*> T get_EnglishName() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC244))(this);
	}
	template <typename T = int32_t> T get_GeoId() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC24C))(this);
	}
	template <typename T = bool> T get_IsMetric() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC254))(this);
	}
	template <typename T = Il2CppString*> T get_ISOCurrencySymbol() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC40C))(this);
	}
	template <typename T = Il2CppString*> T get_NativeName() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC414))(this);
	}
	template <typename T = Il2CppString*> T get_CurrencyNativeName() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC424))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC4B8))(this);
	}
	template <typename T = Il2CppString*> T get_ThreeLetterISORegionName() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC4C0))(this);
	}
	template <typename T = Il2CppString*> T get_ThreeLetterWindowsRegionName() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC4C8))(this);
	}
	template <typename T = Il2CppString*> T get_TwoLetterISORegionName() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC4D0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(RegionInfo*, uintptr_t))(Il2CppBase() + 0x3FDC4D8))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC5A0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RegionInfo*))(Il2CppBase() + 0x3FDC5B4))(this);
	}

};

}
