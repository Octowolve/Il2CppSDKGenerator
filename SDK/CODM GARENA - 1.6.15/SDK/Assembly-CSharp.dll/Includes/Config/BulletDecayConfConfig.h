#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BulletDecayConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BulletDecayConfConfig"));
	}

	template <typename T = uintptr_t> T& EBulletType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& BulletType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Decay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_EBulletType() {
		return ((T (*)(BulletDecayConfConfig*))(Il2CppBase() + 0x2D5AE5C))(this);
	}
	template <typename T = void> T set_EBulletType(uintptr_t value) {
		return ((T (*)(BulletDecayConfConfig*, uintptr_t))(Il2CppBase() + 0x2D5AE64))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BulletDecayConfConfig*))(Il2CppBase() + 0x2D5AE6C))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BulletDecayConfConfig*))(Il2CppBase() + 0x2D5AF48))(this);
	}
	template <typename T = int32_t> T get_BulletType() {
		return ((T (*)(BulletDecayConfConfig*))(Il2CppBase() + 0x2D5AF40))(this);
	}
	template <typename T = void> T set_BulletType(int32_t value) {
		return ((T (*)(BulletDecayConfConfig*, int32_t))(Il2CppBase() + 0x2D5B018))(this, value);
	}
	template <typename T = float> T get_Decay() {
		return ((T (*)(BulletDecayConfConfig*))(Il2CppBase() + 0x2D5B020))(this);
	}
	template <typename T = void> T set_Decay(float value) {
		return ((T (*)(BulletDecayConfConfig*, float))(Il2CppBase() + 0x2D5B028))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BulletDecayConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5B030))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BulletDecayConfConfig*))(Il2CppBase() + 0x2D5B188))(this);
	}

};

}
