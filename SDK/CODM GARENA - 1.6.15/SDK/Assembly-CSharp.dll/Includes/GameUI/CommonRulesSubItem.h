#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonRulesSubItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonRulesSubItem"));
	}

	template <typename T = uintptr_t> T& subTitle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& subContent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& logo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& cacheHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& DELTA_SMALL_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& contentHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetItem(Il2CppString* title, Il2CppString* content) {
		return ((T (*)(CommonRulesSubItem*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3DF3FF0))(this, title, content);
	}
	template <typename T = void> T ResetItem() {
		return ((T (*)(CommonRulesSubItem*))(Il2CppBase() + 0x3DF41FC))(this);
	}
	template <typename T = float> T GetItemHeight() {
		return ((T (*)(CommonRulesSubItem*))(Il2CppBase() + 0x3DF46C8))(this);
	}

};

}
