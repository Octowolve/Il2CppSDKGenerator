#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsExchangeItemViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsExchangeItemView_CA"));
	}

	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BtnReward() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelReward() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpriteDisabledReward() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelDisabledReward() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BtnTip() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpriteTipHighLight() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& RememberWidget() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ExchangeRemember() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ExchangeLimitTip() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemTemplate_Left() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RightRootWidget() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ExchangeSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_RootWidget() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationExchangeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_NotMeetConditionColor() {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*))(Il2CppBase() + 0x353EA18))(this);
	}
	template <typename T = uintptr_t> T get_MeetConditionColor() {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*))(Il2CppBase() + 0x353EADC))(this);
	}
	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*))(Il2CppBase() + 0x353EBA0))(this);
	}
	template <typename T = uintptr_t> T get_RootWidget() {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*))(Il2CppBase() + 0x353EC50))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*))(Il2CppBase() + 0x353ED38))(this);
	}
	template <typename T = void> T GoToDetails(uintptr_t obj) {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*, uintptr_t))(Il2CppBase() + 0x353F17C))(this, obj);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*, uintptr_t))(Il2CppBase() + 0x353D500))(this, data);
	}
	template <typename T = void> T AdaptationExchangeItem() {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*))(Il2CppBase() + 0x353F83C))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*))(Il2CppBase() + 0x353EF44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsExchangeItemViewCA*))(Il2CppBase() + 0x353FCEC))(this);
	}

};

}
