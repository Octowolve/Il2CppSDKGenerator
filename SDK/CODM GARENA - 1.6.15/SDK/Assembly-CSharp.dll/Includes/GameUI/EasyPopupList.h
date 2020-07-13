#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyPopupList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyPopupList"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Grid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OpenTrigger() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ShowingLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_CurrentValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CurrentIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& PendingTemplate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& PendingLabelTemplate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OtherArea() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SelectedBG() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OptionList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& clickSound() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Options() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClosePending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> T GetValue() {
		return ((T (*)(EasyPopupList*))(Il2CppBase() + 0x47006DC))(this);
	}
	template <typename T = void> T SetCurrentIndex(int32_t index) {
		return ((T (*)(EasyPopupList*, int32_t))(Il2CppBase() + 0x470077C))(this, index);
	}
	template <typename T = int32_t> T GetCurrentIndex() {
		return ((T (*)(EasyPopupList*))(Il2CppBase() + 0x4700824))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EasyPopupList*))(Il2CppBase() + 0x47008C4))(this);
	}
	template <typename T = void> T SetOptions(Il2CppList<Il2CppString*>* OptionStrList) {
		return ((T (*)(EasyPopupList*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x4700DD4))(this, OptionStrList);
	}
	template <typename T = void> T OnShowPending(uintptr_t obj) {
		return ((T (*)(EasyPopupList*, uintptr_t))(Il2CppBase() + 0x47011A0))(this, obj);
	}
	template <typename T = void> T OnClosePending(uintptr_t obj) {
		return ((T (*)(EasyPopupList*, uintptr_t))(Il2CppBase() + 0x4701408))(this, obj);
	}
	template <typename T = void> T OnClickItem(Il2CppString* str, int32_t index) {
		return ((T (*)(EasyPopupList*, Il2CppString*, int32_t))(Il2CppBase() + 0x4701584))(this, str, index);
	}

};

}
