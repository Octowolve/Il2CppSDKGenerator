#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class VTOLNPCInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "VTOLNPCInfoConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& HP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxFlySpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& AccelFlySpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& TurnAngleSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& FOV() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& DestorySocre() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MeshID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& HalfSide() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& HalfHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ResistanceID() {
		return *(T*)((uintptr_t)this + 0x3C);
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
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2E48))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2EE8))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2EF0))(this, value);
	}
	template <typename T = float> T get_HP() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2EF8))(this);
	}
	template <typename T = void> T set_HP(float value) {
		return ((T (*)(VTOLNPCInfoConfig*, float))(Il2CppBase() + 0x30F2F00))(this, value);
	}
	template <typename T = int32_t> T get_MaxFlySpeed() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F08))(this);
	}
	template <typename T = void> T set_MaxFlySpeed(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2F10))(this, value);
	}
	template <typename T = int32_t> T get_AccelFlySpeed() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F18))(this);
	}
	template <typename T = void> T set_AccelFlySpeed(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2F20))(this, value);
	}
	template <typename T = int32_t> T get_TurnAngleSpeed() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F28))(this);
	}
	template <typename T = void> T set_TurnAngleSpeed(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2F30))(this, value);
	}
	template <typename T = int32_t> T get_FOV() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F38))(this);
	}
	template <typename T = void> T set_FOV(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2F40))(this, value);
	}
	template <typename T = int32_t> T get_LifeTime() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F48))(this);
	}
	template <typename T = void> T set_LifeTime(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2F50))(this, value);
	}
	template <typename T = int32_t> T get_DestorySocre() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F58))(this);
	}
	template <typename T = void> T set_DestorySocre(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2F60))(this, value);
	}
	template <typename T = int32_t> T get_MeshID() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F68))(this);
	}
	template <typename T = void> T set_MeshID(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2F70))(this, value);
	}
	template <typename T = int32_t> T get_WeaponID() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F78))(this);
	}
	template <typename T = void> T set_WeaponID(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2F80))(this, value);
	}
	template <typename T = int32_t> T get_HalfSide() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F88))(this);
	}
	template <typename T = void> T set_HalfSide(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2F90))(this, value);
	}
	template <typename T = float> T get_HalfHeight() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2F98))(this);
	}
	template <typename T = void> T set_HalfHeight(float value) {
		return ((T (*)(VTOLNPCInfoConfig*, float))(Il2CppBase() + 0x30F2FA0))(this, value);
	}
	template <typename T = int32_t> T get_ResistanceID() {
		return ((T (*)(VTOLNPCInfoConfig*))(Il2CppBase() + 0x30F2FA8))(this);
	}
	template <typename T = void> T set_ResistanceID(int32_t value) {
		return ((T (*)(VTOLNPCInfoConfig*, int32_t))(Il2CppBase() + 0x30F2FB0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(VTOLNPCInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F2FB8))(this, bytes, position);
	}

};

}
