#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassComicPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassComicPopupController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& mStr_full_Cdn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& bpDs() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& CurrentComicData() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& isCloseWindow() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& downloadCode() {
		return *(T*)((uintptr_t)this + 0x5C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetComicTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x327EFE8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x327F08C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x327F1DC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x327F284))(this);
	}
	template <typename T = void> T SetData(uintptr_t ComicData) {
		return ((T (*)(BattlePassComicPopupController*, uintptr_t))(Il2CppBase() + 0x327D8B0))(this, ComicData);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(BattlePassComicPopupController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x327F584))(this, url, isSuccess, texture);
	}
	template <typename T = void> T SetComicTexture(uintptr_t texture) {
		return ((T (*)(BattlePassComicPopupController*, uintptr_t))(Il2CppBase() + 0x327FCA8))(this, texture);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x3280180))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x3280230))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x32802E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x32802E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x32802F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x32802F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x3280300))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassComicPopupController*))(Il2CppBase() + 0x3280308))(this);
	}

};

}
