#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaylistTypeItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaylistTypeItemView"));
	}

	template <typename T = uintptr_t> T& WidgetRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelNormal() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelHighlight() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BtnSelect() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ToggleSelect() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ObjRedDot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_PlaylistType() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_bRedDot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_CallBackHandler() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PlaylistTypeItemView*))(Il2CppBase() + 0x47FDE1C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PlaylistTypeItemView*))(Il2CppBase() + 0x47FDF34))(this);
	}
	template <typename T = void> T SetView(uintptr_t data, int32_t selectPlaylistType, uintptr_t callback, bool bIsCheckRedDot, bool bIsMultiType, int32_t selectedNum) {
		return ((T (*)(PlaylistTypeItemView*, uintptr_t, int32_t, uintptr_t, bool, bool, int32_t))(Il2CppBase() + 0x47FE038))(this, data, selectPlaylistType, callback, bIsCheckRedDot, bIsMultiType, selectedNum);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(PlaylistTypeItemView*))(Il2CppBase() + 0x47FE42C))(this);
	}
	template <typename T = void> T HideRedDot() {
		return ((T (*)(PlaylistTypeItemView*))(Il2CppBase() + 0x47FE688))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PlaylistTypeItemView*))(Il2CppBase() + 0x47FE788))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PlaylistTypeItemView*))(Il2CppBase() + 0x47FE790))(this);
	}

};

}
