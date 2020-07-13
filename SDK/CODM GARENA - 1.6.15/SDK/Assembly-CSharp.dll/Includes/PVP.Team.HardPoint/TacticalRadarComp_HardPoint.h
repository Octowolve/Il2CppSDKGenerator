#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.HardPoint {

class TacticalRadarCompHardPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.HardPoint", "TacticalRadarComp_HardPoint"));
	}

	template <typename T = uintptr_t> T& HPVolumeSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_HPManager() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_Selfs() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_Enemys() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_Nones() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_Contest() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> static T& m_StrongholdSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_Inited() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteDepthInTacticalRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TacticalRadarCompHardPoint*))(Il2CppBase() + 0x4030C54))(this);
	}
	template <typename T = void> T CheckInit() {
		return ((T (*)(TacticalRadarCompHardPoint*))(Il2CppBase() + 0x4030DFC))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompHardPoint*))(Il2CppBase() + 0x4030FB4))(this);
	}
	template <typename T = Il2CppString*> T GetSpriteName(uintptr_t state, int32_t index) {
		return ((T (*)(TacticalRadarCompHardPoint*, uintptr_t, int32_t))(Il2CppBase() + 0x4031288))(this, state, index);
	}
	template <typename T = int32_t> T GetSpriteDepthInTacticalRadar(uintptr_t sprite) {
		return ((T (*)(TacticalRadarCompHardPoint*, uintptr_t))(Il2CppBase() + 0x4031510))(this, sprite);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarCompHardPoint*))(Il2CppBase() + 0x4031610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompHardPoint*))(Il2CppBase() + 0x4031618))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetSpriteDepthInTacticalRadar(uintptr_t P0) {
		return ((T (*)(TacticalRadarCompHardPoint*, uintptr_t))(Il2CppBase() + 0x4031620))(this, P0);
	}

};

}
