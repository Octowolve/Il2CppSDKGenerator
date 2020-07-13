#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFlyTrack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFlyTrack"));
	}

	template <typename T = bool> T& UseParticleSystem() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxDestroyTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxFlyTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DelayDestroyTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& TargetPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& dir() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_Time() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LineRenders() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ParticleSystems() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_AssetManaged() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& UseLineRenders() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetTargetPos(Il2CppVector3 start, Il2CppVector3 end) {
		return ((T (*)(WeaponFlyTrack*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4C4DC30))(this, start, end);
	}
	template <typename T = void> T DelayDespawn() {
		return ((T (*)(WeaponFlyTrack*))(Il2CppBase() + 0x4C4E044))(this);
	}
	template <typename T = void> T Despawn() {
		return ((T (*)(WeaponFlyTrack*))(Il2CppBase() + 0x4C4E118))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponFlyTrack*))(Il2CppBase() + 0x4C4E390))(this);
	}

};

}
