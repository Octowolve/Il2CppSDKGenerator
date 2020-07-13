#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieMapConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieMapConfConfig"));
	}

	template <typename T = int32_t> T& MapGroupID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_MapName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_BossName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MarkerID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& NormalInstanceID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& HardInstanceID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& HellInstanceID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NormalReward() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HardReward() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HellReward() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& BossSpriteName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x38);
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
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F380))(this);
	}
	template <typename T = int32_t> T get_MapGroupID() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F420))(this);
	}
	template <typename T = void> T set_MapGroupID(int32_t value) {
		return ((T (*)(ZombieMapConfConfig*, int32_t))(Il2CppBase() + 0x414F428))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_MapName() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F430))(this);
	}
	template <typename T = void> T set_LOCID_MapName(Il2CppString* value) {
		return ((T (*)(ZombieMapConfConfig*, Il2CppString*))(Il2CppBase() + 0x414F438))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapName() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F440))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_BossName() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F450))(this);
	}
	template <typename T = void> T set_LOCID_BossName(Il2CppString* value) {
		return ((T (*)(ZombieMapConfConfig*, Il2CppString*))(Il2CppBase() + 0x414F458))(this, value);
	}
	template <typename T = Il2CppString*> T get_BossName() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F460))(this);
	}
	template <typename T = int32_t> T get_MarkerID() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F470))(this);
	}
	template <typename T = void> T set_MarkerID(int32_t value) {
		return ((T (*)(ZombieMapConfConfig*, int32_t))(Il2CppBase() + 0x414F478))(this, value);
	}
	template <typename T = int32_t> T get_NormalInstanceID() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F480))(this);
	}
	template <typename T = void> T set_NormalInstanceID(int32_t value) {
		return ((T (*)(ZombieMapConfConfig*, int32_t))(Il2CppBase() + 0x414F488))(this, value);
	}
	template <typename T = int32_t> T get_HardInstanceID() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F490))(this);
	}
	template <typename T = void> T set_HardInstanceID(int32_t value) {
		return ((T (*)(ZombieMapConfConfig*, int32_t))(Il2CppBase() + 0x414F498))(this, value);
	}
	template <typename T = int32_t> T get_HellInstanceID() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F4A0))(this);
	}
	template <typename T = void> T set_HellInstanceID(int32_t value) {
		return ((T (*)(ZombieMapConfConfig*, int32_t))(Il2CppBase() + 0x414F4A8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_NormalReward() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F4B0))(this);
	}
	template <typename T = void> T set_NormalReward(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieMapConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x414F4B8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_HardReward() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F4C0))(this);
	}
	template <typename T = void> T set_HardReward(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieMapConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x414F4C8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_HellReward() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F4D0))(this);
	}
	template <typename T = void> T set_HellReward(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieMapConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x414F4D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_BossSpriteName() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F4E0))(this);
	}
	template <typename T = void> T set_BossSpriteName(Il2CppString* value) {
		return ((T (*)(ZombieMapConfConfig*, Il2CppString*))(Il2CppBase() + 0x414F4E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(ZombieMapConfConfig*))(Il2CppBase() + 0x414F4F0))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(ZombieMapConfConfig*, Il2CppString*))(Il2CppBase() + 0x414F4F8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieMapConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x414F500))(this, bytes, position);
	}

};

}
