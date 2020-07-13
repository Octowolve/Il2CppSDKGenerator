#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class GuestBindingPlatformDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "GuestBindingPlatformDataStore"));
	}

	template <typename T = Il2CppString*> static T& DataStoreSubscriberTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mChannelType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& linkedChannels() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& linkedChannelCallbacked() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsBindingPlatform() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& m_IsGuestBindPlatformPop() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = uint64_t> T& m_ActivityId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_CurrentButtonId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_BtnClickTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlatformState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBindingPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBindPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableLinkPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanLinkWithLinkedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLinkedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowLinkTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGuestNoChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLinkedChannels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShownLinkedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroup1LinkedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroup2LinkedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroup3LinkedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroup4LinkedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroup5LinkedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableMultiplyChannelLinked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsKingEnableMultiplyChannelLinked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsKoreaEnableMultiplyChannelLinked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFacebookRelatedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLinkedChannelsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Data2Flag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Flag2Channel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPowerby2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T get_CurrentChannelType() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355C30C))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_linkedChannels() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355B32C))(this);
	}
	template <typename T = void> T set_linkedChannels(Il2CppList<int32_t>* value) {
		return ((T (*)(GuestBindingPlatformDataStore*, Il2CppList<int32_t>*))(Il2CppBase() + 0x355C314))(this, value);
	}
	template <typename T = bool> T get_linkedChannelCallbacked() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355A980))(this);
	}
	template <typename T = void> T set_linkedChannelCallbacked(bool value) {
		return ((T (*)(GuestBindingPlatformDataStore*, bool))(Il2CppBase() + 0x355C31C))(this, value);
	}
	template <typename T = bool> T get_IsBindingPlatform() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355C324))(this);
	}
	template <typename T = void> T set_IsBindingPlatform(bool value) {
		return ((T (*)(GuestBindingPlatformDataStore*, bool))(Il2CppBase() + 0x355C32C))(this, value);
	}
	template <typename T = bool> T get_IsGuestBindPlatformPop() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355C334))(this);
	}
	template <typename T = void> T set_IsGuestBindPlatformPop(bool value) {
		return ((T (*)(GuestBindingPlatformDataStore*, bool))(Il2CppBase() + 0x355C33C))(this, value);
	}
	template <typename T = uint64_t> T get_ActivityID() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355C344))(this);
	}
	template <typename T = void> T set_ActivityID(uint64_t value) {
		return ((T (*)(GuestBindingPlatformDataStore*, uint64_t))(Il2CppBase() + 0x3530AD0))(this, value);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355C34C))(this);
	}
	template <typename T = void> T CheckPlatformState() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355C414))(this);
	}
	template <typename T = void> T GetBindingPlatform(bool isSuccess, Il2CppList<int32_t>* list) {
		return ((T (*)(GuestBindingPlatformDataStore*, bool, Il2CppList<int32_t>*))(Il2CppBase() + 0x355C770))(this, isSuccess, list);
	}
	template <typename T = void> T AddBindPlatform(uintptr_t channelType) {
		return ((T (*)(GuestBindingPlatformDataStore*, uintptr_t))(Il2CppBase() + 0x355CBE0))(this, channelType);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x35309E4))(this);
	}
	template <typename T = int32_t> T GetLoginPlatform() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355CD78))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355CE48))(this);
	}
	template <typename T = int32_t> T get_CurrentButtonId() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355CF30))(this);
	}
	template <typename T = void> T set_CurrentButtonId(int32_t value) {
		return ((T (*)(GuestBindingPlatformDataStore*, int32_t))(Il2CppBase() + 0x355A7E8))(this, value);
	}
	template <typename T = uintptr_t> T get_BtnClickTime() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355CF38))(this);
	}
	template <typename T = void> T set_BtnClickTime(uintptr_t value) {
		return ((T (*)(GuestBindingPlatformDataStore*, uintptr_t))(Il2CppBase() + 0x355A7F0))(this, value);
	}
	template <typename T = bool> T IsEnableLinkPlatform() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x3555A1C))(this);
	}
	template <typename T = bool> T IsCanLinkWithLinkedChannel() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355CF48))(this);
	}
	template <typename T = bool> T IsLinkedChannel(uintptr_t channel) {
		return ((T (*)(GuestBindingPlatformDataStore*, uintptr_t))(Il2CppBase() + 0x3557BB0))(this, channel);
	}
	template <typename T = bool> T IsShowLinkTip() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355DD70))(this);
	}
	template <typename T = bool> T IsGuestNoChannel() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355D5E0))(this);
	}
	template <typename T = uintptr_t> T get_CurrentLoginChannelType() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355E1A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetLinkedChannels() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355E324))(this);
	}
	template <typename T = uintptr_t> T GetShownLinkedChannel() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355E7D4))(this);
	}
	template <typename T = uintptr_t> T GetGroup1LinkedChannel() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x35561B8))(this);
	}
	template <typename T = uintptr_t> T GetGroup2LinkedChannel() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x3556354))(this);
	}
	template <typename T = uintptr_t> T GetGroup3LinkedChannel() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x35564F0))(this);
	}
	template <typename T = uintptr_t> T GetGroup4LinkedChannel() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355668C))(this);
	}
	template <typename T = uintptr_t> T GetGroup5LinkedChannel() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x3556828))(this);
	}
	template <typename T = bool> static T IsEnableMultiplyChannelLinked() {
		return ((T (*)(void *))(Il2CppBase() + 0x355EEF0))(0);
	}
	template <typename T = bool> static T IsKingEnableMultiplyChannelLinked() {
		return ((T (*)(void *))(Il2CppBase() + 0x355F194))(0);
	}
	template <typename T = bool> static T IsKoreaEnableMultiplyChannelLinked() {
		return ((T (*)(void *))(Il2CppBase() + 0x355F34C))(0);
	}
	template <typename T = uintptr_t> static T GetFacebookRelatedChannel() {
		return ((T (*)(void *))(Il2CppBase() + 0x355F4E8))(0);
	}
	template <typename T = int32_t> T GetLinkedChannelsCount() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355D4E0))(this);
	}
	template <typename T = int64_t> T Data2Flag(Il2CppList<int32_t>* data) {
		return ((T (*)(GuestBindingPlatformDataStore*, Il2CppList<int32_t>*))(Il2CppBase() + 0x355D6E0))(this, data);
	}
	template <typename T = uintptr_t> static T Flag2Channel(int64_t flag) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x355ECCC))(0, flag);
	}
	template <typename T = bool> static T IsPowerby2(int64_t n) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x355F6D4))(0, n);
	}
	template <typename T = Il2CppList<int32_t>*> static T get_LinkChannelGroup_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x355D8E8))(0);
	}
	template <typename T = Il2CppList<int32_t>*> static T get_LinkChannelGroup_2() {
		return ((T (*)(void *))(Il2CppBase() + 0x355776C))(0);
	}
	template <typename T = Il2CppList<int32_t>*> static T get_LinkChannelGroup_3() {
		return ((T (*)(void *))(Il2CppBase() + 0x355DB40))(0);
	}
	template <typename T = Il2CppList<int32_t>*> static T get_LinkChannelGroup_4() {
		return ((T (*)(void *))(Il2CppBase() + 0x355DC58))(0);
	}
	template <typename T = Il2CppList<int32_t>*> static T get_LinkChannelGroup_5() {
		return ((T (*)(void *))(Il2CppBase() + 0x355EBB4))(0);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(GuestBindingPlatformDataStore*))(Il2CppBase() + 0x355F888))(this);
	}

};

}
