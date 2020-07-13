#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttackableInfoDebugItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttackableInfoDebugItem"));
	}

	template <typename T = uintptr_t> T& m_DebugInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_WorldCamera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_UICamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsShow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsShow() {
		return ((T (*)(AttackableInfoDebugItem*))(Il2CppBase() + 0x44D0298))(this);
	}
	template <typename T = void> T InitItem() {
		return ((T (*)(AttackableInfoDebugItem*))(Il2CppBase() + 0x44D02A0))(this);
	}
	template <typename T = void> T SetDebugInfo(Il2CppString* content) {
		return ((T (*)(AttackableInfoDebugItem*, Il2CppString*))(Il2CppBase() + 0x44D03D4))(this, content);
	}
	template <typename T = void> T HideItem(bool isHide) {
		return ((T (*)(AttackableInfoDebugItem*, bool))(Il2CppBase() + 0x44D04F4))(this, isHide);
	}
	template <typename T = void> T ShowItem(bool isShow) {
		return ((T (*)(AttackableInfoDebugItem*, bool))(Il2CppBase() + 0x44D0630))(this, isShow);
	}
	template <typename T = void> T ResetItem() {
		return ((T (*)(AttackableInfoDebugItem*))(Il2CppBase() + 0x44D06EC))(this);
	}
	template <typename T = void> T UpdatePosition(Il2CppVector3 pos) {
		return ((T (*)(AttackableInfoDebugItem*, Il2CppVector3))(Il2CppBase() + 0x44D0860))(this, pos);
	}

};

}
