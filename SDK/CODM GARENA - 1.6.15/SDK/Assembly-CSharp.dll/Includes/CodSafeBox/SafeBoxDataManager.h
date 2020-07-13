#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CodSafeBox {

class SafeBoxDataManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CodSafeBox", "SafeBoxDataManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_SafeBoxDataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqSafeBoxActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResSafeBoxData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSafeBoxGMTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResSafeBoxGMTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSafeBoxBuyCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResSafeBoxBuyCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NtfSafeBoxUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenSafeBoxMainView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A44D00))(0);
	}
	template <typename T = void> T ReqSafeBoxActivity() {
		return ((T (*)(SafeBoxDataManager*))(Il2CppBase() + 0x3A44E14))(this);
	}
	template <typename T = bool> T ResSafeBoxData(uintptr_t Msg, uintptr_t* errStr) {
		return ((T (*)(SafeBoxDataManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3A44F44))(this, Msg, errStr);
	}
	template <typename T = void> T RequestSafeBoxGMTest(int32_t nCmdType) {
		return ((T (*)(SafeBoxDataManager*, int32_t))(Il2CppBase() + 0x3A45304))(this, nCmdType);
	}
	template <typename T = bool> T ResSafeBoxGMTest(uintptr_t Msg, uintptr_t* errStr) {
		return ((T (*)(SafeBoxDataManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3A45470))(this, Msg, errStr);
	}
	template <typename T = void> T RequestSafeBoxBuyCheck() {
		return ((T (*)(SafeBoxDataManager*))(Il2CppBase() + 0x3A4575C))(this);
	}
	template <typename T = bool> T ResSafeBoxBuyCheck(uintptr_t Msg, uintptr_t* errStr) {
		return ((T (*)(SafeBoxDataManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3A459B8))(this, Msg, errStr);
	}
	template <typename T = bool> T NtfSafeBoxUpdateData(uintptr_t message) {
		return ((T (*)(SafeBoxDataManager*, uintptr_t))(Il2CppBase() + 0x3A45D38))(this, message);
	}
	template <typename T = void> T OpenSafeBoxMainView(int32_t entrance) {
		return ((T (*)(SafeBoxDataManager*, int32_t))(Il2CppBase() + 0x3A46210))(this, entrance);
	}

};

}
