#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SIItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SIItem"));
	}

	template <typename T = uint64_t> T& m_GUID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& m_ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsRepeated() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_Num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_bClientFakeItem() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_TimeType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_ExpireTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _quality() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ExpireDurationTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& deleteReason() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& soldCurrencyId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_StackCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix3_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStackCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataByCommmonData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataByEquippedItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear2New() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemByGUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uint64_t> T get_GUID() {
		return ((T (*)(SIItem*))(Il2CppBase() + 0x3924B94))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(SIItem*))(Il2CppBase() + 0x3924D08))(this);
	}
	template <typename T = int32_t> T get_Num() {
		return ((T (*)(SIItem*))(Il2CppBase() + 0x3926320))(this);
	}
	template <typename T = void> T SetNum(int32_t num) {
		return ((T (*)(SIItem*, int32_t))(Il2CppBase() + 0x39252F4))(this, num);
	}
	template <typename T = void> T AddNum(int32_t num) {
		return ((T (*)(SIItem*, int32_t))(Il2CppBase() + 0x39253A4))(this, num);
	}
	template <typename T = bool> T get_bClientFakeItem() {
		return ((T (*)(SIItem*))(Il2CppBase() + 0x39311D4))(this);
	}
	template <typename T = void> T set_bClientFakeItem(bool value) {
		return ((T (*)(SIItem*, bool))(Il2CppBase() + 0x39311DC))(this, value);
	}
	template <typename T = uintptr_t> T get_TimeType() {
		return ((T (*)(SIItem*))(Il2CppBase() + 0x3924B8C))(this);
	}
	template <typename T = void> T set_TimeType(uintptr_t value) {
		return ((T (*)(SIItem*, uintptr_t))(Il2CppBase() + 0x39311E4))(this, value);
	}
	template <typename T = int32_t> T get_ExpireTime() {
		return ((T (*)(SIItem*))(Il2CppBase() + 0x39311EC))(this);
	}
	template <typename T = void> T set_ExpireTime(int32_t value) {
		return ((T (*)(SIItem*, int32_t))(Il2CppBase() + 0x39311F4))(this, value);
	}
	template <typename T = uintptr_t> T get_quality() {
		return ((T (*)(SIItem*))(Il2CppBase() + 0x39311FC))(this);
	}
	template <typename T = int32_t> T get_StackCount() {
		return ((T (*)(SIItem*))(Il2CppBase() + 0x39312C8))(this);
	}
	template <typename T = void> T SetGUID(uint64_t guid) {
		return ((T (*)(SIItem*, uint64_t))(Il2CppBase() + 0x3925230))(this, guid);
	}
	template <typename T = void> T SetID(uint32_t id) {
		return ((T (*)(SIItem*, uint32_t))(Il2CppBase() + 0x3925188))(this, id);
	}
	template <typename T = void> T SetStackCount(int32_t count) {
		return ((T (*)(SIItem*, int32_t))(Il2CppBase() + 0x392C6AC))(this, count);
	}
	template <typename T = void> T SetDataByCommmonData(uintptr_t serverCommonData) {
		return ((T (*)(SIItem*, uintptr_t))(Il2CppBase() + 0x3925F70))(this, serverCommonData);
	}
	template <typename T = void> T SetDataByEquippedItem(uintptr_t serverEquippedItem) {
		return ((T (*)(SIItem*, uintptr_t))(Il2CppBase() + 0x3930170))(this, serverEquippedItem);
	}
	template <typename T = void> T Clear2New() {
		return ((T (*)(SIItem*))(Il2CppBase() + 0x3930534))(this);
	}
	template <typename T = uintptr_t> T GetItemByGUID(uint64_t guid, uintptr_t inventoryFrom) {
		return ((T (*)(SIItem*, uint64_t, uintptr_t))(Il2CppBase() + 0x39312D0))(this, guid, inventoryFrom);
	}
	template <typename T = void> T Copy(uintptr_t item) {
		return ((T (*)(SIItem*, uintptr_t))(Il2CppBase() + 0x3930370))(this, item);
	}

};

}
