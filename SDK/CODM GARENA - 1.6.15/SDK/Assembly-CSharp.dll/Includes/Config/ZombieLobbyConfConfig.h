#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieLobbyConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieLobbyConfConfig"));
	}

	template <typename T = uintptr_t> T& ZBType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Entrance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Sequence() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_EntranceName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_ModeName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& UnlockId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& IsOpen() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSortedEntryConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEntryConfigByZbType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_ZBType() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E214))(this);
	}
	template <typename T = void> T set_ZBType(uintptr_t value) {
		return ((T (*)(ZombieLobbyConfConfig*, uintptr_t))(Il2CppBase() + 0x414E21C))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E224))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetSortedEntryConfigs() {
		return ((T (*)(void *))(Il2CppBase() + 0x414E330))(0);
	}
	template <typename T = uintptr_t> static T GetEntryConfigByZbType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x414E6E0))(0, type);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E87C))(this);
	}
	template <typename T = int32_t> T get_Key() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E91C))(this);
	}
	template <typename T = void> T set_Key(int32_t value) {
		return ((T (*)(ZombieLobbyConfConfig*, int32_t))(Il2CppBase() + 0x414E924))(this, value);
	}
	template <typename T = Il2CppString*> T get_Entrance() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E328))(this);
	}
	template <typename T = void> T set_Entrance(Il2CppString* value) {
		return ((T (*)(ZombieLobbyConfConfig*, Il2CppString*))(Il2CppBase() + 0x414E92C))(this, value);
	}
	template <typename T = int32_t> T get_Sequence() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E934))(this);
	}
	template <typename T = void> T set_Sequence(int32_t value) {
		return ((T (*)(ZombieLobbyConfConfig*, int32_t))(Il2CppBase() + 0x414E93C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_EntranceName() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E944))(this);
	}
	template <typename T = void> T set_LOCID_EntranceName(Il2CppString* value) {
		return ((T (*)(ZombieLobbyConfConfig*, Il2CppString*))(Il2CppBase() + 0x414E94C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EntranceName() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E954))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_ModeName() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E964))(this);
	}
	template <typename T = void> T set_LOCID_ModeName(Il2CppString* value) {
		return ((T (*)(ZombieLobbyConfConfig*, Il2CppString*))(Il2CppBase() + 0x414E96C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeName() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E974))(this);
	}
	template <typename T = int32_t> T get_UnlockId() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E984))(this);
	}
	template <typename T = void> T set_UnlockId(int32_t value) {
		return ((T (*)(ZombieLobbyConfConfig*, int32_t))(Il2CppBase() + 0x414E98C))(this, value);
	}
	template <typename T = int32_t> T get_IsOpen() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414E994))(this);
	}
	template <typename T = void> T set_IsOpen(int32_t value) {
		return ((T (*)(ZombieLobbyConfConfig*, int32_t))(Il2CppBase() + 0x414E99C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieLobbyConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x414E9A4))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ZombieLobbyConfConfig*))(Il2CppBase() + 0x414EBA0))(this);
	}

};

}
