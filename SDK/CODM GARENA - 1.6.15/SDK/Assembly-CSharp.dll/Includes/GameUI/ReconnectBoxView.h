#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReconnectBoxView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReconnectBoxView"));
	}

	template <typename T = uintptr_t> T& ReconnectRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BoxRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BoxRoot_Retry() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BoxRoot_Quit() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ReconnectLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TipsBG() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Label_Retry() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Label_Quit() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& CloseBtn_Box() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& RetryBtn_Box() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& QuitBtn_Box() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& FinalQuitBtn_Box() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowReconnecting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsFinal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(ReconnectBoxView*))(Il2CppBase() + 0x3ABC2B4))(this);
	}
	template <typename T = void> T ShowReconnecting() {
		return ((T (*)(ReconnectBoxView*))(Il2CppBase() + 0x3ABBB68))(this);
	}
	template <typename T = void> T ShowBox() {
		return ((T (*)(ReconnectBoxView*))(Il2CppBase() + 0x3ABB81C))(this);
	}
	template <typename T = void> T SetIsFinal(bool isFinal) {
		return ((T (*)(ReconnectBoxView*, bool))(Il2CppBase() + 0x3ABB714))(this, isFinal);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(ReconnectBoxView*))(Il2CppBase() + 0x3ABC354))(this);
	}

};

}
