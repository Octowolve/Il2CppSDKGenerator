#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Report {

class ReportWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Report", "ReportWindowController"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& ReportIdDic() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& isLoadingShow() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitReportIdDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestReportPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3ABC6AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3ABCAC0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3ABCDBC))(this);
	}
	template <typename T = void> T InitReportIdDic() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3AC1AC0))(this);
	}
	template <typename T = int32_t> T GetReportCode() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3AC1FC4))(this);
	}
	template <typename T = void> T OnCancelBtnClicked() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3AC2240))(this);
	}
	template <typename T = void> T OnConfirmBtnClicked() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3ABDEF8))(this);
	}
	template <typename T = void> T RequestReportPlayer(uintptr_t data) {
		return ((T (*)(ReportWindowController*, uintptr_t))(Il2CppBase() + 0x3ABE99C))(this, data);
	}
	template <typename T = void> T ShowTips() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3AC23BC))(this);
	}
	template <typename T = void> T OnReturnKeyClick(uintptr_t Msg) {
		return ((T (*)(ReportWindowController*, uintptr_t))(Il2CppBase() + 0x3AC2454))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3AC25D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3AC25E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ReportWindowController*))(Il2CppBase() + 0x3AC25E8))(this);
	}

};

}
