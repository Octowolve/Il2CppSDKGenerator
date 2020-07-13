#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PveOffWallInLobbyController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PveOffWallInLobbyController"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mLoadoutPveOffWallPlan() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOffWallSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOffWallSpriteActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PveOffWallInLobbyController*))(Il2CppBase() + 0x3AA3E8C))(this);
	}
	template <typename T = void> T SetOffWallSprite(Il2CppString* spriteName) {
		return ((T (*)(PveOffWallInLobbyController*, Il2CppString*))(Il2CppBase() + 0x3AA40C4))(this, spriteName);
	}
	template <typename T = void> T SetOffWallSpriteActive(bool active) {
		return ((T (*)(PveOffWallInLobbyController*, bool))(Il2CppBase() + 0x3AA3FA0))(this, active);
	}
	template <typename T = void> static T SetActive(bool active) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3AA4214))(0, active);
	}

};

}
