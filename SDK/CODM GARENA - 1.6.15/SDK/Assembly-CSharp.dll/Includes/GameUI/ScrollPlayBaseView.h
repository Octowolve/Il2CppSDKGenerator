#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScrollPlayBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScrollPlayBaseView"));
	}

	template <typename T = uintptr_t> T& ContainerRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& centerOnChild() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& panel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ToggleGrid() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ToggleDots() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& Rect() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BtnScrollPlay() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BtnEnter() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& OnItemChangedCallback() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = void*> T& OnItemStartScrollCallback() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& CAMERA_DISTANCE_Z() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DataList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_ItemWidth() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& m_ItemHeight() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& m_LobbyWaitTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_CurWaitTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_Press() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_Scroll() {
		return *(T*)((uintptr_t)this + 0xC5);
	}
	template <typename T = bool> T& isCloseAutoScorll() {
		return *(T*)((uintptr_t)this + 0xC6);
	}
	template <typename T = int32_t> T& curStaticIndex() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& ScrollItemCountMax() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppVector2> T& m_TargetPos() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HitInArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollToNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshToggleDots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllDots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__InitToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScrollPlayData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContentByItemIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnEnterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x447EE68))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x447EF5C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x447F16C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x447F3E4))(this);
	}
	template <typename T = void> T OnPress(bool press) {
		return ((T (*)(ScrollPlayBaseView*, bool))(Il2CppBase() + 0x447F750))(this, press);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 vec) {
		return ((T (*)(ScrollPlayBaseView*, Il2CppVector2))(Il2CppBase() + 0x447F8D8))(this, vec);
	}
	template <typename T = bool> T HitInArea() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x447FA68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x447FE74))(this);
	}
	template <typename T = void> T RefreshTime() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x4480568))(this);
	}
	template <typename T = void> T AutoScroll() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x4480780))(this);
	}
	template <typename T = void> T ScrollToNext() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x4481068))(this);
	}
	template <typename T = void> T RefreshToggleDots() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x4480A18))(this);
	}
	template <typename T = void> T CheckAllDots() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x4481300))(this);
	}
	template <typename T = void> T _InitToDefault(int32_t width, int32_t height) {
		return ((T (*)(ScrollPlayBaseView*, int32_t, int32_t))(Il2CppBase() + 0x44814FC))(this, width, height);
	}
	template <typename T = void> T SetScrollPlayData(Il2CppList<uintptr_t>* list, int32_t itemWidth, int32_t itemHeight) {
		return ((T (*)(ScrollPlayBaseView*, Il2CppList<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1E8565C))(this, list, itemWidth, itemHeight);
	}
	template <typename T = int32_t> T GetRealIndex(int32_t itemIndex) {
		return ((T (*)(ScrollPlayBaseView*, int32_t))(Il2CppBase() + 0x448199C))(this, itemIndex);
	}
	template <typename T = void> T SetContentByItemIndex(int32_t itemIndex) {
		return ((T (*)(ScrollPlayBaseView*, int32_t))(Il2CppBase() + 0x4480D90))(this, itemIndex);
	}
	template <typename T = void> T OnBtnEnterClick() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x447E6C8))(this);
	}
	template <typename T = bool> T IsDataValid() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x4481BF8))(this);
	}
	template <typename T = void> T SwitchToView(int32_t index) {
		return ((T (*)(ScrollPlayBaseView*, int32_t))(Il2CppBase() + 0x4481C98))(this, index);
	}
	template <typename T = bool> static T Updatem__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4481D38))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x4481D5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x4481D64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ScrollPlayBaseView*))(Il2CppBase() + 0x4481D6C))(this);
	}

};

}
