#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoHistoryItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoHistoryItemView"));
	}

	template <typename T = uintptr_t> T& pvpItem() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& pveItem() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& brItem() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetPVPData(uintptr_t data) {
		return ((T (*)(PersonalInfoHistoryItemView*, uintptr_t))(Il2CppBase() + 0x1D09AEC))(this, data);
	}
	template <typename T = void> T SetPVEData(uintptr_t data) {
		return ((T (*)(PersonalInfoHistoryItemView*, uintptr_t))(Il2CppBase() + 0x1D0AB60))(this, data);
	}
	template <typename T = void> T SetBRData(uintptr_t data) {
		return ((T (*)(PersonalInfoHistoryItemView*, uintptr_t))(Il2CppBase() + 0x1D0BC08))(this, data);
	}
	template <typename T = int32_t> static T SetPVEDatam__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D0CD48))(0, x, y);
	}
	template <typename T = int32_t> static T SetBRDatam__1(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D0CD94))(0, x, y);
	}

};

}
