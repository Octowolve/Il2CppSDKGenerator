#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ladder {

class LadderRewardListDetailWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ladder", "LadderRewardListDetailWindowController"));
	}

	template <typename T = bool> static T& bIsBr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& CurrRankIndex() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<int32_t>*> T& ranks() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankRewardDetailShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x49276F0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x492782C))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4927904))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4927F6C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4928040))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4928198))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LadderRewardListDetailWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x4928284))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(LadderRewardListDetailWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4928378))(this, table, cell, row);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t table) {
		return ((T (*)(LadderRewardListDetailWindowController*, uintptr_t))(Il2CppBase() + 0x492859C))(this, table);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LadderRewardListDetailWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x49286A8))(this, table, row);
	}
	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(LadderRewardListDetailWindowController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x492879C))(this, table, row, worldPos);
	}
	template <typename T = void> T OnRankRewardDetailShow(uintptr_t message) {
		return ((T (*)(LadderRewardListDetailWindowController*, uintptr_t))(Il2CppBase() + 0x4928898))(this, message);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4928984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4928A58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4928A60))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4928A68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4928A70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4928A78))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(LadderRewardListDetailWindowController*))(Il2CppBase() + 0x4928A80))(this);
	}

};

}
