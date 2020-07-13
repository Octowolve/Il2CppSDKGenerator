#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class SuiteTutorialController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "SuiteTutorialController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_CurrentTabType() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateArrowStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateToggleStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftArrowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightArrowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_NotifySuiteTutorialFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B14214))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B142B8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B143C4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B145CC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B14908))(this);
	}
	template <typename T = void> T UpdateArrowStatus() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B14C24))(this);
	}
	template <typename T = void> T UpdateToggleStatus() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B14E90))(this);
	}
	template <typename T = void> T OnLeftArrowClick() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B15004))(this);
	}
	template <typename T = void> T OnRightArrowClick() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B150C0))(this);
	}
	template <typename T = void> T OnToggleChange() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B151C4))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B15330))(this);
	}
	template <typename T = void> T T_NotifySuiteTutorialFinish() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B153EC))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B15664))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B15824))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B1582C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B15834))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B1583C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SuiteTutorialController*))(Il2CppBase() + 0x4B15844))(this);
	}

};

}
