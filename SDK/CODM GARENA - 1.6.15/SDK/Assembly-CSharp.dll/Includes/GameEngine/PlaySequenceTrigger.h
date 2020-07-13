#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlaySequenceTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlaySequenceTrigger"));
	}

	template <typename T = Il2CppString*> T& sequenceName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& restartSequencer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlaySequenceTrigger*))(Il2CppBase() + 0x1DEBECC))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(PlaySequenceTrigger*, uintptr_t, bool))(Il2CppBase() + 0x1DEBFC4))(this, p, enter);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PlaySequenceTrigger*))(Il2CppBase() + 0x1DEC110))(this);
	}

};

}
