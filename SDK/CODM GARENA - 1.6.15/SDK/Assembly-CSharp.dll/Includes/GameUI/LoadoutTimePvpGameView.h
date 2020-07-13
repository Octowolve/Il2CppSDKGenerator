#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutTimePvpGameView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutTimePvpGameView"));
	}

	template <typename T = uintptr_t> T& RootObj() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ContainerWidget() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& OpenAnimator() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mTweener() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CampLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& CampIconSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(LoadoutTimePvpGameView*))(Il2CppBase() + 0x1F4953C))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(LoadoutTimePvpGameView*))(Il2CppBase() + 0x1F49544))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutTimePvpGameView*))(Il2CppBase() + 0x1F49550))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LoadoutTimePvpGameView*))(Il2CppBase() + 0x1F49648))(this);
	}

};

}
