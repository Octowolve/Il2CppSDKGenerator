#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SendFsmEventVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SendFsmEventVolume"));
	}

	template <typename T = uintptr_t> T& fsmTarget() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& eventName() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& once() {
		return *(T*)((uintptr_t)this + 0x60);
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
		return ((T (*)(SendFsmEventVolume*))(Il2CppBase() + 0x33F24E4))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t localPawn, bool enter) {
		return ((T (*)(SendFsmEventVolume*, uintptr_t, bool))(Il2CppBase() + 0x33F25D0))(this, localPawn, enter);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SendFsmEventVolume*))(Il2CppBase() + 0x33F2804))(this);
	}

};

}
