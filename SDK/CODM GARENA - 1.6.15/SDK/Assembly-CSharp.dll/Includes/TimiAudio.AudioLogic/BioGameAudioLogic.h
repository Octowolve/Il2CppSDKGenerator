#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.AudioLogic {

class BioGameAudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.AudioLogic", "BioGameAudioLogic"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& CountDownSounds() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_iCurrentCountDownTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BioGameAudioLogic*))(Il2CppBase() + 0x4663A3C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BioGameAudioLogic*))(Il2CppBase() + 0x4663AEC))(this);
	}
	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(BioGameAudioLogic*))(Il2CppBase() + 0x4663B9C))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(BioGameAudioLogic*))(Il2CppBase() + 0x4663D7C))(this);
	}
	template <typename T = void> T OnCountDown(uintptr_t pMsg) {
		return ((T (*)(BioGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4663E8C))(this, pMsg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t pMsg) {
		return ((T (*)(BioGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466409C))(this, pMsg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t pMsg) {
		return ((T (*)(BioGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466413C))(this, pMsg);
	}

};

}
