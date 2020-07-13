#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class LinkChannelBtnSettingData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "LinkChannelBtnSettingData"));
	}

	template <typename T = Il2CppString*> T& icon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& offset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& label() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& canClicked() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> static T& LABEL_OFFSET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LABEL_LINKED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLinkedChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableBindChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T GetLinkedChannel() {
		return ((T (*)(void *))(Il2CppBase() + 0x2553AB8))(0);
	}
	template <typename T = bool> static T IsEnableBindChannel() {
		return ((T (*)(void *))(Il2CppBase() + 0x2553B9C))(0);
	}
	template <typename T = uintptr_t> static T GetData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2553C80))(0);
	}
	template <typename T = uintptr_t> static T GetData_1(uintptr_t channel, bool canClicked) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2553D70))(0, channel, canClicked);
	}
	template <typename T = Il2CppString*> T get_icon() {
		return ((T (*)(LinkChannelBtnSettingData*))(Il2CppBase() + 0x25540A0))(this);
	}
	template <typename T = void> T set_icon(Il2CppString* value) {
		return ((T (*)(LinkChannelBtnSettingData*, Il2CppString*))(Il2CppBase() + 0x2553A88))(this, value);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(LinkChannelBtnSettingData*))(Il2CppBase() + 0x25540A8))(this);
	}
	template <typename T = void> T set_color(uintptr_t value) {
		return ((T (*)(LinkChannelBtnSettingData*, uintptr_t))(Il2CppBase() + 0x2553A90))(this, value);
	}
	template <typename T = float> T get_offset() {
		return ((T (*)(LinkChannelBtnSettingData*))(Il2CppBase() + 0x25540B8))(this);
	}
	template <typename T = void> T set_offset(float value) {
		return ((T (*)(LinkChannelBtnSettingData*, float))(Il2CppBase() + 0x2553AA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_label() {
		return ((T (*)(LinkChannelBtnSettingData*))(Il2CppBase() + 0x25540C0))(this);
	}
	template <typename T = void> T set_label(Il2CppString* value) {
		return ((T (*)(LinkChannelBtnSettingData*, Il2CppString*))(Il2CppBase() + 0x2553AB0))(this, value);
	}
	template <typename T = bool> T get_canClicked() {
		return ((T (*)(LinkChannelBtnSettingData*))(Il2CppBase() + 0x25540C8))(this);
	}
	template <typename T = void> T set_canClicked(bool value) {
		return ((T (*)(LinkChannelBtnSettingData*, bool))(Il2CppBase() + 0x2554098))(this, value);
	}

};

}
