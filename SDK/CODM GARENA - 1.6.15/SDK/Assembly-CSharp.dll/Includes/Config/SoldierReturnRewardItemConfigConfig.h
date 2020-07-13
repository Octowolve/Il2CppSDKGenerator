#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SoldierReturnRewardItemConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SoldierReturnRewardItemConfigConfig"));
	}

	template <typename T = Il2CppString*> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Rotate_x() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Rotate_y() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Rotate_z() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Scale_x() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Scale_y() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Scale_z() {
		return *(T*)((uintptr_t)this + 0x24);
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

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*))(Il2CppBase() + 0x30E20C8))(this);
	}
	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*))(Il2CppBase() + 0x30E2168))(this);
	}
	template <typename T = void> T set_Id(Il2CppString* value) {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*, Il2CppString*))(Il2CppBase() + 0x30E2170))(this, value);
	}
	template <typename T = float> T get_Rotate_x() {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*))(Il2CppBase() + 0x30E2178))(this);
	}
	template <typename T = void> T set_Rotate_x(float value) {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*, float))(Il2CppBase() + 0x30E2180))(this, value);
	}
	template <typename T = float> T get_Rotate_y() {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*))(Il2CppBase() + 0x30E2188))(this);
	}
	template <typename T = void> T set_Rotate_y(float value) {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*, float))(Il2CppBase() + 0x30E2190))(this, value);
	}
	template <typename T = float> T get_Rotate_z() {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*))(Il2CppBase() + 0x30E2198))(this);
	}
	template <typename T = void> T set_Rotate_z(float value) {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*, float))(Il2CppBase() + 0x30E21A0))(this, value);
	}
	template <typename T = float> T get_Scale_x() {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*))(Il2CppBase() + 0x30E21A8))(this);
	}
	template <typename T = void> T set_Scale_x(float value) {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*, float))(Il2CppBase() + 0x30E21B0))(this, value);
	}
	template <typename T = float> T get_Scale_y() {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*))(Il2CppBase() + 0x30E21B8))(this);
	}
	template <typename T = void> T set_Scale_y(float value) {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*, float))(Il2CppBase() + 0x30E21C0))(this, value);
	}
	template <typename T = float> T get_Scale_z() {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*))(Il2CppBase() + 0x30E21C8))(this);
	}
	template <typename T = void> T set_Scale_z(float value) {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*, float))(Il2CppBase() + 0x30E21D0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SoldierReturnRewardItemConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E21D8))(this, bytes, position);
	}

};

}
