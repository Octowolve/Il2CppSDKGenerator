#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIGlobalEventPause
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIGlobalEvent_Pause"));
	}

	template <typename T = bool> T& bStopAIMove() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T HandleEvent(uintptr_t c) {
		return ((T (*)(PVEAIGlobalEventPause*, uintptr_t))(Il2CppBase() + 0x43796FC))(this, c);
	}
	template <typename T = bool> T xLuaBaseProxy_HandleEvent(uintptr_t P0) {
		return ((T (*)(PVEAIGlobalEventPause*, uintptr_t))(Il2CppBase() + 0x43797C4))(this, P0);
	}

};

}
