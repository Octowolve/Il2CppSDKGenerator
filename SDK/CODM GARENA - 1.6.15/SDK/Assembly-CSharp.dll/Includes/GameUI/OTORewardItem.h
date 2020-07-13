#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class OTORewardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "OTORewardItem"));
	}

	template <typename T = uintptr_t> T& Num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& template() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& timeTemplate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _itemId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Frame() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& pressState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& eventStyle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& longPressTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemLongPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetItem(uint32_t itemId, int32_t num, int32_t expireTime, Il2CppString* frameColor) {
		return ((T (*)(OTORewardItem*, uint32_t, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x3A8BAB4))(this, itemId, num, expireTime, frameColor);
	}
	template <typename T = void> T OnItemPress(uintptr_t go, bool state) {
		return ((T (*)(OTORewardItem*, uintptr_t, bool))(Il2CppBase() + 0x3A8BFE4))(this, go, state);
	}
	template <typename T = void> T OnItemLongPress(bool isPress) {
		return ((T (*)(OTORewardItem*, bool))(Il2CppBase() + 0x3A8C0C0))(this, isPress);
	}
	template <typename T = void> T OnItemClick() {
		return ((T (*)(OTORewardItem*))(Il2CppBase() + 0x3A8C418))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(OTORewardItem*))(Il2CppBase() + 0x3A8C5B4))(this);
	}

};

}
