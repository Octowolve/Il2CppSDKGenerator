#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class AutoRepairPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "AutoRepairPopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& bRedoUpdate() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& bResetSettings() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = bool> T& bDeleteMaps() {
		return *(T*)((uintptr_t)this + 0x56);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRepair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteMapsChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetSettingsChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRedoUpdateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelectTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33CF2A8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33CF34C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33CF458))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33CF6E0))(this);
	}
	template <typename T = void> T OnStartBtnClick() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33CF968))(this);
	}
	template <typename T = void> T DoRepair() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33CFA48))(this);
	}
	template <typename T = void> T OnMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(AutoRepairPopController*, uintptr_t, int32_t))(Il2CppBase() + 0x33CFFD4))(this, result, userContext);
	}
	template <typename T = void> T OnDeleteMapsChange() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33D00D0))(this);
	}
	template <typename T = void> T OnResetSettingsChange() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33D0198))(this);
	}
	template <typename T = void> T OnRedoUpdateChange() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33D058C))(this);
	}
	template <typename T = void> T ShowSelectTips(Il2CppString* tipsContent) {
		return ((T (*)(AutoRepairPopController*, Il2CppString*))(Il2CppBase() + 0x33D02B8))(this, tipsContent);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33D0654))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33D065C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33D0664))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AutoRepairPopController*))(Il2CppBase() + 0x33D066C))(this);
	}

};

}
