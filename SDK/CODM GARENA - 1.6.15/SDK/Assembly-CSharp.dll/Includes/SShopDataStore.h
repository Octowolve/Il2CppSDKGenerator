#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SShopDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SShopDataStore"));
	}

	template <typename T = uintptr_t> T& m_APVP() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_SPVP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Clan() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataByMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortByRule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRedPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewNumByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNotNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNewBadge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_APVP() {
		return ((T (*)(SShopDataStore*))(Il2CppBase() + 0x394DF8C))(this);
	}
	template <typename T = uintptr_t> T get_SPVP() {
		return ((T (*)(SShopDataStore*))(Il2CppBase() + 0x394DF94))(this);
	}
	template <typename T = uintptr_t> T get_Clan() {
		return ((T (*)(SShopDataStore*))(Il2CppBase() + 0x394DF9C))(this);
	}
	template <typename T = void> T SetDataByMode(Il2CppList<uintptr_t>* data, uintptr_t m_Data, Il2CppString* Items, uintptr_t Type) {
		return ((T (*)(SShopDataStore*, Il2CppList<uintptr_t>*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x394DFA4))(this, data, m_Data, Items, Type);
	}
	template <typename T = int32_t> T SortByRule(uintptr_t data1, uintptr_t data2) {
		return ((T (*)(SShopDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x394E770))(this, data1, data2);
	}
	template <typename T = void> T ClearRedPoints(uintptr_t shopType) {
		return ((T (*)(SShopDataStore*, uintptr_t))(Il2CppBase() + 0x394E89C))(this, shopType);
	}
	template <typename T = int32_t> T GetNewNumByType(uintptr_t Type) {
		return ((T (*)(SShopDataStore*, uintptr_t))(Il2CppBase() + 0x394EB2C))(this, Type);
	}
	template <typename T = void> T SetNotNew(uintptr_t data) {
		return ((T (*)(SShopDataStore*, uintptr_t))(Il2CppBase() + 0x394ED00))(this, data);
	}
	template <typename T = int32_t> T IsShowNewBadge(uintptr_t Type) {
		return ((T (*)(SShopDataStore*, uintptr_t))(Il2CppBase() + 0x394F044))(this, Type);
	}

};

}
