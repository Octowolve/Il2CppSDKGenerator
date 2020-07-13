#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Report {

class CommonReportWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Report", "CommonReportWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& CallBack() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CommonReportWindowController*))(Il2CppBase() + 0x3AC1594))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommonReportWindowController*))(Il2CppBase() + 0x3AC169C))(this);
	}
	template <typename T = void> T InitView(uintptr_t data) {
		return ((T (*)(CommonReportWindowController*, uintptr_t))(Il2CppBase() + 0x3AC1740))(this, data);
	}
	template <typename T = void> T OnConfirmBtnClicked() {
		return ((T (*)(CommonReportWindowController*))(Il2CppBase() + 0x3AC195C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CommonReportWindowController*))(Il2CppBase() + 0x3AC1A10))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommonReportWindowController*))(Il2CppBase() + 0x3AC1A14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnConfirmBtnClicked() {
		return ((T (*)(CommonReportWindowController*))(Il2CppBase() + 0x3AC1A1C))(this);
	}

};

}
