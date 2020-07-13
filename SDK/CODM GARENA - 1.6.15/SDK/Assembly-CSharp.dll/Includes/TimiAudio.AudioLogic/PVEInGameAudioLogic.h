#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.AudioLogic {

class PVEInGameAudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.AudioLogic", "PVEInGameAudioLogic"));
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

	template <typename T = float> T get_RoundStartTime() {
		return ((T (*)(PVEInGameAudioLogic*))(Il2CppBase() + 0x466DD50))(this);
	}
	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(PVEInGameAudioLogic*))(Il2CppBase() + 0x466D82C))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(PVEInGameAudioLogic*))(Il2CppBase() + 0x466D9C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventHandler() {
		return ((T (*)(PVEInGameAudioLogic*))(Il2CppBase() + 0x466DD58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnregisterEventHandler() {
		return ((T (*)(PVEInGameAudioLogic*))(Il2CppBase() + 0x466DD5C))(this);
	}

};

}
