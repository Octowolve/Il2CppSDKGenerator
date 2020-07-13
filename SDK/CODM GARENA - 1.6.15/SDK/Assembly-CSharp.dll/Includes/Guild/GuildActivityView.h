#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildActivityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildActivityView"));
	}

	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ScrollBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SelfDailyActivityLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& GuildDailyActivityLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SelfActivityProgressBar() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& GuildActivityProgressBar() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SelfRewardDescList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GuildRewardDescList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SelfItemView() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& InfoRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& GuildInfoBtn() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& GuildInfoCloseBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& GuildLevelLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& GuildActivityDesc() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DescLabelList() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ValLabelList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& m_CurSelfActive() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& m_SelfActiveMax() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& m_CurGuildActive() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& m_GuildActiveMax() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uint32_t> T& m_SelfPrizeBit() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uint32_t> T& m_GuildPrizeBit() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SelfPrizeInfolist() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_GuildPrizeInfoList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_GuildLevelRewardScrollView() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_GuildLevelRewardScrollBar() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& selfPrizeLabel1() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& selfPrizeLabel2() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& selfPrizeLabel3() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& guildPrizeLabel1() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& guildPrizeLabel2() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& guildPrizeLabel3() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPrizeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePrizeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelfActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGuildActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBarPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetTitle() {
		return ((T (*)(GuildActivityView*))(Il2CppBase() + 0x3E357CC))(this);
	}
	template <typename T = void> T SetPrizeInfo(Il2CppArray<uintptr_t>* selfPrizeInfolist, Il2CppArray<uintptr_t>* guildPrizeInfoList) {
		return ((T (*)(GuildActivityView*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E36F9C))(this, selfPrizeInfolist, guildPrizeInfoList);
	}
	template <typename T = void> T UpdateState() {
		return ((T (*)(GuildActivityView*))(Il2CppBase() + 0x3E39430))(this);
	}
	template <typename T = void> T UpdatePrizeState(uint32_t selfPrizeBit, uint32_t guildPrizeBit) {
		return ((T (*)(GuildActivityView*, uint32_t, uint32_t))(Il2CppBase() + 0x3E36C98))(this, selfPrizeBit, guildPrizeBit);
	}
	template <typename T = void> T UpdateSelfActive(int32_t selfActive) {
		return ((T (*)(GuildActivityView*, int32_t))(Il2CppBase() + 0x3E37B04))(this, selfActive);
	}
	template <typename T = void> T UpdateGuildActive(int32_t guildActive) {
		return ((T (*)(GuildActivityView*, int32_t))(Il2CppBase() + 0x3E37C5C))(this, guildActive);
	}
	template <typename T = Il2CppVector3> T GetBarPosition(uintptr_t progress, float val, Il2CppVector3 offset) {
		return ((T (*)(GuildActivityView*, uintptr_t, float, Il2CppVector3))(Il2CppBase() + 0x3E39108))(this, progress, val, offset);
	}

};

}
