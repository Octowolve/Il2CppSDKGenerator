#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IEasyList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IEasyList"));
	}


	template <typename T = void> T InitEasyList(uintptr_t scrollView, int32_t itemWidth, int32_t itemHeight, uintptr_t callback, int32_t columns, bool enableClick, bool enableColider, uintptr_t scrollBar, int32_t barAdjust, int32_t listGroup, bool disableClickSound, bool bConsiderChildren) {
		return ((T (*)(IEasyList*, uintptr_t, int32_t, int32_t, uintptr_t, int32_t, bool, bool, uintptr_t, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x0))(this, scrollView, itemWidth, itemHeight, callback, columns, enableClick, enableColider, scrollBar, barAdjust, listGroup, disableClickSound, bConsiderChildren);
	}
	template <typename T = void> T SetEasyListData(Il2CppList<uintptr_t>* dataList, int32_t userContext, bool bScroll) {
		return ((T (*)(IEasyList*, Il2CppList<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x0))(this, dataList, userContext, bScroll);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(IEasyList*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ResetPanelSize(bool resetScroll) {
		return ((T (*)(IEasyList*, bool))(Il2CppBase() + 0x0))(this, resetScroll);
	}
	template <typename T = bool> T ScrollTo(int32_t index, bool force) {
		return ((T (*)(IEasyList*, int32_t, bool))(Il2CppBase() + 0x0))(this, index, force);
	}
	template <typename T = uintptr_t> T GetItemData(int32_t index) {
		return ((T (*)(IEasyList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = uintptr_t> T GetItemController(int32_t index) {
		return ((T (*)(IEasyList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = uintptr_t> T GetItemTransform(int32_t index) {
		return ((T (*)(IEasyList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = void> T OnItemClick(uintptr_t controller, int32_t index) {
		return ((T (*)(IEasyList*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, controller, index);
	}
	template <typename T = bool> T IsSelected(int32_t index) {
		return ((T (*)(IEasyList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = int32_t> T GetItemCount() {
		return ((T (*)(IEasyList*))(Il2CppBase() + 0x0))(this);
	}

};

}
