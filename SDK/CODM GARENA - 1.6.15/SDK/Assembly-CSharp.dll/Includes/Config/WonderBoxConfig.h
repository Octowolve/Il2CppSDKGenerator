#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WonderBoxConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WonderBoxConfig"));
	}

	template <typename T = int32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PoolType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& AttachID_1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& AttachID_2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& AttachID_3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& AttachID_4() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Probability() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(WonderBoxConfig*))(Il2CppBase() + 0x30FD8C4))(this);
	}
	template <typename T = void> T set_MapID(int32_t value) {
		return ((T (*)(WonderBoxConfig*, int32_t))(Il2CppBase() + 0x30FD8CC))(this, value);
	}
	template <typename T = int32_t> T get_PoolType() {
		return ((T (*)(WonderBoxConfig*))(Il2CppBase() + 0x30FD8D4))(this);
	}
	template <typename T = void> T set_PoolType(int32_t value) {
		return ((T (*)(WonderBoxConfig*, int32_t))(Il2CppBase() + 0x30FD8DC))(this, value);
	}
	template <typename T = uint32_t> T get_ItemID() {
		return ((T (*)(WonderBoxConfig*))(Il2CppBase() + 0x30FD8E4))(this);
	}
	template <typename T = void> T set_ItemID(uint32_t value) {
		return ((T (*)(WonderBoxConfig*, uint32_t))(Il2CppBase() + 0x30FD8EC))(this, value);
	}
	template <typename T = uint32_t> T get_AttachID_1() {
		return ((T (*)(WonderBoxConfig*))(Il2CppBase() + 0x30FD8F4))(this);
	}
	template <typename T = void> T set_AttachID_1(uint32_t value) {
		return ((T (*)(WonderBoxConfig*, uint32_t))(Il2CppBase() + 0x30FD8FC))(this, value);
	}
	template <typename T = uint32_t> T get_AttachID_2() {
		return ((T (*)(WonderBoxConfig*))(Il2CppBase() + 0x30FD904))(this);
	}
	template <typename T = void> T set_AttachID_2(uint32_t value) {
		return ((T (*)(WonderBoxConfig*, uint32_t))(Il2CppBase() + 0x30FD90C))(this, value);
	}
	template <typename T = uint32_t> T get_AttachID_3() {
		return ((T (*)(WonderBoxConfig*))(Il2CppBase() + 0x30FD914))(this);
	}
	template <typename T = void> T set_AttachID_3(uint32_t value) {
		return ((T (*)(WonderBoxConfig*, uint32_t))(Il2CppBase() + 0x30FD91C))(this, value);
	}
	template <typename T = uint32_t> T get_AttachID_4() {
		return ((T (*)(WonderBoxConfig*))(Il2CppBase() + 0x30FD924))(this);
	}
	template <typename T = void> T set_AttachID_4(uint32_t value) {
		return ((T (*)(WonderBoxConfig*, uint32_t))(Il2CppBase() + 0x30FD92C))(this, value);
	}
	template <typename T = int32_t> T get_Probability() {
		return ((T (*)(WonderBoxConfig*))(Il2CppBase() + 0x30FD934))(this);
	}
	template <typename T = void> T set_Probability(int32_t value) {
		return ((T (*)(WonderBoxConfig*, int32_t))(Il2CppBase() + 0x30FD93C))(this, value);
	}
	template <typename T = uint32_t> T get_Quality() {
		return ((T (*)(WonderBoxConfig*))(Il2CppBase() + 0x30FD944))(this);
	}
	template <typename T = void> T set_Quality(uint32_t value) {
		return ((T (*)(WonderBoxConfig*, uint32_t))(Il2CppBase() + 0x30FD94C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WonderBoxConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30FD954))(this, bytes, position);
	}

};

}
