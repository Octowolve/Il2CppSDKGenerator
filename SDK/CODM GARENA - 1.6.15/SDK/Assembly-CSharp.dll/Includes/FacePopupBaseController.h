#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePopupBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePopupBaseController"));
	}

	template <typename T = uintptr_t> T& mBaseView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& FacePicId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& FacePicClick() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& FacePictureType() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseBaseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMessageWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceCloseFacePopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCloseable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBEBF8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBED04))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBEDA4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBEED0))(this);
	}
	template <typename T = void> T OnBtnCloseBaseClick() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBEFE4))(this);
	}
	template <typename T = void> T SendMessageWhenClose() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF0A0))(this);
	}
	template <typename T = void> T ForceCloseFacePopup() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF188))(this);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF23C))(this);
	}
	template <typename T = bool> T OnReturnKeyPressed() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF2DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF390))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF398))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF3A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF3A8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsWindowCloseable() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF3B0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPressed() {
		return ((T (*)(FacePopupBaseController*))(Il2CppBase() + 0x3CBF3B8))(this);
	}

};

}
