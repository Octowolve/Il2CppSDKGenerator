#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlatformBasicWidget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformBasicWidget"));
	}

	template <typename T = uintptr_t> T& panel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EditableWidget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NormalWidget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& HighlightWidget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_UIRoot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_ScreenScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Normal_Alpha() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Highlight_Alpha() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_TargetPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_SlerpToTarget() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_WidgetWidth() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_WidgetHeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_SlerpTargetDire() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BorderPosList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DistList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_CurrentPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_IsPress() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_IsOpen() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = float> T& m_PressTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& FadeTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlatformBasicClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWidgetHighlight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlatformBasicWidget*))(Il2CppBase() + 0x47ED4D0))(this);
	}
	template <typename T = void> T OnWidgetDrag(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(PlatformBasicWidget*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x47ED7D0))(this, go, delta);
	}
	template <typename T = void> T CheckInBox(Il2CppVector2 vec) {
		return ((T (*)(PlatformBasicWidget*, Il2CppVector2))(Il2CppBase() + 0x47ED958))(this, vec);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlatformBasicWidget*))(Il2CppBase() + 0x47EDE34))(this);
	}
	template <typename T = void> T OnWidgetPress(uintptr_t go, bool press) {
		return ((T (*)(PlatformBasicWidget*, uintptr_t, bool))(Il2CppBase() + 0x47EE17C))(this, go, press);
	}
	template <typename T = void> T ComputeTargetPos() {
		return ((T (*)(PlatformBasicWidget*))(Il2CppBase() + 0x47EE258))(this);
	}
	template <typename T = void> T OnWidgetClick(uintptr_t go) {
		return ((T (*)(PlatformBasicWidget*, uintptr_t))(Il2CppBase() + 0x47EE810))(this, go);
	}
	template <typename T = void> T OnPlatformBasicClose() {
		return ((T (*)(PlatformBasicWidget*))(Il2CppBase() + 0x47EEAD0))(this);
	}
	template <typename T = void> T SetWidgetHighlight(bool highlight) {
		return ((T (*)(PlatformBasicWidget*, bool))(Il2CppBase() + 0x47EE9C8))(this, highlight);
	}

};

}
