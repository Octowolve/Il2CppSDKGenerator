#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class LocalCombatVolumeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "LocalCombatVolumeManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& LocalCombatVolumes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsPlayerInArea() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_PlayerLeaveAreaTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_WaitTimeBeforeWarning() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_WarningTimeBeforeFailed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerLeaveVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LocalCombatVolumeManager*))(Il2CppBase() + 0x395B364))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterVolume() {
		return ((T (*)(LocalCombatVolumeManager*))(Il2CppBase() + 0x395AE38))(this);
	}
	template <typename T = void> T OnLocalPlayerLeaveVolume() {
		return ((T (*)(LocalCombatVolumeManager*))(Il2CppBase() + 0x395B1E4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LocalCombatVolumeManager*))(Il2CppBase() + 0x395B4D8))(this);
	}

};

}
