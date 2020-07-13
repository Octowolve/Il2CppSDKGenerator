#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkyPlatformMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkyPlatformMgr"));
	}

	template <typename T = int32_t> T& m_AssetId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_Position() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_AngleY() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_NextTickTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsLoadding() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_BRSkyPlatformObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_Volume() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsLoadByDistance() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& MaxLoadDistanceSqr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MinUnLoadDistanceSqr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyWorldShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSoundEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_IsOpen() {
		return ((T (*)(BRSkyPlatformMgr*))(Il2CppBase() + 0x1B3EABC))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(BRSkyPlatformMgr*))(Il2CppBase() + 0x1B3EACC))(this);
	}
	template <typename T = float> T get_AngleY() {
		return ((T (*)(BRSkyPlatformMgr*))(Il2CppBase() + 0x1B3EAE0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSkyPlatformMgr*))(Il2CppBase() + 0x1B3EAE8))(this);
	}
	template <typename T = void> T ApplyWorldShift(Il2CppVector3 shift) {
		return ((T (*)(BRSkyPlatformMgr*, Il2CppVector3))(Il2CppBase() + 0x1B3F070))(this, shift);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRSkyPlatformMgr*, float))(Il2CppBase() + 0x1B3F218))(this, deltaTime);
	}
	template <typename T = void> T OnSoundEvent(uintptr_t type, Il2CppVector3 pos) {
		return ((T (*)(BRSkyPlatformMgr*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1B3F784))(this, type, pos);
	}
	template <typename T = void> T TryLoad() {
		return ((T (*)(BRSkyPlatformMgr*))(Il2CppBase() + 0x1B3ED14))(this);
	}
	template <typename T = void> T OnAssetReady(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BRSkyPlatformMgr*, int32_t, uintptr_t))(Il2CppBase() + 0x1B3FC64))(this, assetId, arg);
	}
	template <typename T = void> T UnLoad() {
		return ((T (*)(BRSkyPlatformMgr*))(Il2CppBase() + 0x1B3F608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSkyPlatformMgr*))(Il2CppBase() + 0x1B40104))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyWorldShift(Il2CppVector3 P0) {
		return ((T (*)(BRSkyPlatformMgr*, Il2CppVector3))(Il2CppBase() + 0x1B4010C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRSkyPlatformMgr*, float))(Il2CppBase() + 0x1B4012C))(this, P0);
	}

};

}
