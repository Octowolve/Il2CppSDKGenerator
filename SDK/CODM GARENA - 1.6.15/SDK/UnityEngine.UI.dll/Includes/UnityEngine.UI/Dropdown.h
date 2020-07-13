#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Dropdown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Dropdown"));
	}

	template <typename T = uintptr_t> T& m_Template() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_CaptionText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_CaptionImage() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_ItemText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_ItemImage() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_Value() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_Options() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_OnValueChanged() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_Dropdown() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_Blocker() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Items() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = void*> T& m_AlphaTweenRunner() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& validTemplate() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& s_NoOptionData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_template() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0F598))(this);
	}
	template <typename T = void> T set_template(uintptr_t value) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D0F5A0))(this, value);
	}
	template <typename T = uintptr_t> T get_captionText() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0F8FC))(this);
	}
	template <typename T = void> T set_captionText(uintptr_t value) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D0F904))(this, value);
	}
	template <typename T = uintptr_t> T get_captionImage() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0F90C))(this);
	}
	template <typename T = void> T set_captionImage(uintptr_t value) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D0F914))(this, value);
	}
	template <typename T = uintptr_t> T get_itemText() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0F91C))(this);
	}
	template <typename T = void> T set_itemText(uintptr_t value) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D0F924))(this, value);
	}
	template <typename T = uintptr_t> T get_itemImage() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0F92C))(this);
	}
	template <typename T = void> T set_itemImage(uintptr_t value) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D0F934))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_options() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0F93C))(this);
	}
	template <typename T = void> T set_options(Il2CppList<uintptr_t>* value) {
		return ((T (*)(Dropdown*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D0F968))(this, value);
	}
	template <typename T = uintptr_t> T get_onValueChanged() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0F99C))(this);
	}
	template <typename T = void> T set_onValueChanged(uintptr_t value) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D0F9A4))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0F9AC))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(Dropdown*, int32_t))(Il2CppBase() + 0x3D0F9B4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0FB50))(this);
	}
	template <typename T = void> T RefreshShownValue() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D0F5A8))(this);
	}
	template <typename T = void> T AddOptions(Il2CppList<uintptr_t>* options) {
		return ((T (*)(Dropdown*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D0FE10))(this, options);
	}
	template <typename T = void> T AddOptions_1(Il2CppList<Il2CppString*>* options) {
		return ((T (*)(Dropdown*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x3D0FEC0))(this, options);
	}
	template <typename T = void> T AddOptions_2(Il2CppList<uintptr_t>* options) {
		return ((T (*)(Dropdown*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D10044))(this, options);
	}
	template <typename T = void> T ClearOptions() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D101C8))(this);
	}
	template <typename T = void> T SetupTemplate() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D10270))(this);
	}
	template <typename T = uintptr_t> static T GetOrAddComponent(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3395678))(0, go);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D10A3C))(this, eventData);
	}
	template <typename T = void> T OnSubmit(uintptr_t eventData) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D11AC4))(this, eventData);
	}
	template <typename T = void> T OnCancel(uintptr_t eventData) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D11AC8))(this, eventData);
	}
	template <typename T = void> T Show() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D10A40))(this);
	}
	template <typename T = uintptr_t> T CreateBlocker(uintptr_t rootCanvas) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D1228C))(this, rootCanvas);
	}
	template <typename T = void> T DestroyBlocker(uintptr_t blocker) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D12608))(this, blocker);
	}
	template <typename T = uintptr_t> T CreateDropdownList(uintptr_t template) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D126B0))(this, template);
	}
	template <typename T = void> T DestroyDropdownList(uintptr_t dropdownList) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D12770))(this, dropdownList);
	}
	template <typename T = uintptr_t> T CreateItem(uintptr_t itemTemplate) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D12818))(this, itemTemplate);
	}
	template <typename T = void> T DestroyItem(uintptr_t item) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D128D8))(this, item);
	}
	template <typename T = uintptr_t> T AddItem(uintptr_t data, bool selected, uintptr_t itemTemplate, Il2CppList<uintptr_t>* items) {
		return ((T (*)(Dropdown*, uintptr_t, bool, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D11C68))(this, data, selected, itemTemplate, items);
	}
	template <typename T = void> T AlphaFadeList(float duration, float alpha) {
		return ((T (*)(Dropdown*, float, float))(Il2CppBase() + 0x3D128EC))(this, duration, alpha);
	}
	template <typename T = void> T AlphaFadeList_1(float duration, float start, float end) {
		return ((T (*)(Dropdown*, float, float, float))(Il2CppBase() + 0x3D120B4))(this, duration, start, end);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(Dropdown*, float))(Il2CppBase() + 0x3D129B8))(this, alpha);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(Dropdown*))(Il2CppBase() + 0x3D11ACC))(this);
	}
	template <typename T = uintptr_t> T DelayedDestroyDropdownList(float delay) {
		return ((T (*)(Dropdown*, float))(Il2CppBase() + 0x3D12ABC))(this, delay);
	}
	template <typename T = void> T OnSelectItem(uintptr_t toggle) {
		return ((T (*)(Dropdown*, uintptr_t))(Il2CppBase() + 0x3D12B74))(this, toggle);
	}

};

}
