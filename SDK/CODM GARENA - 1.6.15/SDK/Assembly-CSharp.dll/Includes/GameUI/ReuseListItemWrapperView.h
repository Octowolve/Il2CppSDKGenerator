#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReuseListItemWrapperView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReuseListItemWrapperView"));
	}

	template <typename T = uintptr_t> T& m_Button() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_ButtonCollider() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_IsHide() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsHide() {
		return ((T (*)(ReuseListItemWrapperView*))(Il2CppBase() + 0x3ACCA60))(this);
	}
	template <typename T = void> T set_IsHide(bool value) {
		return ((T (*)(ReuseListItemWrapperView*, bool))(Il2CppBase() + 0x3ACC5AC))(this, value);
	}
	template <typename T = uintptr_t> T get_Controller() {
		return ((T (*)(ReuseListItemWrapperView*))(Il2CppBase() + 0x3ACAE7C))(this);
	}
	template <typename T = void> T set_Controller(uintptr_t value) {
		return ((T (*)(ReuseListItemWrapperView*, uintptr_t))(Il2CppBase() + 0x3ACB854))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ReuseListItemWrapperView*))(Il2CppBase() + 0x3ACCA68))(this);
	}
	template <typename T = void> T SetViewSize(int32_t width, int32_t height) {
		return ((T (*)(ReuseListItemWrapperView*, int32_t, int32_t))(Il2CppBase() + 0x3ACC240))(this, width, height);
	}
	template <typename T = void> T EnableClick(bool enableClick) {
		return ((T (*)(ReuseListItemWrapperView*, bool))(Il2CppBase() + 0x3ACC3E4))(this, enableClick);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ReuseListItemWrapperView*))(Il2CppBase() + 0x3ACCB10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ReuseListItemWrapperView*))(Il2CppBase() + 0x3ACCBB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ReuseListItemWrapperView*))(Il2CppBase() + 0x3ACCBC0))(this);
	}

};

}
