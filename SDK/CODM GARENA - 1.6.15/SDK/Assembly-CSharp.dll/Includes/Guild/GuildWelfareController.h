#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildWelfareController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildWelfareController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ItemEasyList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_ItemNum() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& s_ItemWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& s_ItemHight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& ScrollDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4743F64))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4744038))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4744370))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4744724))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4744AB8))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildWelfareController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4744D60))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4744ECC))(this);
	}
	template <typename T = void> T OnTipsClick() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x47452D8))(this);
	}
	template <typename T = void> T OnRightBtnClick() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4745468))(this);
	}
	template <typename T = void> T OnLeftBtnClick() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x47455A0))(this);
	}
	template <typename T = void> T OnScrollEnd() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x47456DC))(this);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4745A3C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4745A40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4745A48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4745A50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4745A58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildWelfareController*))(Il2CppBase() + 0x4745A60))(this);
	}

};

}
