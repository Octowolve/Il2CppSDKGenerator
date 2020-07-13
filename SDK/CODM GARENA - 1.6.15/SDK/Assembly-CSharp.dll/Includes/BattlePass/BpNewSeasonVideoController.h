#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BpNewSeasonVideoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BpNewSeasonVideoController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& BattlePassConfData() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinueBtn_4Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinueBtn_3Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenBattlePassMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinueBtn_2Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinueBtn_1Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVideoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C45E58))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C45EFC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C4630C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C463B4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C4645C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C46738))(this);
	}
	template <typename T = void> T OnContinueBtn_4Click() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C469D4))(this);
	}
	template <typename T = void> T OnContinueBtn_3Click() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C46DA8))(this);
	}
	template <typename T = void> T OpenBattlePassMain() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C46EB0))(this);
	}
	template <typename T = void> T OnContinueBtn_2Click() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C46FD4))(this);
	}
	template <typename T = void> T OnContinueBtn_1Click() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C470DC))(this);
	}
	template <typename T = void> T OnSkipBtnClick() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C47240))(this);
	}
	template <typename T = void> T RefreshVideoView(bool SkipBtnShow) {
		return ((T (*)(BpNewSeasonVideoController*, bool))(Il2CppBase() + 0x2C475DC))(this, SkipBtnShow);
	}
	template <typename T = void> T OnContinueBtn_4Clickm__0() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C47960))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C47964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C4796C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C47974))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C4797C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C47984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BpNewSeasonVideoController*))(Il2CppBase() + 0x2C4798C))(this);
	}

};

}
