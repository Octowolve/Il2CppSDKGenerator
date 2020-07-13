#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class InterferenceDroneTargetHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "InterferenceDroneTargetHUD"));
	}

	template <typename T = uintptr_t> T& ItemGO() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& NearestDistance() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& FurthestDistance() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& FurthestScale() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& ShowDuration() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_IsShowingHUD() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& m_LocalScale() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint32_t> T& m_TargetPlayerID() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(InterferenceDroneTargetHUD*))(Il2CppBase() + 0x3D517F0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(InterferenceDroneTargetHUD*, float))(Il2CppBase() + 0x3D517F8))(this, dt);
	}
	template <typename T = void> T SetScale(float scale) {
		return ((T (*)(InterferenceDroneTargetHUD*, float))(Il2CppBase() + 0x3D51E78))(this, scale);
	}
	template <typename T = void> T Show(uint32_t targetPlayerID) {
		return ((T (*)(InterferenceDroneTargetHUD*, uint32_t))(Il2CppBase() + 0x3D51F70))(this, targetPlayerID);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(InterferenceDroneTargetHUD*))(Il2CppBase() + 0x3D52078))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(InterferenceDroneTargetHUD*, float))(Il2CppBase() + 0x3D52138))(this, P0);
	}

};

}
