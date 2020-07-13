#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISpriteAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISpriteAnimation"));
	}

	template <typename T = int32_t> T& frameIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mFPS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mPrefix() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mLoop() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mSnap() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& mSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mDelta() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mActive() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& mSpriteNames() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RebuildSpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToBeginning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_frames() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FAB52C))(this);
	}
	template <typename T = int32_t> T get_framesPerSecond() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FAB5C4))(this);
	}
	template <typename T = void> T set_framesPerSecond(int32_t value) {
		return ((T (*)(UISpriteAnimation*, int32_t))(Il2CppBase() + 0x2FAB5CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_namePrefix() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FAB5D4))(this);
	}
	template <typename T = void> T set_namePrefix(Il2CppString* value) {
		return ((T (*)(UISpriteAnimation*, Il2CppString*))(Il2CppBase() + 0x2FAB5DC))(this, value);
	}
	template <typename T = bool> T get_loop() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FABA24))(this);
	}
	template <typename T = void> T set_loop(bool value) {
		return ((T (*)(UISpriteAnimation*, bool))(Il2CppBase() + 0x2FABA2C))(this, value);
	}
	template <typename T = bool> T get_isPlaying() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FABA34))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FABA3C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FABAE0))(this);
	}
	template <typename T = void> T RebuildSpriteList() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FAB6A4))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FABD70))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FABE14))(this);
	}
	template <typename T = void> T ResetToBeginning() {
		return ((T (*)(UISpriteAnimation*))(Il2CppBase() + 0x2FABEB8))(this);
	}

};

}
