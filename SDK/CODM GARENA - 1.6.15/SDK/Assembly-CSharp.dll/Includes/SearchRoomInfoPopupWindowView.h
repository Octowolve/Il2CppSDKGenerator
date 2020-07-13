#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SearchRoomInfoPopupWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SearchRoomInfoPopupWindowView"));
	}

	template <typename T = uintptr_t> T& BtnCloseWindow() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& InputRoomId() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BtnConfirmSearch() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& WidgetRoomIdClear() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnClear() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& WidgetSearchFailed() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& WidgetSearchSucceed() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LabelRoomId() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LabelIsNeedPassword() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LabelModeCategory() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& LabelModeName() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LabelMapName() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& WidgetPasswordInput() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& InputPassword() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& WidgetPasswordClear() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& BtnPasswordClear() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& BtnJoinRoom() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& WidgetJoinDisable() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& WidgetJoinEnable() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_BrDS() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView_RoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView_CommonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView_MpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView_BrInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(SearchRoomInfoPopupWindowView*))(Il2CppBase() + 0x3C064F8))(this);
	}
	template <typename T = uintptr_t> T get_BrDS() {
		return ((T (*)(SearchRoomInfoPopupWindowView*))(Il2CppBase() + 0x3C065A8))(this);
	}
	template <typename T = void> T UpdateView_RoomInfo(uintptr_t data) {
		return ((T (*)(SearchRoomInfoPopupWindowView*, uintptr_t))(Il2CppBase() + 0x3C06330))(this, data);
	}
	template <typename T = void> T UpdateView_CommonInfo(uintptr_t data) {
		return ((T (*)(SearchRoomInfoPopupWindowView*, uintptr_t))(Il2CppBase() + 0x3C06658))(this, data);
	}
	template <typename T = void> T UpdateView_MpInfo(uintptr_t data) {
		return ((T (*)(SearchRoomInfoPopupWindowView*, uintptr_t))(Il2CppBase() + 0x3C06A5C))(this, data);
	}
	template <typename T = void> T UpdateView_BrInfo(uintptr_t data) {
		return ((T (*)(SearchRoomInfoPopupWindowView*, uintptr_t))(Il2CppBase() + 0x3C06EA8))(this, data);
	}

};

}
