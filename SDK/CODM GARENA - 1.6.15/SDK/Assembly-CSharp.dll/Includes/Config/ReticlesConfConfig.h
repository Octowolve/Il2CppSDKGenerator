#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ReticlesConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ReticlesConfConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& AdaptedOpticsID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& NeedUnlocked() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& UnlockKill() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& GetXP() {
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

	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D986C))(this);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D991C))(this);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9924))(this);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D992C))(this);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9934))(this);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D993C))(this);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9944))(this);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D994C))(this);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9954))(this);
	}
	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9A04))(this);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9A0C))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9A14))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9AB4))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(ReticlesConfConfig*, uint32_t))(Il2CppBase() + 0x30D9ABC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9AC4))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ReticlesConfConfig*, Il2CppString*))(Il2CppBase() + 0x30D9ACC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9AD4))(this);
	}
	template <typename T = int32_t> T get_AdaptedOpticsID() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9AE4))(this);
	}
	template <typename T = void> T set_AdaptedOpticsID(int32_t value) {
		return ((T (*)(ReticlesConfConfig*, int32_t))(Il2CppBase() + 0x30D9AEC))(this, value);
	}
	template <typename T = bool> T get_NeedUnlocked() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9AF4))(this);
	}
	template <typename T = void> T set_NeedUnlocked(bool value) {
		return ((T (*)(ReticlesConfConfig*, bool))(Il2CppBase() + 0x30D9AFC))(this, value);
	}
	template <typename T = int32_t> T get_UnlockKill() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9B04))(this);
	}
	template <typename T = void> T set_UnlockKill(int32_t value) {
		return ((T (*)(ReticlesConfConfig*, int32_t))(Il2CppBase() + 0x30D9B0C))(this, value);
	}
	template <typename T = int32_t> T get_GetXP() {
		return ((T (*)(ReticlesConfConfig*))(Il2CppBase() + 0x30D9B14))(this);
	}
	template <typename T = void> T set_GetXP(int32_t value) {
		return ((T (*)(ReticlesConfConfig*, int32_t))(Il2CppBase() + 0x30D9B1C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ReticlesConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30D9B24))(this, bytes, position);
	}

};

}
