#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildTalkItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildTalkItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildTalkItemController*))(Il2CppBase() + 0x47410C0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildTalkItemController*))(Il2CppBase() + 0x4741164))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildTalkItemController*))(Il2CppBase() + 0x4741270))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildTalkItemController*))(Il2CppBase() + 0x47413CC))(this);
	}
	template <typename T = void> T OnJoinBtnClick() {
		return ((T (*)(GuildTalkItemController*))(Il2CppBase() + 0x4741528))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(GuildTalkItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x47417E4))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildTalkItemController*))(Il2CppBase() + 0x4741CFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildTalkItemController*))(Il2CppBase() + 0x4741D04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildTalkItemController*))(Il2CppBase() + 0x4741D0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildTalkItemController*))(Il2CppBase() + 0x4741D14))(this);
	}

};

}
