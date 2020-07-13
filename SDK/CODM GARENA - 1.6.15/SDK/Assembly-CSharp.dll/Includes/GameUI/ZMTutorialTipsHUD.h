#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMTutorialTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMTutorialTipsHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TipsLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllTween() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMTutorialTipsHUD*))(Il2CppBase() + 0x2A692C8))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMTutorialTipsHUD*))(Il2CppBase() + 0x2A692D0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ZMTutorialTipsHUD*))(Il2CppBase() + 0x2A692DC))(this);
	}
	template <typename T = void> T ShowTips(bool bShow, Il2CppString* tips) {
		return ((T (*)(ZMTutorialTipsHUD*, bool, Il2CppString*))(Il2CppBase() + 0x2A69404))(this, bShow, tips);
	}
	template <typename T = void> T PlayTweens(Il2CppArray<uintptr_t>* alltween) {
		return ((T (*)(ZMTutorialTipsHUD*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2A69570))(this, alltween);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMTutorialTipsHUD*))(Il2CppBase() + 0x2A69678))(this);
	}

};

}
