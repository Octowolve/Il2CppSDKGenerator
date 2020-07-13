#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TacticalRadarCompTCBombVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TacticalRadarComp_TCBombVolume"));
	}

	template <typename T = uintptr_t> T& BombVolumeSpriteA() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BombVolumeSpriteB() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BombVolumeSpriteBomb() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_TCGame() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_TCGameInfo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SpriteNames_A() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SpriteNames_B() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> static T& m_BombAreaSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_BombDropSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_BombSafeSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigBombVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AreaTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BombTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAreaSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBombSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteDepthInTacticalRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TacticalRadarCompTCBombVolume*))(Il2CppBase() + 0x29B14CC))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompTCBombVolume*))(Il2CppBase() + 0x29B1674))(this);
	}
	template <typename T = void> T ConfigBombVolume(uintptr_t pointType, uintptr_t carrierCamp) {
		return ((T (*)(TacticalRadarCompTCBombVolume*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29B1E90))(this, pointType, carrierCamp);
	}
	template <typename T = void> T AreaTick(uintptr_t carrierCamp) {
		return ((T (*)(TacticalRadarCompTCBombVolume*, uintptr_t))(Il2CppBase() + 0x29B183C))(this, carrierCamp);
	}
	template <typename T = void> T BombTick() {
		return ((T (*)(TacticalRadarCompTCBombVolume*))(Il2CppBase() + 0x29B19CC))(this);
	}
	template <typename T = Il2CppString*> T GetAreaSpriteName(uintptr_t pointType, uintptr_t carrierCamp) {
		return ((T (*)(TacticalRadarCompTCBombVolume*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29B2204))(this, pointType, carrierCamp);
	}
	template <typename T = Il2CppString*> T GetBombSpriteName(uintptr_t attackerCamp) {
		return ((T (*)(TacticalRadarCompTCBombVolume*, uintptr_t))(Il2CppBase() + 0x29B2380))(this, attackerCamp);
	}
	template <typename T = int32_t> T GetSpriteDepthInTacticalRadar(uintptr_t sprite) {
		return ((T (*)(TacticalRadarCompTCBombVolume*, uintptr_t))(Il2CppBase() + 0x29B24C8))(this, sprite);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarCompTCBombVolume*))(Il2CppBase() + 0x29B266C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompTCBombVolume*))(Il2CppBase() + 0x29B2674))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetSpriteDepthInTacticalRadar(uintptr_t P0) {
		return ((T (*)(TacticalRadarCompTCBombVolume*, uintptr_t))(Il2CppBase() + 0x29B267C))(this, P0);
	}

};

}
