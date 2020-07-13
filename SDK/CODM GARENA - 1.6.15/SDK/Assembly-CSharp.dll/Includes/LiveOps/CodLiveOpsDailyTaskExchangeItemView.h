#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsDailyTaskExchangeItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsDailyTaskExchangeItemView"));
	}

	template <typename T = uintptr_t> T& SpriteExchangeItemIcon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LabelExchangeItemOwnNum() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LabelExchangeItemNumNeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BtnReward() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LabelReward() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SpriteRewarded() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& SpriteNotReward() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelNotReward() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnTip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SpriteTipHighLight() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnTipClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_NotMeetConditionColor() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeItemView*))(Il2CppBase() + 0x3538690))(this);
	}
	template <typename T = uintptr_t> T get_MeetConditionColor() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeItemView*))(Il2CppBase() + 0x3538754))(this);
	}
	template <typename T = void> T SetData(uintptr_t data, int32_t minWidth) {
		return ((T (*)(CodLiveOpsDailyTaskExchangeItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x3538818))(this, data, minWidth);
	}
	template <typename T = void> T OnBtnTipClick() {
		return ((T (*)(CodLiveOpsDailyTaskExchangeItemView*))(Il2CppBase() + 0x3538394))(this);
	}
	template <typename T = Il2CppString*> T GetNumFormat(int32_t num) {
		return ((T (*)(CodLiveOpsDailyTaskExchangeItemView*, int32_t))(Il2CppBase() + 0x35388E4))(this, num);
	}
	template <typename T = void> T xLuaBaseProxy_SetData(uintptr_t P0, int32_t P1) {
		return ((T (*)(CodLiveOpsDailyTaskExchangeItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x3538AD4))(this, P0, P1);
	}

};

}
