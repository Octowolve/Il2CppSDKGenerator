#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GFObjectiveVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GFObjectiveVolume"));
	}

	template <typename T = float> T& ExistTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& OccupyTargetTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_HasOcclusionEffect() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector3> T& m_EffectSize() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAreaState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVolumeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GFObjectiveVolume*))(Il2CppBase() + 0x401D684))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GFObjectiveVolume*))(Il2CppBase() + 0x401D748))(this);
	}
	template <typename T = uintptr_t> T CreateAreaState() {
		return ((T (*)(GFObjectiveVolume*))(Il2CppBase() + 0x401D9A0))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(GFObjectiveVolume*, float))(Il2CppBase() + 0x401DA68))(this, fDeltaTime);
	}
	template <typename T = void> T PlayVolumeEffect() {
		return ((T (*)(GFObjectiveVolume*))(Il2CppBase() + 0x401DB08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(GFObjectiveVolume*))(Il2CppBase() + 0x401DE80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GFObjectiveVolume*))(Il2CppBase() + 0x401DE88))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateAreaState() {
		return ((T (*)(GFObjectiveVolume*))(Il2CppBase() + 0x401DE90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GFObjectiveVolume*, float))(Il2CppBase() + 0x401DE98))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayVolumeEffect() {
		return ((T (*)(GFObjectiveVolume*))(Il2CppBase() + 0x401DEA0))(this);
	}

};

}
