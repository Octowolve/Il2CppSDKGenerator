#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIItemTemplate2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIItemTemplate_2"));
	}

	template <typename T = uintptr_t> T& ItemNameLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NumberLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ItemIconSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ItemQualitySprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LockObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ReddotObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NewFlagObj() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SelectedObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TimeObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& timeLimitTemplate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ChipFlagObj() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ChipView() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TipHolder() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConflictData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetItemData(uintptr_t itemData) {
		return ((T (*)(UIItemTemplate2*, uintptr_t))(Il2CppBase() + 0x3AF8658))(this, itemData);
	}
	template <typename T = void> T SetItemData_1(int32_t id, int32_t num, uintptr_t expireType, int32_t duration) {
		return ((T (*)(UIItemTemplate2*, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3AF87D8))(this, id, num, expireType, duration);
	}
	template <typename T = void> T SetConflictData(uintptr_t itemType, uintptr_t expireType, int32_t duration, int32_t num) {
		return ((T (*)(UIItemTemplate2*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3AF905C))(this, itemType, expireType, duration, num);
	}

};

}
