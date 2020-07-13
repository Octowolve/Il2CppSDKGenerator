#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsPhraseDragView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsPhraseDragView"));
	}

	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& gridRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& templateItem() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& dragEndCallback() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cacheItemList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& relativePanels() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewPhraseList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPhraseList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T ClearGrid() {
		return ((T (*)(SettingsPhraseDragView*))(Il2CppBase() + 0x28B028C))(this);
	}
	template <typename T = void> T SetItem(int32_t index, uintptr_t csv) {
		return ((T (*)(SettingsPhraseDragView*, int32_t, uintptr_t))(Il2CppBase() + 0x28B03F0))(this, index, csv);
	}
	template <typename T = Il2CppList<int32_t>*> T GetNewPhraseList() {
		return ((T (*)(SettingsPhraseDragView*))(Il2CppBase() + 0x28B08A0))(this);
	}
	template <typename T = void> T ResetPhraseList() {
		return ((T (*)(SettingsPhraseDragView*))(Il2CppBase() + 0x28B0DEC))(this);
	}

};

}
