#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class MPPawnSoundEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "MPPawnSoundEmitter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHurtSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T PlayHurtSound(uintptr_t damageInfo) {
		return ((T (*)(MPPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3B9AB98))(this, damageInfo);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHurtSound(uintptr_t P0) {
		return ((T (*)(MPPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3B9B080))(this, P0);
	}

};

}
