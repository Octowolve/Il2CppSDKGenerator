#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LobbyTopBarTweenAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LobbyTopBarTweenAnimation"));
	}

	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tweenPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isTweenPositionInit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAlphaTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPositionTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Show(bool isOpen) {
		return ((T (*)(LobbyTopBarTweenAnimation*, bool))(Il2CppBase() + 0x1F725C4))(this, isOpen);
	}
	template <typename T = void> T ShowAlphaTween(bool isOpen) {
		return ((T (*)(LobbyTopBarTweenAnimation*, bool))(Il2CppBase() + 0x1F72680))(this, isOpen);
	}
	template <typename T = void> T ShowPositionTween(bool isOpen) {
		return ((T (*)(LobbyTopBarTweenAnimation*, bool))(Il2CppBase() + 0x1F727AC))(this, isOpen);
	}

};

}
