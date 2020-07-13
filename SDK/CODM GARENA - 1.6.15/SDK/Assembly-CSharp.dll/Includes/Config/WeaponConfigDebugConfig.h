#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponConfigDebugConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponConfigDebugConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& WeaponAttrShow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& WeaponAttr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& WeaponAttrDesc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& IsHipUse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Id() {
		return ((T (*)(WeaponConfigDebugConfig*))(Il2CppBase() + 0x30F68D8))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(WeaponConfigDebugConfig*, int32_t))(Il2CppBase() + 0x30F68E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponAttrShow() {
		return ((T (*)(WeaponConfigDebugConfig*))(Il2CppBase() + 0x30F68E8))(this);
	}
	template <typename T = void> T set_WeaponAttrShow(Il2CppString* value) {
		return ((T (*)(WeaponConfigDebugConfig*, Il2CppString*))(Il2CppBase() + 0x30F68F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponAttr() {
		return ((T (*)(WeaponConfigDebugConfig*))(Il2CppBase() + 0x30F68F8))(this);
	}
	template <typename T = void> T set_WeaponAttr(Il2CppString* value) {
		return ((T (*)(WeaponConfigDebugConfig*, Il2CppString*))(Il2CppBase() + 0x30F6900))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponAttrDesc() {
		return ((T (*)(WeaponConfigDebugConfig*))(Il2CppBase() + 0x30F6908))(this);
	}
	template <typename T = void> T set_WeaponAttrDesc(Il2CppString* value) {
		return ((T (*)(WeaponConfigDebugConfig*, Il2CppString*))(Il2CppBase() + 0x30F6910))(this, value);
	}
	template <typename T = int32_t> T get_IsHipUse() {
		return ((T (*)(WeaponConfigDebugConfig*))(Il2CppBase() + 0x30F6918))(this);
	}
	template <typename T = void> T set_IsHipUse(int32_t value) {
		return ((T (*)(WeaponConfigDebugConfig*, int32_t))(Il2CppBase() + 0x30F6920))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponConfigDebugConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F6928))(this, bytes, position);
	}

};

}
