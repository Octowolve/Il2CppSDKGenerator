#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UICommonItemDescTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UICommonItemDescTips"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Arrow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& mText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Side() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& kWPadding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kHPadding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T set_Width(int32_t value) {
		return ((T (*)(UICommonItemDescTips*, int32_t))(Il2CppBase() + 0x49F737C))(this, value);
	}
	template <typename T = int32_t> T get_Width() {
		return ((T (*)(UICommonItemDescTips*))(Il2CppBase() + 0x49F7384))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(UICommonItemDescTips*, Il2CppString*))(Il2CppBase() + 0x49F66CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(UICommonItemDescTips*))(Il2CppBase() + 0x49F738C))(this);
	}
	template <typename T = void> T RefreshText() {
		return ((T (*)(UICommonItemDescTips*))(Il2CppBase() + 0x49F66D4))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UICommonItemDescTips*))(Il2CppBase() + 0x49F69D0))(this);
	}

};

}
