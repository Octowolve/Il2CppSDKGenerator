#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class ElectricTripWireBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "ElectricTripWireBase"));
	}

	template <typename T = uintptr_t> T& LineEffectSocket() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& BaseEffect() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& InitTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& HasShownBaseEffect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& m_OwnerPlayerID() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBaseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uint32_t> T get_OwnerPlayerID() {
		return ((T (*)(ElectricTripWireBase*))(Il2CppBase() + 0x3D48D5C))(this);
	}
	template <typename T = void> T set_OwnerPlayerID(uint32_t value) {
		return ((T (*)(ElectricTripWireBase*, uint32_t))(Il2CppBase() + 0x3D48D64))(this, value);
	}
	template <typename T = void> T Init(uint32_t ownerPlayerID, uint32_t actorID) {
		return ((T (*)(ElectricTripWireBase*, uint32_t, uint32_t))(Il2CppBase() + 0x3D48D6C))(this, ownerPlayerID, actorID);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(ElectricTripWireBase*, uintptr_t))(Il2CppBase() + 0x3D49074))(this, damageInfo);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(ElectricTripWireBase*))(Il2CppBase() + 0x3D4913C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ElectricTripWireBase*, float))(Il2CppBase() + 0x3D49144))(this, deltaTime);
	}
	template <typename T = void> T ShowBaseEffect() {
		return ((T (*)(ElectricTripWireBase*))(Il2CppBase() + 0x3D48EF4))(this);
	}
	template <typename T = void> T HideEffect() {
		return ((T (*)(ElectricTripWireBase*))(Il2CppBase() + 0x3D49A64))(this);
	}
	template <typename T = void> T RefreshEffect() {
		return ((T (*)(ElectricTripWireBase*))(Il2CppBase() + 0x3D49B88))(this);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(ElectricTripWireBase*))(Il2CppBase() + 0x3D49C54))(this);
	}
	template <typename T = void> T ShowBaseEffectm__0(uintptr_t effect) {
		return ((T (*)(ElectricTripWireBase*, uintptr_t))(Il2CppBase() + 0x3D49DEC))(this, effect);
	}
	template <typename T = void> T DestroyEffectm__1(uintptr_t effect) {
		return ((T (*)(ElectricTripWireBase*, uintptr_t))(Il2CppBase() + 0x3D49FA8))(this, effect);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(ElectricTripWireBase*, uintptr_t))(Il2CppBase() + 0x3D4A0A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ElectricTripWireBase*, float))(Il2CppBase() + 0x3D4A0A8))(this, P0);
	}

};

}
