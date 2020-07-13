#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IReuseList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IReuseList"));
	}


	template <typename T = void> T InitReuseList(uintptr_t scrollView, uintptr_t dataSource, uintptr_t callback, bool enableClick) {
		return ((T (*)(IReuseList*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, scrollView, dataSource, callback, enableClick);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(IReuseList*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ResetPanelSize(bool resetScroll) {
		return ((T (*)(IReuseList*, bool))(Il2CppBase() + 0x0))(this, resetScroll);
	}
	template <typename T = bool> T ScrollTo(int32_t index) {
		return ((T (*)(IReuseList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = uintptr_t> T GetItemController(int32_t index) {
		return ((T (*)(IReuseList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = uintptr_t> T GetItemTransform(int32_t index) {
		return ((T (*)(IReuseList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = uintptr_t> T GetDataItem(int32_t index) {
		return ((T (*)(IReuseList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = bool> T OnItemClick(int32_t index) {
		return ((T (*)(IReuseList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = bool> T OnReuseListItemAction(int32_t index, int32_t action, uintptr_t data) {
		return ((T (*)(IReuseList*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, index, action, data);
	}

};

}
