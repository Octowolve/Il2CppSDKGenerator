#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsPicturePopupControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsPicturePopupController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& PIC_HEIGHT() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ActivityData() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCloseable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x35167CC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x35168D8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x351697C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x3516AB0))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(LiveOpsPicturePopupControllerEn*, uintptr_t))(Il2CppBase() + 0x34FB280))(this, data);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsPicturePopupControllerEn*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3516BCC))(this, url, bSuccess, texture);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x3516E28))(this);
	}
	template <typename T = void> T _OnBtnCloseClick() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x3516EC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x3516F7C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x3516F84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x3516F8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x3516F94))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsWindowCloseable() {
		return ((T (*)(LiveOpsPicturePopupControllerEn*))(Il2CppBase() + 0x3516F9C))(this);
	}

};

}
