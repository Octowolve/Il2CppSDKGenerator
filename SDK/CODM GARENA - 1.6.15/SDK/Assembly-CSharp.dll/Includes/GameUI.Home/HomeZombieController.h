#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class HomeZombieController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "HomeZombieController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_BtnSquadFightLocked() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarSquadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnEntryClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSingleLoadoutMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTestBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x232556C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x2325674))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x2325718))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x2325908))(this);
	}
	template <typename T = uintptr_t> T GetAvatarSquadType() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x2325AD8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x2325B78))(this);
	}
	template <typename T = void> T CheckButtonState() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x2325C24))(this);
	}
	template <typename T = void> T OnBtnEntryClick(uintptr_t zbType) {
		return ((T (*)(HomeZombieController*, uintptr_t))(Il2CppBase() + 0x23260BC))(this, zbType);
	}
	template <typename T = void> T OnLoadoutBtnClick() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x232615C))(this);
	}
	template <typename T = void> T ShowSingleLoadoutMember() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x232626C))(this);
	}
	template <typename T = void> T OnTestBtnClick() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x23263B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x23264CC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x23264D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x23264D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x23264DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetAvatarSquadType() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x23264E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x23264E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSingleLoadoutMember() {
		return ((T (*)(HomeZombieController*))(Il2CppBase() + 0x23264E8))(this);
	}

};

}
