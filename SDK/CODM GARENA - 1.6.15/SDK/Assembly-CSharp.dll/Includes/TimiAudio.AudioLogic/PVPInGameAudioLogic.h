#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.AudioLogic {

class PVPInGameAudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.AudioLogic", "PVPInGameAudioLogic"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPownerOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = float> T get_RoundStartTime() {
		return ((T (*)(PVPInGameAudioLogic*))(Il2CppBase() + 0x466DD60))(this);
	}
	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(PVPInGameAudioLogic*))(Il2CppBase() + 0x466A97C))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(PVPInGameAudioLogic*))(Il2CppBase() + 0x466AC68))(this);
	}
	template <typename T = void> T OnOpenDoor(uintptr_t pMsg) {
		return ((T (*)(PVPInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466DD68))(this, pMsg);
	}
	template <typename T = void> T OnCloseDoor(uintptr_t pMsg) {
		return ((T (*)(PVPInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466DE08))(this, pMsg);
	}
	template <typename T = void> T OnPownerOn(uintptr_t pMsg) {
		return ((T (*)(PVPInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466DEA8))(this, pMsg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventHandler() {
		return ((T (*)(PVPInGameAudioLogic*))(Il2CppBase() + 0x466DF48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnregisterEventHandler() {
		return ((T (*)(PVPInGameAudioLogic*))(Il2CppBase() + 0x466DF4C))(this);
	}

};

}
