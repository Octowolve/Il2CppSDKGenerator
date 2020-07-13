#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonRedPointBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonRedPointBox"));
	}

	template <typename T = uintptr_t> T& RedPoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_PlayerPrefsName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetRedPoint(Il2CppString* PlayerPrefsName) {
		return ((T (*)(UICommonRedPointBox*, Il2CppString*))(Il2CppBase() + 0x29E3888))(this, PlayerPrefsName);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UICommonRedPointBox*))(Il2CppBase() + 0x29E3A1C))(this);
	}

};

}
