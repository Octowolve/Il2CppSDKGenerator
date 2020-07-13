#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioBankLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioBankLoader"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CoLoadBanks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AudioBankLoader*))(Il2CppBase() + 0x324AD38))(this);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(AudioBankLoader*))(Il2CppBase() + 0x324AF10))(this);
	}
	template <typename T = uintptr_t> T CoLoadBanks(uintptr_t e) {
		return ((T (*)(AudioBankLoader*, uintptr_t))(Il2CppBase() + 0x324AFDC))(this, e);
	}
	template <typename T = void> T OnSwitchScene() {
		return ((T (*)(AudioBankLoader*))(Il2CppBase() + 0x324B090))(this);
	}

};

}
