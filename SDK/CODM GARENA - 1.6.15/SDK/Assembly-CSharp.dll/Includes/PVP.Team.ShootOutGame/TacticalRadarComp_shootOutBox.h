#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class TacticalRadarCompshootOutBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "TacticalRadarComp_shootOutBox"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& boxSpriteList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_idToLuaActorSpriteMap() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_usedSpriteCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOnClipPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompshootOutBox*))(Il2CppBase() + 0x34CADAC))(this);
	}
	template <typename T = void> T PrepareSprite() {
		return ((T (*)(TacticalRadarCompshootOutBox*))(Il2CppBase() + 0x34CB274))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(TacticalRadarCompshootOutBox*))(Il2CppBase() + 0x34CB984))(this);
	}
	template <typename T = bool> T ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompshootOutBox*))(Il2CppBase() + 0x34CBA2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompshootOutBox*))(Il2CppBase() + 0x34CBACC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Refresh() {
		return ((T (*)(TacticalRadarCompshootOutBox*))(Il2CppBase() + 0x34CBAD4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompshootOutBox*))(Il2CppBase() + 0x34CBADC))(this);
	}

};

}
