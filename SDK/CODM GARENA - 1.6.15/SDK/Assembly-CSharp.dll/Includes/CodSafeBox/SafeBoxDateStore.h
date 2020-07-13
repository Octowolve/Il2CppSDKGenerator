#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CodSafeBox {

class SafeBoxDateStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CodSafeBox", "SafeBoxDateStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_SafeBoxes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& soldValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& soldoutBox() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& incrementPackageState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& uIncrementValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_bSoldOut() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSafeBoxList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProductPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentStateIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestProductPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NtfUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TagSoldOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnTagSoldOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FakeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A46700))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSafeBoxList() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A45918))(this);
	}
	template <typename T = Il2CppString*> T GetProductPrice() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A4699C))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentStateIcon() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A46D8C))(this);
	}
	template <typename T = uintptr_t> T GetCurrentState() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A46F04))(this);
	}
	template <typename T = uintptr_t> static T GetState(uint32_t uValue, uintptr_t box) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x3A47008))(0, uValue, box);
	}
	template <typename T = void> T RequestProductPrice() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A47104))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A4728C))(this);
	}
	template <typename T = void> T ResUpdate(Il2CppList<uintptr_t>* data) {
		return ((T (*)(SafeBoxDateStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3A45240))(this, data);
	}
	template <typename T = uint32_t> T get_uIncrementValue() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A47374))(this);
	}
	template <typename T = void> T set_uIncrementValue(uint32_t value) {
		return ((T (*)(SafeBoxDateStore*, uint32_t))(Il2CppBase() + 0x3A4737C))(this, value);
	}
	template <typename T = void> T NtfUpdate(Il2CppList<uintptr_t>* data) {
		return ((T (*)(SafeBoxDateStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3A45F84))(this, data);
	}
	template <typename T = void> T set_SoldOut(bool value) {
		return ((T (*)(SafeBoxDateStore*, bool))(Il2CppBase() + 0x3A47384))(this, value);
	}
	template <typename T = bool> T get_SoldOut() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A47530))(this);
	}
	template <typename T = uint32_t> T get_SoldValue() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A47538))(this);
	}
	template <typename T = void> T TagSoldOut() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A47398))(this);
	}
	template <typename T = void> T UnTagSoldOut() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A4748C))(this);
	}
	template <typename T = void> T FakeData() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A47540))(this);
	}
	template <typename T = bool> T NtfUpdatem__0(uintptr_t iter) {
		return ((T (*)(SafeBoxDateStore*, uintptr_t))(Il2CppBase() + 0x3A47690))(this, iter);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(SafeBoxDateStore*))(Il2CppBase() + 0x3A476F4))(this);
	}

};

}
