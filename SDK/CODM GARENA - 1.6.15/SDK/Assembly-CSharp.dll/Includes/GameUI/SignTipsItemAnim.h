#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignTipsItemAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignTipsItemAnim"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& SpritesNeedResetOnIdle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayIdleAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySpawnAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T PlayIdleAnim() {
		return ((T (*)(SignTipsItemAnim*))(Il2CppBase() + 0x3C99DA4))(this);
	}
	template <typename T = void> T PlaySpawnAnim() {
		return ((T (*)(SignTipsItemAnim*))(Il2CppBase() + 0x3C9A13C))(this);
	}
	template <typename T = void> T StopAnim(bool JumpToLastFrame) {
		return ((T (*)(SignTipsItemAnim*, bool))(Il2CppBase() + 0x3C9A288))(this, JumpToLastFrame);
	}
	template <typename T = void> T ResetSprites() {
		return ((T (*)(SignTipsItemAnim*))(Il2CppBase() + 0x3C99EF8))(this);
	}
	template <typename T = void> T ResetRoot() {
		return ((T (*)(SignTipsItemAnim*))(Il2CppBase() + 0x3C9A40C))(this);
	}

};

}
