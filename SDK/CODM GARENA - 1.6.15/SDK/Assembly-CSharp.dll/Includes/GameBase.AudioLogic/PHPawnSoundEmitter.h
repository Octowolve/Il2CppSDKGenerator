#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class PHPawnSoundEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "PHPawnSoundEmitter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHurtSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T DoJump() {
		return ((T (*)(PHPawnSoundEmitter*))(Il2CppBase() + 0x3BADF68))(this);
	}
	template <typename T = void> T DoLand() {
		return ((T (*)(PHPawnSoundEmitter*))(Il2CppBase() + 0x3BAE000))(this);
	}
	template <typename T = void> T Die(bool isHeadshot) {
		return ((T (*)(PHPawnSoundEmitter*, bool))(Il2CppBase() + 0x3BAE098))(this, isHeadshot);
	}
	template <typename T = void> T PlayDying(uintptr_t damageType) {
		return ((T (*)(PHPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BAE138))(this, damageType);
	}
	template <typename T = void> T PlayHurtSound(uintptr_t damageInfo) {
		return ((T (*)(PHPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BAE1D8))(this, damageInfo);
	}
	template <typename T = void> T xLuaBaseProxy_DoJump() {
		return ((T (*)(PHPawnSoundEmitter*))(Il2CppBase() + 0x3BAE448))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoLand() {
		return ((T (*)(PHPawnSoundEmitter*))(Il2CppBase() + 0x3BAE44C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0) {
		return ((T (*)(PHPawnSoundEmitter*, bool))(Il2CppBase() + 0x3BAE450))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDying(uintptr_t P0) {
		return ((T (*)(PHPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BAE454))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHurtSound(uintptr_t P0) {
		return ((T (*)(PHPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BAE458))(this, P0);
	}

};

}
