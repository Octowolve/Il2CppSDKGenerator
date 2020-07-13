#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SentryGunNPCInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SentryGunNPCInfoConfig"));
	}

	template <typename T = uintptr_t> T& EActorType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ActorType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& HP() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& DefenseV() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DefenseH() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& DestorySocre() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& TripodMeshID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& HalfWidth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& HalfHeight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& HalfLength() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& SlopeLimit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ResistanceID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& FireInterval() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& LockTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& CoexistenceNum() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& MissileNum() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& MaxMissileNum() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDB88))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDC94))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDD34))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDD3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActorType() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDC8C))(this);
	}
	template <typename T = void> T set_ActorType(Il2CppString* value) {
		return ((T (*)(SentryGunNPCInfoConfig*, Il2CppString*))(Il2CppBase() + 0x30DDD44))(this, value);
	}
	template <typename T = int32_t> T get_HP() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDD4C))(this);
	}
	template <typename T = void> T set_HP(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDD54))(this, value);
	}
	template <typename T = int32_t> T get_LifeTime() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDD5C))(this);
	}
	template <typename T = void> T set_LifeTime(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDD64))(this, value);
	}
	template <typename T = int32_t> T get_DefenseV() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDD6C))(this);
	}
	template <typename T = void> T set_DefenseV(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDD74))(this, value);
	}
	template <typename T = int32_t> T get_DefenseH() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDD7C))(this);
	}
	template <typename T = void> T set_DefenseH(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDD84))(this, value);
	}
	template <typename T = int32_t> T get_DestorySocre() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDD8C))(this);
	}
	template <typename T = void> T set_DestorySocre(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDD94))(this, value);
	}
	template <typename T = int32_t> T get_TripodMeshID() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDD9C))(this);
	}
	template <typename T = void> T set_TripodMeshID(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDDA4))(this, value);
	}
	template <typename T = float> T get_HalfWidth() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDDAC))(this);
	}
	template <typename T = void> T set_HalfWidth(float value) {
		return ((T (*)(SentryGunNPCInfoConfig*, float))(Il2CppBase() + 0x30DDDB4))(this, value);
	}
	template <typename T = float> T get_HalfHeight() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDDBC))(this);
	}
	template <typename T = void> T set_HalfHeight(float value) {
		return ((T (*)(SentryGunNPCInfoConfig*, float))(Il2CppBase() + 0x30DDDC4))(this, value);
	}
	template <typename T = float> T get_HalfLength() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDDCC))(this);
	}
	template <typename T = void> T set_HalfLength(float value) {
		return ((T (*)(SentryGunNPCInfoConfig*, float))(Il2CppBase() + 0x30DDDD4))(this, value);
	}
	template <typename T = int32_t> T get_WeaponID() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDDDC))(this);
	}
	template <typename T = void> T set_WeaponID(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDDE4))(this, value);
	}
	template <typename T = int32_t> T get_SlopeLimit() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDDEC))(this);
	}
	template <typename T = void> T set_SlopeLimit(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDDF4))(this, value);
	}
	template <typename T = int32_t> T get_ResistanceID() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDDFC))(this);
	}
	template <typename T = void> T set_ResistanceID(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDE04))(this, value);
	}
	template <typename T = float> T get_FireInterval() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDE0C))(this);
	}
	template <typename T = void> T set_FireInterval(float value) {
		return ((T (*)(SentryGunNPCInfoConfig*, float))(Il2CppBase() + 0x30DDE14))(this, value);
	}
	template <typename T = float> T get_LockTime() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDE1C))(this);
	}
	template <typename T = void> T set_LockTime(float value) {
		return ((T (*)(SentryGunNPCInfoConfig*, float))(Il2CppBase() + 0x30DDE24))(this, value);
	}
	template <typename T = int32_t> T get_CoexistenceNum() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDE2C))(this);
	}
	template <typename T = void> T set_CoexistenceNum(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDE34))(this, value);
	}
	template <typename T = int32_t> T get_MissileNum() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDE3C))(this);
	}
	template <typename T = void> T set_MissileNum(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDE44))(this, value);
	}
	template <typename T = int32_t> T get_MaxMissileNum() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DDE4C))(this);
	}
	template <typename T = void> T set_MaxMissileNum(int32_t value) {
		return ((T (*)(SentryGunNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30DDE54))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SentryGunNPCInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DDE5C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SentryGunNPCInfoConfig*))(Il2CppBase() + 0x30DE11C))(this);
	}

};

}
