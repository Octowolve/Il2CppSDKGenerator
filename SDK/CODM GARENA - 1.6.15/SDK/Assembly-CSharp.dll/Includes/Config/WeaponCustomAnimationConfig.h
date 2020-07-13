#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponCustomAnimationConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponCustomAnimationConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& EWeaponName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& OffestPoseStr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& OffsetPoseAnimationIndexSquad() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& OffsetPoseStrSquad() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& NeedIK() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& ForbidLoadoutRandomAnimation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& LobbyAnimationIndexM() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& LobbyAnimationIndexFM() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SquadAnimationIndexM() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& SquadAnimationIndexFM() {
		return *(T*)((uintptr_t)this + 0x38);
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

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6B80))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6C20))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(WeaponCustomAnimationConfig*, uint32_t))(Il2CppBase() + 0x30F6C28))(this, value);
	}
	template <typename T = Il2CppString*> T get_EWeaponName() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6C30))(this);
	}
	template <typename T = void> T set_EWeaponName(Il2CppString* value) {
		return ((T (*)(WeaponCustomAnimationConfig*, Il2CppString*))(Il2CppBase() + 0x30F6C38))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6C40))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(WeaponCustomAnimationConfig*, Il2CppString*))(Il2CppBase() + 0x30F6C48))(this, value);
	}
	template <typename T = Il2CppString*> T get_OffestPoseStr() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6C50))(this);
	}
	template <typename T = void> T set_OffestPoseStr(Il2CppString* value) {
		return ((T (*)(WeaponCustomAnimationConfig*, Il2CppString*))(Il2CppBase() + 0x30F6C58))(this, value);
	}
	template <typename T = int32_t> T get_OffsetPoseAnimationIndexSquad() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6C60))(this);
	}
	template <typename T = void> T set_OffsetPoseAnimationIndexSquad(int32_t value) {
		return ((T (*)(WeaponCustomAnimationConfig*, int32_t))(Il2CppBase() + 0x30F6C68))(this, value);
	}
	template <typename T = Il2CppString*> T get_OffsetPoseStrSquad() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6C70))(this);
	}
	template <typename T = void> T set_OffsetPoseStrSquad(Il2CppString* value) {
		return ((T (*)(WeaponCustomAnimationConfig*, Il2CppString*))(Il2CppBase() + 0x30F6C78))(this, value);
	}
	template <typename T = uint32_t> T get_NeedIK() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6C80))(this);
	}
	template <typename T = void> T set_NeedIK(uint32_t value) {
		return ((T (*)(WeaponCustomAnimationConfig*, uint32_t))(Il2CppBase() + 0x30F6C88))(this, value);
	}
	template <typename T = uint32_t> T get_ForbidLoadoutRandomAnimation() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6C90))(this);
	}
	template <typename T = void> T set_ForbidLoadoutRandomAnimation(uint32_t value) {
		return ((T (*)(WeaponCustomAnimationConfig*, uint32_t))(Il2CppBase() + 0x30F6C98))(this, value);
	}
	template <typename T = int32_t> T get_LobbyAnimationIndexM() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6CA0))(this);
	}
	template <typename T = void> T set_LobbyAnimationIndexM(int32_t value) {
		return ((T (*)(WeaponCustomAnimationConfig*, int32_t))(Il2CppBase() + 0x30F6CA8))(this, value);
	}
	template <typename T = int32_t> T get_LobbyAnimationIndexFM() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6CB0))(this);
	}
	template <typename T = void> T set_LobbyAnimationIndexFM(int32_t value) {
		return ((T (*)(WeaponCustomAnimationConfig*, int32_t))(Il2CppBase() + 0x30F6CB8))(this, value);
	}
	template <typename T = int32_t> T get_SquadAnimationIndexM() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6CC0))(this);
	}
	template <typename T = void> T set_SquadAnimationIndexM(int32_t value) {
		return ((T (*)(WeaponCustomAnimationConfig*, int32_t))(Il2CppBase() + 0x30F6CC8))(this, value);
	}
	template <typename T = int32_t> T get_SquadAnimationIndexFM() {
		return ((T (*)(WeaponCustomAnimationConfig*))(Il2CppBase() + 0x30F6CD0))(this);
	}
	template <typename T = void> T set_SquadAnimationIndexFM(int32_t value) {
		return ((T (*)(WeaponCustomAnimationConfig*, int32_t))(Il2CppBase() + 0x30F6CD8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponCustomAnimationConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F6CE0))(this, bytes, position);
	}

};

}
