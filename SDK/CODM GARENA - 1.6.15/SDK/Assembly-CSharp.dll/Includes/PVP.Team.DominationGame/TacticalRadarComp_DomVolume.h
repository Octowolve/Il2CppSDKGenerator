#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class TacticalRadarCompDomVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "TacticalRadarComp_DomVolume"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& DomVolumeSprites() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DomVolumesProgressBar() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DomVolumeContestedSprites() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_DomAreaManager() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_BlueRing() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_RedRing() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SpriteName_Selfs() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SpriteName_Enemys() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SpriteName_Nones() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> static T& m_StrongholdSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_Inited() {
		return *(T*)((uintptr_t)this + 0xA4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetOccupySpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteDepthInTacticalRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TacticalRadarCompDomVolume*))(Il2CppBase() + 0x2B38930))(this);
	}
	template <typename T = void> T CheckInit() {
		return ((T (*)(TacticalRadarCompDomVolume*))(Il2CppBase() + 0x2B38A80))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompDomVolume*))(Il2CppBase() + 0x2B38CB4))(this);
	}
	template <typename T = Il2CppString*> T GetOccupySpriteName(uintptr_t camp) {
		return ((T (*)(TacticalRadarCompDomVolume*, uintptr_t))(Il2CppBase() + 0x2B39354))(this, camp);
	}
	template <typename T = Il2CppString*> T GetSpriteName(uintptr_t areaCamp, uintptr_t attackerCamp, uintptr_t state, float domRate, int32_t index) {
		return ((T (*)(TacticalRadarCompDomVolume*, uintptr_t, uintptr_t, uintptr_t, float, int32_t))(Il2CppBase() + 0x2B390D0))(this, areaCamp, attackerCamp, state, domRate, index);
	}
	template <typename T = int32_t> T GetSpriteDepthInTacticalRadar(uintptr_t sprite) {
		return ((T (*)(TacticalRadarCompDomVolume*, uintptr_t))(Il2CppBase() + 0x2B39454))(this, sprite);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarCompDomVolume*))(Il2CppBase() + 0x2B395F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompDomVolume*))(Il2CppBase() + 0x2B395FC))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetSpriteDepthInTacticalRadar(uintptr_t P0) {
		return ((T (*)(TacticalRadarCompDomVolume*, uintptr_t))(Il2CppBase() + 0x2B39604))(this, P0);
	}

};

}
