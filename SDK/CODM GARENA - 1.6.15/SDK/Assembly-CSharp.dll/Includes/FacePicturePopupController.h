#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePicturePopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePicturePopupController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_bForceClose() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseBaseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE23EC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE24F8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE259C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE26CC))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data, bool bFoceClose) {
		return ((T (*)(FacePicturePopupController*, uintptr_t, bool))(Il2CppBase() + 0x4BE0820))(this, data, bFoceClose);
	}
	template <typename T = void> T _OnBtnGoClick() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE2F30))(this);
	}
	template <typename T = void> T OnBtnCloseBaseClick() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3280))(this);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3384))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3424))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3628))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3630))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3638))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3640))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnCloseBaseClick() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3648))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3650))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(FacePicturePopupController*))(Il2CppBase() + 0x4BE3658))(this);
	}

};

}
