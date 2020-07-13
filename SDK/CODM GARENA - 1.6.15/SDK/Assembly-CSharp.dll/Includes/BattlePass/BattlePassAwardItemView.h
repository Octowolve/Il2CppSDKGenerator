#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassAwardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassAwardItemView"));
	}

	template <typename T = uintptr_t> T& ItemView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mItemId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mParentScrollView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCheckState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetItem(int32_t item_id, int32_t num, int32_t durable, int32_t index, uintptr_t ScrollView) {
		return ((T (*)(BattlePassAwardItemView*, int32_t, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3263034))(this, item_id, num, durable, index, ScrollView);
	}
	template <typename T = void> T OnClick(uintptr_t parm) {
		return ((T (*)(BattlePassAwardItemView*, uintptr_t))(Il2CppBase() + 0x32632E4))(this, parm);
	}
	template <typename T = void> T UpdateCheckState() {
		return ((T (*)(BattlePassAwardItemView*))(Il2CppBase() + 0x32634F8))(this);
	}

};

}
