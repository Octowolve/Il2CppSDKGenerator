#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlowGridCellPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlowGridCellPool"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& PendingCells() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& UsingCells() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReuseCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AppendCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindUsingCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIFlowGridCellPool*))(Il2CppBase() + 0x3AE175C))(this);
	}
	template <typename T = bool> T ReuseCell(uintptr_t path, uintptr_t* cell) {
		return ((T (*)(UIFlowGridCellPool*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3AE19D8))(this, path, cell);
	}
	template <typename T = void> T AppendCell(uintptr_t cell) {
		return ((T (*)(UIFlowGridCellPool*, uintptr_t))(Il2CppBase() + 0x3AE1DC8))(this, cell);
	}
	template <typename T = void> T End() {
		return ((T (*)(UIFlowGridCellPool*))(Il2CppBase() + 0x3AE1814))(this);
	}
	template <typename T = uintptr_t> T FindUsingCell(uintptr_t path) {
		return ((T (*)(UIFlowGridCellPool*, uintptr_t))(Il2CppBase() + 0x3ADF068))(this, path);
	}

};

}
