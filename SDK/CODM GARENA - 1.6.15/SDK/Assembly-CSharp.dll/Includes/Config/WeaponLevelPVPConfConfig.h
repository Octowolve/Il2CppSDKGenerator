#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponLevelPVPConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponLevelPVPConfConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& WeaponLevelExpList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Exp1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Level_exp1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Exp2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Level_exp2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Exp3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Level_exp3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Exp4() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Level_exp4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Exp5() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Level_exp5() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Exp6() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Level_exp6() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Exp7() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Level_exp7() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Exp8() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Level_exp8() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Exp9() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Level_exp9() {
		return *(T*)((uintptr_t)this + 0x58);
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

	template <typename T = void> T PostInit() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F89D4))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8EE4))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8F84))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8F8C))(this, value);
	}
	template <typename T = int32_t> T get_Exp1() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E54))(this);
	}
	template <typename T = void> T set_Exp1(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8F94))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp1() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E5C))(this);
	}
	template <typename T = void> T set_Level_exp1(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8F9C))(this, value);
	}
	template <typename T = int32_t> T get_Exp2() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E64))(this);
	}
	template <typename T = void> T set_Exp2(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FA4))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp2() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E6C))(this);
	}
	template <typename T = void> T set_Level_exp2(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FAC))(this, value);
	}
	template <typename T = int32_t> T get_Exp3() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E74))(this);
	}
	template <typename T = void> T set_Exp3(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FB4))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp3() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E7C))(this);
	}
	template <typename T = void> T set_Level_exp3(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FBC))(this, value);
	}
	template <typename T = int32_t> T get_Exp4() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E84))(this);
	}
	template <typename T = void> T set_Exp4(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FC4))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp4() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E8C))(this);
	}
	template <typename T = void> T set_Level_exp4(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FCC))(this, value);
	}
	template <typename T = int32_t> T get_Exp5() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E94))(this);
	}
	template <typename T = void> T set_Exp5(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FD4))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp5() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8E9C))(this);
	}
	template <typename T = void> T set_Level_exp5(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FDC))(this, value);
	}
	template <typename T = int32_t> T get_Exp6() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8EA4))(this);
	}
	template <typename T = void> T set_Exp6(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FE4))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp6() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8EAC))(this);
	}
	template <typename T = void> T set_Level_exp6(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FEC))(this, value);
	}
	template <typename T = int32_t> T get_Exp7() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8EB4))(this);
	}
	template <typename T = void> T set_Exp7(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FF4))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp7() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8EBC))(this);
	}
	template <typename T = void> T set_Level_exp7(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F8FFC))(this, value);
	}
	template <typename T = int32_t> T get_Exp8() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8EC4))(this);
	}
	template <typename T = void> T set_Exp8(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F9004))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp8() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8ECC))(this);
	}
	template <typename T = void> T set_Level_exp8(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F900C))(this, value);
	}
	template <typename T = int32_t> T get_Exp9() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8ED4))(this);
	}
	template <typename T = void> T set_Exp9(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F9014))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp9() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F8EDC))(this);
	}
	template <typename T = void> T set_Level_exp9(int32_t value) {
		return ((T (*)(WeaponLevelPVPConfConfig*, int32_t))(Il2CppBase() + 0x30F901C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponLevelPVPConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F9024))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(WeaponLevelPVPConfConfig*))(Il2CppBase() + 0x30F92E4))(this);
	}

};

}
