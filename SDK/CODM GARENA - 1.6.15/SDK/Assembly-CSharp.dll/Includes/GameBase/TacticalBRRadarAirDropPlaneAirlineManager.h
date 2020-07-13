#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRRadarAirDropPlaneAirlineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRRadarAirDropPlaneAirlineManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AirDropPlaneItemList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AirDropPlaneSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OnPlaneAirDropSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OffPlaneAirDropSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& airDropList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirlineState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirDropPlaneSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOffPlaneAirDropSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTankSpriteSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRRadarAirDropPlaneAirlineManager*))(Il2CppBase() + 0x30BAEE0))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRRadarAirDropPlaneAirlineManager*))(Il2CppBase() + 0x30C03A0))(this);
	}
	template <typename T = void> T UpdateAirlineState() {
		return ((T (*)(TacticalBRRadarAirDropPlaneAirlineManager*))(Il2CppBase() + 0x30BCFF4))(this);
	}
	template <typename T = void> T UpdateAirDropPlaneSprite() {
		return ((T (*)(TacticalBRRadarAirDropPlaneAirlineManager*))(Il2CppBase() + 0x30BB0EC))(this);
	}
	template <typename T = void> T UpdateOffPlaneAirDropSprites() {
		return ((T (*)(TacticalBRRadarAirDropPlaneAirlineManager*))(Il2CppBase() + 0x30BBFE0))(this);
	}
	template <typename T = Il2CppVector3> T GetTankSpriteSize(float size) {
		return ((T (*)(TacticalBRRadarAirDropPlaneAirlineManager*, float))(Il2CppBase() + 0x30C0450))(this, size);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRRadarAirDropPlaneAirlineManager*))(Il2CppBase() + 0x30C0550))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRRadarAirDropPlaneAirlineManager*))(Il2CppBase() + 0x30C0558))(this);
	}

};

}
