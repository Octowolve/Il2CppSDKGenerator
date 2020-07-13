#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BattleRoyaleProConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BattleRoyaleProConfig"));
	}

	template <typename T = uint32_t> T& RoleID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_ProName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_ProDesc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& UltID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& TacticalID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TacticalMaxNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& PerkID_1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& PerkID_2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& PerkID_3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ModelID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProByPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetProByPos(int32_t pos) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D41CF0))(0, pos);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41E1C))(this);
	}
	template <typename T = uint32_t> T get_RoleID() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41EBC))(this);
	}
	template <typename T = void> T set_RoleID(uint32_t value) {
		return ((T (*)(BattleRoyaleProConfig*, uint32_t))(Il2CppBase() + 0x2D41EC4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_ProName() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41ECC))(this);
	}
	template <typename T = void> T set_LOCID_ProName(Il2CppString* value) {
		return ((T (*)(BattleRoyaleProConfig*, Il2CppString*))(Il2CppBase() + 0x2D41ED4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProName() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41EDC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_ProDesc() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41EEC))(this);
	}
	template <typename T = void> T set_LOCID_ProDesc(Il2CppString* value) {
		return ((T (*)(BattleRoyaleProConfig*, Il2CppString*))(Il2CppBase() + 0x2D41EF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProDesc() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41EFC))(this);
	}
	template <typename T = uint32_t> T get_UltID() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41F0C))(this);
	}
	template <typename T = void> T set_UltID(uint32_t value) {
		return ((T (*)(BattleRoyaleProConfig*, uint32_t))(Il2CppBase() + 0x2D41F14))(this, value);
	}
	template <typename T = int32_t> T get_TacticalID() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41F1C))(this);
	}
	template <typename T = void> T set_TacticalID(int32_t value) {
		return ((T (*)(BattleRoyaleProConfig*, int32_t))(Il2CppBase() + 0x2D41F24))(this, value);
	}
	template <typename T = int32_t> T get_TacticalMaxNum() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41F2C))(this);
	}
	template <typename T = void> T set_TacticalMaxNum(int32_t value) {
		return ((T (*)(BattleRoyaleProConfig*, int32_t))(Il2CppBase() + 0x2D41F34))(this, value);
	}
	template <typename T = uint32_t> T get_PerkID_1() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41F3C))(this);
	}
	template <typename T = void> T set_PerkID_1(uint32_t value) {
		return ((T (*)(BattleRoyaleProConfig*, uint32_t))(Il2CppBase() + 0x2D41F44))(this, value);
	}
	template <typename T = uint32_t> T get_PerkID_2() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41F4C))(this);
	}
	template <typename T = void> T set_PerkID_2(uint32_t value) {
		return ((T (*)(BattleRoyaleProConfig*, uint32_t))(Il2CppBase() + 0x2D41F54))(this, value);
	}
	template <typename T = uint32_t> T get_PerkID_3() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41F5C))(this);
	}
	template <typename T = void> T set_PerkID_3(uint32_t value) {
		return ((T (*)(BattleRoyaleProConfig*, uint32_t))(Il2CppBase() + 0x2D41F64))(this, value);
	}
	template <typename T = int32_t> T get_ModelID() {
		return ((T (*)(BattleRoyaleProConfig*))(Il2CppBase() + 0x2D41F6C))(this);
	}
	template <typename T = void> T set_ModelID(int32_t value) {
		return ((T (*)(BattleRoyaleProConfig*, int32_t))(Il2CppBase() + 0x2D41F74))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BattleRoyaleProConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D41F7C))(this, bytes, position);
	}

};

}
