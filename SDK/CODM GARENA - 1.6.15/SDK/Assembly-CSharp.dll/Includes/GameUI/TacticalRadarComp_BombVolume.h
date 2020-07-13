#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TacticalRadarCompBombVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TacticalRadarComp_BombVolume"));
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
	template <typename T = uintptr_t> T& m_BombGame() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_BombGameInfo() {
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
		return ((T (*)(TacticalRadarCompBombVolume*))(Il2CppBase() + 0x29A9E90))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompBombVolume*))(Il2CppBase() + 0x29AA038))(this);
	}
	template <typename T = void> T ConfigBombVolume(uintptr_t pointType, bool isDefender, bool isBombPlanted) {
		return ((T (*)(TacticalRadarCompBombVolume*, uintptr_t, bool, bool))(Il2CppBase() + 0x29AA61C))(this, pointType, isDefender, isBombPlanted);
	}
	template <typename T = void> T AreaTick(bool isDefender, bool isBombPlanted) {
		return ((T (*)(TacticalRadarCompBombVolume*, bool, bool))(Il2CppBase() + 0x29AA210))(this, isDefender, isBombPlanted);
	}
	template <typename T = void> T BombTick(bool isDefender, bool isBombPlanted) {
		return ((T (*)(TacticalRadarCompBombVolume*, bool, bool))(Il2CppBase() + 0x29AA2F4))(this, isDefender, isBombPlanted);
	}
	template <typename T = Il2CppString*> T GetAreaSpriteName(uintptr_t pointType, uintptr_t plantedPointType, bool isC4BombPlanted, bool isDefender) {
		return ((T (*)(TacticalRadarCompBombVolume*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x29AA9C0))(this, pointType, plantedPointType, isC4BombPlanted, isDefender);
	}
	template <typename T = Il2CppString*> T GetBombSpriteName(bool isDropped, bool isDefender) {
		return ((T (*)(TacticalRadarCompBombVolume*, bool, bool))(Il2CppBase() + 0x29AAB08))(this, isDropped, isDefender);
	}
	template <typename T = int32_t> T GetSpriteDepthInTacticalRadar(uintptr_t sprite) {
		return ((T (*)(TacticalRadarCompBombVolume*, uintptr_t))(Il2CppBase() + 0x29AAC44))(this, sprite);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarCompBombVolume*))(Il2CppBase() + 0x29AADE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompBombVolume*))(Il2CppBase() + 0x29AADF0))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetSpriteDepthInTacticalRadar(uintptr_t P0) {
		return ((T (*)(TacticalRadarCompBombVolume*, uintptr_t))(Il2CppBase() + 0x29AADF8))(this, P0);
	}

};

}
