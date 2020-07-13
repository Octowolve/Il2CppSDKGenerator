#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPGameEventChannelTutorial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPGameEventChannel_Tutorial"));
	}

	template <typename T = uintptr_t> T& m_StoryGame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncMissileState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SPGameEventChannelTutorial*))(Il2CppBase() + 0x3F11DE4))(this);
	}
	template <typename T = void> T OnNextStep(uintptr_t msg) {
		return ((T (*)(SPGameEventChannelTutorial*, uintptr_t))(Il2CppBase() + 0x3F12290))(this, msg);
	}
	template <typename T = void> T OnSyncMissileState(uintptr_t Msg) {
		return ((T (*)(SPGameEventChannelTutorial*, uintptr_t))(Il2CppBase() + 0x3F123A8))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameEventChannelTutorial*))(Il2CppBase() + 0x3F12CF8))(this);
	}

};

}
