#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdvertisingDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdvertisingDataStore"));
	}

	template <typename T = uintptr_t> T& m_AdvertisingInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_AdvertisingInfoValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_CurrentAdIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_CurretnAdPlacementName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_LuckyBoardShopId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_LuckyBoardMaxBuyNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_AdNumLeft() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsADShowLobby() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsADPutGray() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLobbyADShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAdPutGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGetAdevertising() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAdInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_AdvertisingInfo() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1C308))(this);
	}
	template <typename T = void> T set_AdvertisingInfo(uintptr_t value) {
		return ((T (*)(AdvertisingDataStore*, uintptr_t))(Il2CppBase() + 0x4A1E0A0))(this, value);
	}
	template <typename T = bool> T get_AdvertisingInfoValue() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1C310))(this);
	}
	template <typename T = int32_t> T get_CuttentAdIndex() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1CCD8))(this);
	}
	template <typename T = Il2CppString*> T get_CurrentAdPlacementName() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1D204))(this);
	}
	template <typename T = int32_t> T get_LuckyBoardShopId() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1E0A8))(this);
	}
	template <typename T = int32_t> T get_LuckyBoardMaxBuyNum() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1E0B0))(this);
	}
	template <typename T = void> T set_LuckyBoardMaxBuyNum(int32_t value) {
		return ((T (*)(AdvertisingDataStore*, int32_t))(Il2CppBase() + 0x4A1E0B8))(this, value);
	}
	template <typename T = int32_t> T get_AdNumLeft() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1D1FC))(this);
	}
	template <typename T = void> T set_AdNumLeft(int32_t value) {
		return ((T (*)(AdvertisingDataStore*, int32_t))(Il2CppBase() + 0x4A1D574))(this, value);
	}
	template <typename T = bool> T get_IsAdShowLobby() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1E0C0))(this);
	}
	template <typename T = bool> T get_IsADPutGray() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1E1E8))(this);
	}
	template <typename T = void> T CheckLobbyADShow() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1E0D8))(this);
	}
	template <typename T = void> T CheckAdPutGray() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1E200))(this);
	}
	template <typename T = void> T ResponseGetAdevertising(uintptr_t res) {
		return ((T (*)(AdvertisingDataStore*, uintptr_t))(Il2CppBase() + 0x4A1C85C))(this, res);
	}
	template <typename T = void> T ResetAdInfo() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1DDFC))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1E388))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(AdvertisingDataStore*))(Il2CppBase() + 0x4A1E42C))(this);
	}

};

}
