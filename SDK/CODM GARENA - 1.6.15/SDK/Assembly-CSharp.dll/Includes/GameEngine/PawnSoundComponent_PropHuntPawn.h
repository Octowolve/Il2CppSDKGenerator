#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PawnSoundComponentPropHuntPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PawnSoundComponent_PropHuntPawn"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPawnStateSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T PlayPawnStateSound() {
		return ((T (*)(PawnSoundComponentPropHuntPawn*))(Il2CppBase() + 0x273C834))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayPawnStateSound() {
		return ((T (*)(PawnSoundComponentPropHuntPawn*))(Il2CppBase() + 0x273C8CC))(this);
	}

};

}
