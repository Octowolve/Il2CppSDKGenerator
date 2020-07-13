#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CountryConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CountryConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& GeoCode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Alpha2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Continent() {
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
		return ((T (*)(CountryConfig*))(Il2CppBase() + 0x463B50C))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(CountryConfig*))(Il2CppBase() + 0x463B5AC))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(CountryConfig*, int32_t))(Il2CppBase() + 0x463B5B4))(this, value);
	}
	template <typename T = int32_t> T get_GeoCode() {
		return ((T (*)(CountryConfig*))(Il2CppBase() + 0x463B5BC))(this);
	}
	template <typename T = void> T set_GeoCode(int32_t value) {
		return ((T (*)(CountryConfig*, int32_t))(Il2CppBase() + 0x463B5C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CountryConfig*))(Il2CppBase() + 0x463B5CC))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(CountryConfig*, Il2CppString*))(Il2CppBase() + 0x463B5D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Alpha2() {
		return ((T (*)(CountryConfig*))(Il2CppBase() + 0x463B5DC))(this);
	}
	template <typename T = void> T set_Alpha2(Il2CppString* value) {
		return ((T (*)(CountryConfig*, Il2CppString*))(Il2CppBase() + 0x463B5E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Continent() {
		return ((T (*)(CountryConfig*))(Il2CppBase() + 0x463B5EC))(this);
	}
	template <typename T = void> T set_Continent(Il2CppString* value) {
		return ((T (*)(CountryConfig*, Il2CppString*))(Il2CppBase() + 0x463B5F4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CountryConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463B5FC))(this, bytes, position);
	}

};

}
