#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.AudioLogic {

class LiveEventGameAudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.AudioLogic", "LiveEventGameAudioLogic"));
	}

	template <typename T = Il2CppString*> static T& kOccupySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOccupy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(LiveEventGameAudioLogic*))(Il2CppBase() + 0x466D6DC))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(LiveEventGameAudioLogic*))(Il2CppBase() + 0x466D8D0))(this);
	}
	template <typename T = void> T OnOccupy(uintptr_t pMsg) {
		return ((T (*)(LiveEventGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466DA64))(this, pMsg);
	}
	template <typename T = void> T _OnEndMatch(uintptr_t result) {
		return ((T (*)(LiveEventGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466DB6C))(this, result);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventHandler() {
		return ((T (*)(LiveEventGameAudioLogic*))(Il2CppBase() + 0x466DD44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnregisterEventHandler() {
		return ((T (*)(LiveEventGameAudioLogic*))(Il2CppBase() + 0x466DD48))(this);
	}
	template <typename T = void> T xLuaBaseProxy__OnEndMatch(uintptr_t P0) {
		return ((T (*)(LiveEventGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466DD4C))(this, P0);
	}

};

}
