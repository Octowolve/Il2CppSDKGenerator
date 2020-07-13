#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class SpvpPlaylistDetailWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "SpvpPlaylistDetailWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_DetailType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_TimeNum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_RefreshUITimer() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x21477D4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x21478E0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x2147984))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x2147C48))(this);
	}
	template <typename T = void> T UpdateView(int32_t detailType) {
		return ((T (*)(SpvpPlaylistDetailWindowController*, int32_t))(Il2CppBase() + 0x210AA3C))(this, detailType);
	}
	template <typename T = void> T OnBtnCloseClick() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x2147DD0))(this);
	}
	template <typename T = void> T SetTimer() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x2147B18))(this);
	}
	template <typename T = void> T RefreshAllUI() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x2147EB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x21496E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x21496EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x21496F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpvpPlaylistDetailWindowController*))(Il2CppBase() + 0x21496FC))(this);
	}

};

}
