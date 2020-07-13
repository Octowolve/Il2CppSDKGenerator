#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildLocationDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildLocationDataStore"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& ProvinceList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& CityList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ProvinceAndCitysList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateProvinceAndCitysList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllCitysForProvince() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CreateProvinceAndCitysList() {
		return ((T (*)(GuildLocationDataStore*))(Il2CppBase() + 0x3BC546C))(this);
	}
	template <typename T = void> T GetAllCitysForProvince(Il2CppString* ProvinceName) {
		return ((T (*)(GuildLocationDataStore*, Il2CppString*))(Il2CppBase() + 0x3BC59DC))(this, ProvinceName);
	}

};

}
