#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class UIPVEOperationMethodSelectPanelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "UIPVEOperationMethodSelectPanelView"));
	}

	template <typename T = uintptr_t> T& m_ButtonAutoMethod() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_ButtonManualMehtod() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_SelectMapID() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonAutoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonManualClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_SelectMapID() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x4056AFC))(this);
	}
	template <typename T = void> T set_SelectMapID(int32_t value) {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*, int32_t))(Il2CppBase() + 0x4056B04))(this, value);
	}
	template <typename T = uintptr_t> T get_Callback() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x4056B0C))(this);
	}
	template <typename T = void> T set_Callback(uintptr_t value) {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*, uintptr_t))(Il2CppBase() + 0x4056B14))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x4056B1C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x4056BD4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x4056D7C))(this);
	}
	template <typename T = void> T OnButtonAutoClick() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x4056F24))(this);
	}
	template <typename T = void> T OnButtonManualClick() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x4057094))(this);
	}
	template <typename T = void> T OnButtonClick(bool autoFire) {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*, bool))(Il2CppBase() + 0x4056FCC))(this, autoFire);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x40571D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x40571D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UIPVEOperationMethodSelectPanelView*))(Il2CppBase() + 0x40571E0))(this);
	}

};

}
