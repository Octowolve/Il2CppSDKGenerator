#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BulletBarrierConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BulletBarrierConfConfig"));
	}

	template <typename T = float> T& Decay() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EBulletType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EBarrierType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& BulletType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& BarrierType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& CanPene() {
		return *(T*)((uintptr_t)this + 0x20);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(BulletBarrierConfConfig*))(Il2CppBase() + 0x2D5A960))(this);
	}
	template <typename T = int32_t> T get_BulletType() {
		return ((T (*)(BulletBarrierConfConfig*))(Il2CppBase() + 0x2D5AA3C))(this);
	}
	template <typename T = void> T set_BulletType(int32_t value) {
		return ((T (*)(BulletBarrierConfConfig*, int32_t))(Il2CppBase() + 0x2D5AA4C))(this, value);
	}
	template <typename T = int32_t> T get_BarrierType() {
		return ((T (*)(BulletBarrierConfConfig*))(Il2CppBase() + 0x2D5AA44))(this);
	}
	template <typename T = void> T set_BarrierType(int32_t value) {
		return ((T (*)(BulletBarrierConfConfig*, int32_t))(Il2CppBase() + 0x2D5AA54))(this, value);
	}
	template <typename T = bool> T get_CanPene() {
		return ((T (*)(BulletBarrierConfConfig*))(Il2CppBase() + 0x2D5AA5C))(this);
	}
	template <typename T = void> T set_CanPene(bool value) {
		return ((T (*)(BulletBarrierConfConfig*, bool))(Il2CppBase() + 0x2D5AA64))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BulletBarrierConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5AA6C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BulletBarrierConfConfig*))(Il2CppBase() + 0x2D5ABDC))(this);
	}

};

}
