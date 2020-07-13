#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieMPPointsConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieMPPointsConfConfig"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& Level_points() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Damage_scale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Boss_damage_scale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Nboss_damage_scale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Hp_scale() {
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
		return ((T (*)(ZombieMPPointsConfConfig*))(Il2CppBase() + 0x4151244))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(ZombieMPPointsConfConfig*))(Il2CppBase() + 0x41512E4))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(ZombieMPPointsConfConfig*, int32_t))(Il2CppBase() + 0x41512EC))(this, value);
	}
	template <typename T = uint32_t> T get_Level_points() {
		return ((T (*)(ZombieMPPointsConfConfig*))(Il2CppBase() + 0x41512F4))(this);
	}
	template <typename T = void> T set_Level_points(uint32_t value) {
		return ((T (*)(ZombieMPPointsConfConfig*, uint32_t))(Il2CppBase() + 0x41512FC))(this, value);
	}
	template <typename T = float> T get_Damage_scale() {
		return ((T (*)(ZombieMPPointsConfConfig*))(Il2CppBase() + 0x4151304))(this);
	}
	template <typename T = void> T set_Damage_scale(float value) {
		return ((T (*)(ZombieMPPointsConfConfig*, float))(Il2CppBase() + 0x415130C))(this, value);
	}
	template <typename T = float> T get_Boss_damage_scale() {
		return ((T (*)(ZombieMPPointsConfConfig*))(Il2CppBase() + 0x4151314))(this);
	}
	template <typename T = void> T set_Boss_damage_scale(float value) {
		return ((T (*)(ZombieMPPointsConfConfig*, float))(Il2CppBase() + 0x415131C))(this, value);
	}
	template <typename T = float> T get_Nboss_damage_scale() {
		return ((T (*)(ZombieMPPointsConfConfig*))(Il2CppBase() + 0x4151324))(this);
	}
	template <typename T = void> T set_Nboss_damage_scale(float value) {
		return ((T (*)(ZombieMPPointsConfConfig*, float))(Il2CppBase() + 0x415132C))(this, value);
	}
	template <typename T = float> T get_Hp_scale() {
		return ((T (*)(ZombieMPPointsConfConfig*))(Il2CppBase() + 0x4151334))(this);
	}
	template <typename T = void> T set_Hp_scale(float value) {
		return ((T (*)(ZombieMPPointsConfConfig*, float))(Il2CppBase() + 0x415133C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieMPPointsConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4151344))(this, bytes, position);
	}

};

}
