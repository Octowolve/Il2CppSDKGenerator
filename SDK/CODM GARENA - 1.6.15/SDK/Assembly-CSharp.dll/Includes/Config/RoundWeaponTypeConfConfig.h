#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RoundWeaponTypeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RoundWeaponTypeConfConfig"));
	}

	template <typename T = Il2CppString*> T& ModeID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RoundID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SlotIdx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& FireArmType_1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Weight_1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Desc_1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& FireArmType_2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Weight_2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Desc_2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& FireArmType_3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Weight_3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& Desc_3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& FireArmType_4() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Weight_4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& Desc_4() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_ModeID() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB8A0))(this);
	}
	template <typename T = void> T set_ModeID(Il2CppString* value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DB8A8))(this, value);
	}
	template <typename T = int32_t> T get_RoundID() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB8B0))(this);
	}
	template <typename T = void> T set_RoundID(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB8B8))(this, value);
	}
	template <typename T = int32_t> T get_SlotIdx() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB8C0))(this);
	}
	template <typename T = void> T set_SlotIdx(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB8C8))(this, value);
	}
	template <typename T = int32_t> T get_FireArmType_1() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB8D0))(this);
	}
	template <typename T = void> T set_FireArmType_1(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB8D8))(this, value);
	}
	template <typename T = int32_t> T get_Weight_1() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB8E0))(this);
	}
	template <typename T = void> T set_Weight_1(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB8E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc_1() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB8F0))(this);
	}
	template <typename T = void> T set_Desc_1(Il2CppString* value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DB8F8))(this, value);
	}
	template <typename T = int32_t> T get_FireArmType_2() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB900))(this);
	}
	template <typename T = void> T set_FireArmType_2(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB908))(this, value);
	}
	template <typename T = int32_t> T get_Weight_2() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB910))(this);
	}
	template <typename T = void> T set_Weight_2(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB918))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc_2() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB920))(this);
	}
	template <typename T = void> T set_Desc_2(Il2CppString* value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DB928))(this, value);
	}
	template <typename T = int32_t> T get_FireArmType_3() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB930))(this);
	}
	template <typename T = void> T set_FireArmType_3(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB938))(this, value);
	}
	template <typename T = int32_t> T get_Weight_3() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB940))(this);
	}
	template <typename T = void> T set_Weight_3(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB948))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc_3() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB950))(this);
	}
	template <typename T = void> T set_Desc_3(Il2CppString* value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DB958))(this, value);
	}
	template <typename T = int32_t> T get_FireArmType_4() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB960))(this);
	}
	template <typename T = void> T set_FireArmType_4(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB968))(this, value);
	}
	template <typename T = int32_t> T get_Weight_4() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB970))(this);
	}
	template <typename T = void> T set_Weight_4(int32_t value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, int32_t))(Il2CppBase() + 0x30DB978))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc_4() {
		return ((T (*)(RoundWeaponTypeConfConfig*))(Il2CppBase() + 0x30DB980))(this);
	}
	template <typename T = void> T set_Desc_4(Il2CppString* value) {
		return ((T (*)(RoundWeaponTypeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DB988))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RoundWeaponTypeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DB990))(this, bytes, position);
	}

};

}
