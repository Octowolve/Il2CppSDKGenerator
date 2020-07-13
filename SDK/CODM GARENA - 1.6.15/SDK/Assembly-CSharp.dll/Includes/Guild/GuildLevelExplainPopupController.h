#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildLevelExplainPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildLevelExplainPopupController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mExplainEasyList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mActiveEasyList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mExpEasyList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExplainTabBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActiveTabClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExpTabBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC2944))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC29E8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC3488))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC3690))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC386C))(this);
	}
	template <typename T = void> T OnExplainTabBtnClicked() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC391C))(this);
	}
	template <typename T = void> T OnActiveTabClicked() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC3AC0))(this);
	}
	template <typename T = void> T OnExpTabBtnClicked() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC3C64))(this);
	}
	template <typename T = bool> static T Initm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3BC3E08))(0, x);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC3E44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC3E4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC3E54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC3E5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildLevelExplainPopupController*))(Il2CppBase() + 0x3BC3E64))(this);
	}

};

}
