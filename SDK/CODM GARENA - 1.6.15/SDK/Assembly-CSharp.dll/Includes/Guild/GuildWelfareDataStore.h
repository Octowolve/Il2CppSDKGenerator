#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildWelfareDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildWelfareDataStore"));
	}

	template <typename T = Il2CppDictionary<uint32_t, int32_t>*> T& dic_notify_red_point() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& is_init() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& m_GuildID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_WelfareEnable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WelfareList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_WelfareDetailShow() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_CliamedWelfareDetail() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGuildID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWelfareEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWelfareListForShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareWelfareList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWelfareCanClaim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildWelfareInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGuildWelfareInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildWelfareDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGuildWelfareDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestClaimGuildWelfare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseClaimGuildWelfare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyGuildWelfareAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWelfareAfterClaim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWelfareById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRedPointFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T get_WelfareEnable() {
		return ((T (*)(GuildWelfareDataStore*))(Il2CppBase() + 0x4745B4C))(this);
	}
	template <typename T = uintptr_t> T get_WelfareDetailShow() {
		return ((T (*)(GuildWelfareDataStore*))(Il2CppBase() + 0x4745B54))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(GuildWelfareDataStore*))(Il2CppBase() + 0x4745B5C))(this);
	}
	template <typename T = void> T SetGuildID(uint64_t guildID) {
		return ((T (*)(GuildWelfareDataStore*, uint64_t))(Il2CppBase() + 0x4745C84))(this, guildID);
	}
	template <typename T = void> T SetWelfareEnable(bool enable) {
		return ((T (*)(GuildWelfareDataStore*, bool))(Il2CppBase() + 0x4745D6C))(this, enable);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWelfareListForShow() {
		return ((T (*)(GuildWelfareDataStore*))(Il2CppBase() + 0x47451A4))(this);
	}
	template <typename T = int32_t> T CompareWelfareList(uintptr_t a, uintptr_t b) {
		return ((T (*)(GuildWelfareDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4745E3C))(this, a, b);
	}
	template <typename T = bool> T CheckWelfareCanClaim(uintptr_t welfare) {
		return ((T (*)(GuildWelfareDataStore*, uintptr_t))(Il2CppBase() + 0x47460C8))(this, welfare);
	}
	template <typename T = void> T RequestGuildWelfareInfo() {
		return ((T (*)(GuildWelfareDataStore*))(Il2CppBase() + 0x4744C08))(this);
	}
	template <typename T = void> T ResponseGuildWelfareInfo(uintptr_t response) {
		return ((T (*)(GuildWelfareDataStore*, uintptr_t))(Il2CppBase() + 0x47461C8))(this, response);
	}
	template <typename T = void> T RequestGuildWelfareDetail(uint32_t welfare_id) {
		return ((T (*)(GuildWelfareDataStore*, uint32_t))(Il2CppBase() + 0x47464AC))(this, welfare_id);
	}
	template <typename T = void> T ResponseGuildWelfareDetail(uintptr_t response) {
		return ((T (*)(GuildWelfareDataStore*, uintptr_t))(Il2CppBase() + 0x4746620))(this, response);
	}
	template <typename T = void> T RequestClaimGuildWelfare(uint32_t welfare_id) {
		return ((T (*)(GuildWelfareDataStore*, uint32_t))(Il2CppBase() + 0x4746A98))(this, welfare_id);
	}
	template <typename T = void> T ResponseClaimGuildWelfare(uintptr_t response) {
		return ((T (*)(GuildWelfareDataStore*, uintptr_t))(Il2CppBase() + 0x4746C0C))(this, response);
	}
	template <typename T = void> T NotifyGuildWelfareAdd(uintptr_t ntf) {
		return ((T (*)(GuildWelfareDataStore*, uintptr_t))(Il2CppBase() + 0x4747390))(this, ntf);
	}
	template <typename T = void> T UpdateWelfareAfterClaim(uint32_t welfare_id, uint32_t receiver_number) {
		return ((T (*)(GuildWelfareDataStore*, uint32_t, uint32_t))(Il2CppBase() + 0x474713C))(this, welfare_id, receiver_number);
	}
	template <typename T = uintptr_t> T GetWelfareById(uint32_t welfare_id) {
		return ((T (*)(GuildWelfareDataStore*, uint32_t))(Il2CppBase() + 0x47476D8))(this, welfare_id);
	}
	template <typename T = void> T ResetRedPointFlag() {
		return ((T (*)(GuildWelfareDataStore*))(Il2CppBase() + 0x4747890))(this);
	}
	template <typename T = int32_t> T CheckRedPoint() {
		return ((T (*)(GuildWelfareDataStore*))(Il2CppBase() + 0x4747978))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(GuildWelfareDataStore*))(Il2CppBase() + 0x4747B2C))(this);
	}

};

}
