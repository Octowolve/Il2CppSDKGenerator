#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class CareerEmblemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "CareerEmblemData"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& modeType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& sortOrder() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isEquipment() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildCareerEmblemDataFromCsv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillCareerEmblemDataFromServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillCareerEmblemIsEquipmentFromServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BuildCareerEmblemDataFromCsv(uintptr_t csv) {
		return ((T (*)(CareerEmblemData*, uintptr_t))(Il2CppBase() + 0x4A06514))(this, csv);
	}
	template <typename T = void> T FillCareerEmblemDataFromServer(uintptr_t data) {
		return ((T (*)(CareerEmblemData*, uintptr_t))(Il2CppBase() + 0x4A06604))(this, data);
	}
	template <typename T = void> T FillCareerEmblemIsEquipmentFromServer(bool isdata, int32_t count) {
		return ((T (*)(CareerEmblemData*, bool, int32_t))(Il2CppBase() + 0x4A066D8))(this, isdata, count);
	}

};

}
