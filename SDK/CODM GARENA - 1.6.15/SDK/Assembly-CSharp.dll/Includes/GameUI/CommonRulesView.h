#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonRulesView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonRulesView"));
	}

	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& grid() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& gridTable() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& gridItem() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& newGridItemList() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> static T& DELTA_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSubData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnViewShow() {
		return ((T (*)(CommonRulesView*))(Il2CppBase() + 0x3DF48AC))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t csv) {
		return ((T (*)(CommonRulesView*, uintptr_t))(Il2CppBase() + 0x3DF2D58))(this, csv);
	}
	template <typename T = void> T UpdateSubData(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(CommonRulesView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3DF49D0))(this, dataList);
	}
	template <typename T = void> T xLuaBaseProxy_OnViewShow() {
		return ((T (*)(CommonRulesView*))(Il2CppBase() + 0x3DF4F58))(this);
	}

};

}
