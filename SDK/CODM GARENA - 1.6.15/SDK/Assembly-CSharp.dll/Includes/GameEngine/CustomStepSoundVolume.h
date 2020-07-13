#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CustomStepSoundVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CustomStepSoundVolume"));
	}

	template <typename T = Il2CppString*> T& mCustomStepSound1P() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& mCustomStepSound3P() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CustomStepSoundVolume*))(Il2CppBase() + 0x41ADDC8))(this);
	}
	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(CustomStepSoundVolume*, uintptr_t))(Il2CppBase() + 0x41ADE70))(this, pawn);
	}
	template <typename T = void> T OnPawnExitVolume(uintptr_t pawn) {
		return ((T (*)(CustomStepSoundVolume*, uintptr_t))(Il2CppBase() + 0x41ADFA8))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(CustomStepSoundVolume*))(Il2CppBase() + 0x41AE0D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnEnterVolume(uintptr_t P0) {
		return ((T (*)(CustomStepSoundVolume*, uintptr_t))(Il2CppBase() + 0x41AE0E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnExitVolume(uintptr_t P0) {
		return ((T (*)(CustomStepSoundVolume*, uintptr_t))(Il2CppBase() + 0x41AE0E8))(this, P0);
	}

};

}
