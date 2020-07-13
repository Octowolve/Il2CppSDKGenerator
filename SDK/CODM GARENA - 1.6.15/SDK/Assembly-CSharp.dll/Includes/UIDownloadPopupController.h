#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDownloadPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDownloadPopupController"));
	}

	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& mMapId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& mOkCallback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mCancellCallback() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& timer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& timerInterval() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallBacks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancellBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D4084))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D4128))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D4234))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D447C))(this);
	}
	template <typename T = void> T SetInfos(uint32_t mapId, Il2CppString* title, Il2CppString* content, Il2CppString* tip, Il2CppString* mapIcon, float cd) {
		return ((T (*)(UIDownloadPopupController*, uint32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x39D4658))(this, mapId, title, content, tip, mapIcon, cd);
	}
	template <typename T = void> T OnCutDown() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D4AF0))(this);
	}
	template <typename T = void> T SetCallBacks(void* okClick, uintptr_t cancelClick) {
		return ((T (*)(UIDownloadPopupController*, void*, uintptr_t))(Il2CppBase() + 0x39D4E64))(this, okClick, cancelClick);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D4F28))(this);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D4FF4))(this);
	}
	template <typename T = void> T OnCancellBtnClick() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D50D8))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D51A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D5254))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D525C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D5264))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D526C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(UIDownloadPopupController*))(Il2CppBase() + 0x39D5274))(this);
	}

};

}
