#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DamageVolumeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DamageVolumeComponent"));
	}

	template <typename T = float> T& DamageInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& DamageAmountEachTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& OnlyDamgeOpponent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& LifeSpawn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_OwnerCamp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<uint32_t, float>*> T& PawnIDInVolumeDic() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& AttTargetExceptPawnList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T AttachTo(uintptr_t root) {
		return ((T (*)(DamageVolumeComponent*, uintptr_t))(Il2CppBase() + 0x40D8F78))(this, root);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DamageVolumeComponent*))(Il2CppBase() + 0x40D9148))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(DamageVolumeComponent*, uintptr_t))(Il2CppBase() + 0x40D93DC))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(DamageVolumeComponent*, uintptr_t))(Il2CppBase() + 0x40D9780))(this, other);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DamageVolumeComponent*, float))(Il2CppBase() + 0x40D994C))(this, deltaTime);
	}
	template <typename T = bool> T CanDamage(uintptr_t P) {
		return ((T (*)(DamageVolumeComponent*, uintptr_t))(Il2CppBase() + 0x40D9F28))(this, P);
	}
	template <typename T = void> T DoDamage(uintptr_t attTarget) {
		return ((T (*)(DamageVolumeComponent*, uintptr_t))(Il2CppBase() + 0x40DA01C))(this, attTarget);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(DamageVolumeComponent*))(Il2CppBase() + 0x40DA2D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DamageVolumeComponent*))(Il2CppBase() + 0x40DA3E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(DamageVolumeComponent*, uintptr_t))(Il2CppBase() + 0x40DA3E8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(DamageVolumeComponent*, uintptr_t))(Il2CppBase() + 0x40DA3F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DamageVolumeComponent*, float))(Il2CppBase() + 0x40DA3F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(DamageVolumeComponent*))(Il2CppBase() + 0x40DA400))(this);
	}

};

}
