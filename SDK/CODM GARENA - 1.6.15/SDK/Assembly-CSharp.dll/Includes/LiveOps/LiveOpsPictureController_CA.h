#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsPictureControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsPictureController_CA"));
	}

	template <typename T = Il2CppString*> static T& DEFAULT_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_TabData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ActivityData() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBtnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__BtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SwitchJumpTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x3514398))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x351443C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x3514548))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x35146E0))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data, Il2CppVector2 viewSize) {
		return ((T (*)(LiveOpsPictureControllerCA*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x34F65B4))(this, data, viewSize);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsPictureControllerCA*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3515BA8))(this, url, bSuccess, texture);
	}
	template <typename T = bool> T CheckBtnShow() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x3515864))(this);
	}
	template <typename T = void> T _BtnClicked() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x3515D10))(this);
	}
	template <typename T = void> T _SwitchJumpTypeClick() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x351645C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x3516700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x3516708))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x3516710))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsPictureControllerCA*))(Il2CppBase() + 0x3516718))(this);
	}

};

}
