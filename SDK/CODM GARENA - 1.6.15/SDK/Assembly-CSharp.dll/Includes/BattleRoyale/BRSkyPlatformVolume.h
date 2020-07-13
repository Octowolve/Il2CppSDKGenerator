#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkyPlatformVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkyPlatformVolume"));
	}

	template <typename T = uintptr_t> T& m_Box() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BRSkyPlatformVolume*))(Il2CppBase() + 0x1B401D8))(this);
	}
	template <typename T = bool> T IsInVolume(Il2CppVector3 pos) {
		return ((T (*)(BRSkyPlatformVolume*, Il2CppVector3))(Il2CppBase() + 0x1B3FAD8))(this, pos);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRSkyPlatformVolume*, uintptr_t))(Il2CppBase() + 0x1B4029C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRSkyPlatformVolume*, uintptr_t))(Il2CppBase() + 0x1B403E8))(this, other);
	}

};

}
