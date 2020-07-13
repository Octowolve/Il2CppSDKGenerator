#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombiePerkCoinConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombiePerkCoinConfConfig"));
	}

	template <typename T = int32_t> T& CoinID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& UseCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& RandomWeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MaxSpawnCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& PerkType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& RefID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& RemoveRefID() {
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
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x41515B4))(this);
	}
	template <typename T = int32_t> T get_CoinID() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x4151654))(this);
	}
	template <typename T = void> T set_CoinID(int32_t value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, int32_t))(Il2CppBase() + 0x415165C))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x4151664))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, int32_t))(Il2CppBase() + 0x415166C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x4151674))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, Il2CppString*))(Il2CppBase() + 0x415167C))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x4151684))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, int32_t))(Il2CppBase() + 0x415168C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x4151694))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, Il2CppString*))(Il2CppBase() + 0x415169C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x41516A4))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, Il2CppString*))(Il2CppBase() + 0x41516AC))(this, value);
	}
	template <typename T = int32_t> T get_UseCount() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x41516B4))(this);
	}
	template <typename T = void> T set_UseCount(int32_t value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, int32_t))(Il2CppBase() + 0x41516BC))(this, value);
	}
	template <typename T = int32_t> T get_RandomWeight() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x41516C4))(this);
	}
	template <typename T = void> T set_RandomWeight(int32_t value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, int32_t))(Il2CppBase() + 0x41516CC))(this, value);
	}
	template <typename T = int32_t> T get_MaxSpawnCount() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x41516D4))(this);
	}
	template <typename T = void> T set_MaxSpawnCount(int32_t value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, int32_t))(Il2CppBase() + 0x41516DC))(this, value);
	}
	template <typename T = int32_t> T get_PerkType() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x41516E4))(this);
	}
	template <typename T = void> T set_PerkType(int32_t value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, int32_t))(Il2CppBase() + 0x41516EC))(this, value);
	}
	template <typename T = int32_t> T get_RefID() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x41516F4))(this);
	}
	template <typename T = void> T set_RefID(int32_t value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, int32_t))(Il2CppBase() + 0x41516FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_RemoveRefID() {
		return ((T (*)(ZombiePerkCoinConfConfig*))(Il2CppBase() + 0x4151704))(this);
	}
	template <typename T = void> T set_RemoveRefID(Il2CppString* value) {
		return ((T (*)(ZombiePerkCoinConfConfig*, Il2CppString*))(Il2CppBase() + 0x415170C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombiePerkCoinConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4151714))(this, bytes, position);
	}

};

}
