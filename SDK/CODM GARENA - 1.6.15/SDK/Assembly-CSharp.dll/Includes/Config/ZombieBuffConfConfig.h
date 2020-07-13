#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieBuffConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieBuffConfConfig"));
	}

	template <typename T = int32_t> T& BuffID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& NamesShow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x20);
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
		return ((T (*)(ZombieBuffConfConfig*))(Il2CppBase() + 0x30FE068))(this);
	}
	template <typename T = int32_t> T get_BuffID() {
		return ((T (*)(ZombieBuffConfConfig*))(Il2CppBase() + 0x30FE108))(this);
	}
	template <typename T = void> T set_BuffID(int32_t value) {
		return ((T (*)(ZombieBuffConfConfig*, int32_t))(Il2CppBase() + 0x30FE110))(this, value);
	}
	template <typename T = Il2CppString*> T get_NamesShow() {
		return ((T (*)(ZombieBuffConfConfig*))(Il2CppBase() + 0x30FE118))(this);
	}
	template <typename T = void> T set_NamesShow(Il2CppString* value) {
		return ((T (*)(ZombieBuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FE120))(this, value);
	}
	template <typename T = int32_t> T get_MaxLevel() {
		return ((T (*)(ZombieBuffConfConfig*))(Il2CppBase() + 0x30FE128))(this);
	}
	template <typename T = void> T set_MaxLevel(int32_t value) {
		return ((T (*)(ZombieBuffConfConfig*, int32_t))(Il2CppBase() + 0x30FE130))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(ZombieBuffConfConfig*))(Il2CppBase() + 0x30FE138))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(ZombieBuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FE140))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ZombieBuffConfConfig*))(Il2CppBase() + 0x30FE148))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ZombieBuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FE150))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZombieBuffConfConfig*))(Il2CppBase() + 0x30FE158))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(ZombieBuffConfConfig*))(Il2CppBase() + 0x30FE168))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(ZombieBuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FE170))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ZombieBuffConfConfig*))(Il2CppBase() + 0x30FE178))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieBuffConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30FE188))(this, bytes, position);
	}

};

}
