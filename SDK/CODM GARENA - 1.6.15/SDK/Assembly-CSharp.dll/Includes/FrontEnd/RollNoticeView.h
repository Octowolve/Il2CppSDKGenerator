#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class RollNoticeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "RollNoticeView"));
	}

	template <typename T = uintptr_t> T& m_Ctrl() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& bShowing() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& MaxShowTextWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& floatSpeed() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceShowNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RollNoticeView*))(Il2CppBase() + 0x3855AF0))(this);
	}
	template <typename T = void> T BindController(uintptr_t ctrl) {
		return ((T (*)(RollNoticeView*, uintptr_t))(Il2CppBase() + 0x38539BC))(this, ctrl);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RollNoticeView*))(Il2CppBase() + 0x3855C18))(this);
	}
	template <typename T = void> T ForceShowNext() {
		return ((T (*)(RollNoticeView*))(Il2CppBase() + 0x38542E8))(this);
	}
	template <typename T = void> T ShowNotice(bool bShow) {
		return ((T (*)(RollNoticeView*, bool))(Il2CppBase() + 0x3855E18))(this, bShow);
	}
	template <typename T = void> T HideNotice() {
		return ((T (*)(RollNoticeView*))(Il2CppBase() + 0x38562E8))(this);
	}
	template <typename T = void> T HideRoot() {
		return ((T (*)(RollNoticeView*))(Il2CppBase() + 0x3856430))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(RollNoticeView*))(Il2CppBase() + 0x385658C))(this);
	}

};

}
