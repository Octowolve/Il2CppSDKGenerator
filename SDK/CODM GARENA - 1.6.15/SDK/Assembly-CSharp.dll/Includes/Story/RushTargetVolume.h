#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class RushTargetVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "RushTargetVolume"));
	}

	template <typename T = float> T& EffectSizeRate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_VolumeMgr() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVolumeMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> T get_Radius() {
		return ((T (*)(RushTargetVolume*))(Il2CppBase() + 0x395B89C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RushTargetVolume*))(Il2CppBase() + 0x395B8A4))(this);
	}
	template <typename T = void> T SetVolumeMgr(uintptr_t volumeMgr) {
		return ((T (*)(RushTargetVolume*, uintptr_t))(Il2CppBase() + 0x395B9D4))(this, volumeMgr);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(RushTargetVolume*, uintptr_t))(Il2CppBase() + 0x395BA7C))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(RushTargetVolume*))(Il2CppBase() + 0x395BFA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(RushTargetVolume*, uintptr_t))(Il2CppBase() + 0x395BFA8))(this, P0);
	}

};

}
