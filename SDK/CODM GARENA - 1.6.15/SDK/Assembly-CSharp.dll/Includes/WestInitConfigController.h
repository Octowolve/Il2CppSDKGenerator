#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WestInitConfigController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WestInitConfigController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& settingModel() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4C930))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4C9D4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4CBA4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4CCF8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4CDDC))(this);
	}
	template <typename T = void> T SetData() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4CE80))(this);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4D22C))(this);
	}
	template <typename T = void> T UpdateValue() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4D2D0))(this);
	}
	template <typename T = void> T SendServer(Il2CppString* CmdContent) {
		return ((T (*)(WestInitConfigController*, Il2CppString*))(Il2CppBase() + 0x4A4D8F0))(this, CmdContent);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4DA6C))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(WestInitConfigController*, int32_t))(Il2CppBase() + 0x4A4DB0C))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(WestInitConfigController*, uintptr_t))(Il2CppBase() + 0x4A4DC48))(this, message);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4DEE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4DEEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4DEF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4DEFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(WestInitConfigController*))(Il2CppBase() + 0x4A4DF04))(this);
	}

};

}
