#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class HelicopterNPCInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "HelicopterNPCInfoConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& HP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& DestorySocre() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& DefauleFlySpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& DisplayFlySpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& LockEnemyRaduis() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& DelayFireTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& TurnBackSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& FireAngleH() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& FireAngleV() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& MoveDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& MeshID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& HalfWidth() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& HalfHeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& HalfLength() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& ResistanceID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& CruiseRadius() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& SPMfly() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37637FC))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376389C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x37638A4))(this, value);
	}
	template <typename T = float> T get_HP() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37638AC))(this);
	}
	template <typename T = void> T set_HP(float value) {
		return ((T (*)(HelicopterNPCInfoConfig*, float))(Il2CppBase() + 0x37638B4))(this, value);
	}
	template <typename T = int32_t> T get_DestorySocre() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37638BC))(this);
	}
	template <typename T = void> T set_DestorySocre(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x37638C4))(this, value);
	}
	template <typename T = int32_t> T get_LifeTime() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37638CC))(this);
	}
	template <typename T = void> T set_LifeTime(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x37638D4))(this, value);
	}
	template <typename T = int32_t> T get_DefauleFlySpeed() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37638DC))(this);
	}
	template <typename T = void> T set_DefauleFlySpeed(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x37638E4))(this, value);
	}
	template <typename T = int32_t> T get_DisplayFlySpeed() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37638EC))(this);
	}
	template <typename T = void> T set_DisplayFlySpeed(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x37638F4))(this, value);
	}
	template <typename T = int32_t> T get_LockEnemyRaduis() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37638FC))(this);
	}
	template <typename T = void> T set_LockEnemyRaduis(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x3763904))(this, value);
	}
	template <typename T = float> T get_DelayFireTime() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376390C))(this);
	}
	template <typename T = void> T set_DelayFireTime(float value) {
		return ((T (*)(HelicopterNPCInfoConfig*, float))(Il2CppBase() + 0x3763914))(this, value);
	}
	template <typename T = int32_t> T get_TurnBackSpeed() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376391C))(this);
	}
	template <typename T = void> T set_TurnBackSpeed(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x3763924))(this, value);
	}
	template <typename T = int32_t> T get_FireAngleH() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376392C))(this);
	}
	template <typename T = void> T set_FireAngleH(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x3763934))(this, value);
	}
	template <typename T = int32_t> T get_FireAngleV() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376393C))(this);
	}
	template <typename T = void> T set_FireAngleV(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x3763944))(this, value);
	}
	template <typename T = float> T get_MoveDuration() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376394C))(this);
	}
	template <typename T = void> T set_MoveDuration(float value) {
		return ((T (*)(HelicopterNPCInfoConfig*, float))(Il2CppBase() + 0x3763954))(this, value);
	}
	template <typename T = int32_t> T get_MeshID() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376395C))(this);
	}
	template <typename T = void> T set_MeshID(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x3763964))(this, value);
	}
	template <typename T = int32_t> T get_HalfWidth() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376396C))(this);
	}
	template <typename T = void> T set_HalfWidth(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x3763974))(this, value);
	}
	template <typename T = float> T get_HalfHeight() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376397C))(this);
	}
	template <typename T = void> T set_HalfHeight(float value) {
		return ((T (*)(HelicopterNPCInfoConfig*, float))(Il2CppBase() + 0x3763984))(this, value);
	}
	template <typename T = int32_t> T get_HalfLength() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376398C))(this);
	}
	template <typename T = void> T set_HalfLength(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x3763994))(this, value);
	}
	template <typename T = int32_t> T get_WeaponID() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x376399C))(this);
	}
	template <typename T = void> T set_WeaponID(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x37639A4))(this, value);
	}
	template <typename T = int32_t> T get_ResistanceID() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37639AC))(this);
	}
	template <typename T = void> T set_ResistanceID(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x37639B4))(this, value);
	}
	template <typename T = int32_t> T get_CruiseRadius() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37639BC))(this);
	}
	template <typename T = void> T set_CruiseRadius(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x37639C4))(this, value);
	}
	template <typename T = int32_t> T get_SPMfly() {
		return ((T (*)(HelicopterNPCInfoConfig*))(Il2CppBase() + 0x37639CC))(this);
	}
	template <typename T = void> T set_SPMfly(int32_t value) {
		return ((T (*)(HelicopterNPCInfoConfig*, int32_t))(Il2CppBase() + 0x37639D4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(HelicopterNPCInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37639DC))(this, bytes, position);
	}

};

}
