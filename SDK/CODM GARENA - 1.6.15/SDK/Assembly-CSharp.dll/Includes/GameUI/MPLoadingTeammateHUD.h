#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MPLoadingTeammateHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MPLoadingTeammateHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& teammateView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MPTitle() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& EndlessTitle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& DifficultName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DifficultSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLoadingBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MPLoadingTeammateHUD*))(Il2CppBase() + 0x1FA6E0C))(this);
	}
	template <typename T = void> T PlayLoadingBGM(uintptr_t gameMode) {
		return ((T (*)(MPLoadingTeammateHUD*, uintptr_t))(Il2CppBase() + 0x1FA79C0))(this, gameMode);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MPLoadingTeammateHUD*))(Il2CppBase() + 0x1FA7C10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MPLoadingTeammateHUD*))(Il2CppBase() + 0x1FA7CB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MPLoadingTeammateHUD*))(Il2CppBase() + 0x1FA7CC0))(this);
	}

};

}
