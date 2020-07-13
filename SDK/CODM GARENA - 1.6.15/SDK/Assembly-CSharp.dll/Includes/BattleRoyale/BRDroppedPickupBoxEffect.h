#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDroppedPickupBoxEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDroppedPickupBoxEffect"));
	}

	template <typename T = uintptr_t> T& EffectRoot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& EffectDelayShowTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bOpend() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffectAfterInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBoxAreaState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T InitEffect(int32_t actorId, int32_t itemId, Il2CppVector3 pos, Il2CppQuaternion rot) {
		return ((T (*)(BRDroppedPickupBoxEffect*, int32_t, int32_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x18BAEF8))(this, actorId, itemId, pos, rot);
	}
	template <typename T = void> T ShowEffectAfterInit() {
		return ((T (*)(BRDroppedPickupBoxEffect*))(Il2CppBase() + 0x18BB3BC))(this);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(BRDroppedPickupBoxEffect*, bool))(Il2CppBase() + 0x18B77DC))(this, bShow);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRDroppedPickupBoxEffect*))(Il2CppBase() + 0x18BB464))(this);
	}
	template <typename T = void> T SetState(bool bOpen) {
		return ((T (*)(BRDroppedPickupBoxEffect*, bool))(Il2CppBase() + 0x18B8DAC))(this, bOpen);
	}
	template <typename T = void> T SetBoxAreaState(uintptr_t status) {
		return ((T (*)(BRDroppedPickupBoxEffect*, uintptr_t))(Il2CppBase() + 0x18BB5BC))(this, status);
	}

};

}
