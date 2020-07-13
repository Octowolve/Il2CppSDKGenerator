#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ElectronicSportsDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElectronicSportsDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_List() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsShowRedDot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetElectronicSportsDataByTimeAndModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUrlPreByTimeAndModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedUid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T UpdateData(uintptr_t res) {
		return ((T (*)(ElectronicSportsDataStore*, uintptr_t))(Il2CppBase() + 0x4BC15EC))(this, res);
	}
	template <typename T = uintptr_t> T GetElectronicSportsDataByTimeAndModeCategory(int32_t serverTime, int32_t modeCategory) {
		return ((T (*)(ElectronicSportsDataStore*, int32_t, int32_t))(Il2CppBase() + 0x4BC1994))(this, serverTime, modeCategory);
	}
	template <typename T = bool> T GetUrlPreByTimeAndModeCategory(int32_t modeCategory, uintptr_t urlPre) {
		return ((T (*)(ElectronicSportsDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x4BC1B5C))(this, modeCategory, urlPre);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(ElectronicSportsDataStore*))(Il2CppBase() + 0x4BC1CF4))(this);
	}
	template <typename T = bool> T IsNeedUid() {
		return ((T (*)(ElectronicSportsDataStore*))(Il2CppBase() + 0x4BC1DA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(ElectronicSportsDataStore*))(Il2CppBase() + 0x4BC1E68))(this);
	}

};

}
