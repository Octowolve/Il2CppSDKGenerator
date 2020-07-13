#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class NoPawnSoundEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "NoPawnSoundEmitter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeInitAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitAudio(uintptr_t pPwanSoundData) {
		return ((T (*)(NoPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3B9BB70))(this, pPwanSoundData);
	}
	template <typename T = void> T DeInitAudio() {
		return ((T (*)(NoPawnSoundEmitter*))(Il2CppBase() + 0x3B9C3B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitAudio(uintptr_t P0) {
		return ((T (*)(NoPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3B9C848))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DeInitAudio() {
		return ((T (*)(NoPawnSoundEmitter*))(Il2CppBase() + 0x3B9C84C))(this);
	}

};

}
