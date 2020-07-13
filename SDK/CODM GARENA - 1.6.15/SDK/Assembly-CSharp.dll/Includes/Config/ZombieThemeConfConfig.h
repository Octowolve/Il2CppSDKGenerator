#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieThemeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieThemeConfConfig"));
	}

	template <typename T = uintptr_t> T& EStyle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ThemeID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MarkerID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& SmallResource() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& Style() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Open() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Action() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Param1() {
		return *(T*)((uintptr_t)this + 0x34);
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

	template <typename T = uintptr_t> T get_EStyle() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x4151F64))(this);
	}
	template <typename T = void> T set_EStyle(uintptr_t value) {
		return ((T (*)(ZombieThemeConfConfig*, uintptr_t))(Il2CppBase() + 0x4151F6C))(this, value);
	}
	template <typename T = uintptr_t> T get_EAction() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x4151F74))(this);
	}
	template <typename T = void> T set_EAction(uintptr_t value) {
		return ((T (*)(ZombieThemeConfConfig*, uintptr_t))(Il2CppBase() + 0x4151F7C))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x4151F84))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x41520B8))(this);
	}
	template <typename T = int32_t> T get_ThemeID() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x4152158))(this);
	}
	template <typename T = void> T set_ThemeID(int32_t value) {
		return ((T (*)(ZombieThemeConfConfig*, int32_t))(Il2CppBase() + 0x4152160))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x4152168))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ZombieThemeConfConfig*, Il2CppString*))(Il2CppBase() + 0x4152170))(this, value);
	}
	template <typename T = int32_t> T get_MarkerID() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x4152178))(this);
	}
	template <typename T = void> T set_MarkerID(int32_t value) {
		return ((T (*)(ZombieThemeConfConfig*, int32_t))(Il2CppBase() + 0x4152180))(this, value);
	}
	template <typename T = Il2CppString*> T get_SmallResource() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x4152188))(this);
	}
	template <typename T = void> T set_SmallResource(Il2CppString* value) {
		return ((T (*)(ZombieThemeConfConfig*, Il2CppString*))(Il2CppBase() + 0x4152190))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x4152198))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(ZombieThemeConfConfig*, Il2CppString*))(Il2CppBase() + 0x41521A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x41521A8))(this);
	}
	template <typename T = Il2CppString*> T get_Style() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x41520A8))(this);
	}
	template <typename T = void> T set_Style(Il2CppString* value) {
		return ((T (*)(ZombieThemeConfConfig*, Il2CppString*))(Il2CppBase() + 0x41521B8))(this, value);
	}
	template <typename T = bool> T get_Open() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x41521C0))(this);
	}
	template <typename T = void> T set_Open(bool value) {
		return ((T (*)(ZombieThemeConfConfig*, bool))(Il2CppBase() + 0x41521C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Action() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x41520B0))(this);
	}
	template <typename T = void> T set_Action(Il2CppString* value) {
		return ((T (*)(ZombieThemeConfConfig*, Il2CppString*))(Il2CppBase() + 0x41521D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Param1() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x41521D8))(this);
	}
	template <typename T = void> T set_Param1(Il2CppString* value) {
		return ((T (*)(ZombieThemeConfConfig*, Il2CppString*))(Il2CppBase() + 0x41521E0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieThemeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x41521E8))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ZombieThemeConfConfig*))(Il2CppBase() + 0x4152404))(this);
	}

};

}
