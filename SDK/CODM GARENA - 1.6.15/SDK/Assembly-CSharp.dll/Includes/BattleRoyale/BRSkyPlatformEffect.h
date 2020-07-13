#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkyPlatformEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkyPlatformEffect"));
	}

	template <typename T = uintptr_t> T& CheckFlagType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& MinShowEffDis_Y() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& StepEffectAssets() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsInit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_NextTick() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_EffectObj() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_Camera() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowEffDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSLoginSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryLoadEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TmpFixEffectId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Update() {
		return ((T (*)(BRSkyPlatformEffect*))(Il2CppBase() + 0x1B3DF2C))(this);
	}
	template <typename T = void> T CheckShowEffDis() {
		return ((T (*)(BRSkyPlatformEffect*))(Il2CppBase() + 0x1B3E194))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRSkyPlatformEffect*))(Il2CppBase() + 0x1B3E4F0))(this);
	}
	template <typename T = void> T OnDSLoginSuccess() {
		return ((T (*)(BRSkyPlatformEffect*))(Il2CppBase() + 0x1B3E5A0))(this);
	}
	template <typename T = void> T TryLoadEffect() {
		return ((T (*)(BRSkyPlatformEffect*))(Il2CppBase() + 0x1B3E020))(this);
	}
	template <typename T = void> T LoadEffect(int32_t idx) {
		return ((T (*)(BRSkyPlatformEffect*, int32_t))(Il2CppBase() + 0x1B3E650))(this, idx);
	}
	template <typename T = int32_t> T TmpFixEffectId(int32_t effId) {
		return ((T (*)(BRSkyPlatformEffect*, int32_t))(Il2CppBase() + 0x1B3E8AC))(this, effId);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRSkyPlatformEffect*))(Il2CppBase() + 0x1B3E9B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDSLoginSuccess() {
		return ((T (*)(BRSkyPlatformEffect*))(Il2CppBase() + 0x1B3E9B8))(this);
	}

};

}
