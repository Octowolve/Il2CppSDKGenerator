#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponAttachPointConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponAttachPointConfig"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& Grip_Pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& Grip_Rot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& Muzzle_Pos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& Muzzle_Rot() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& Magazine_Pos() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& Magazine_Rot() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& Slide_Pos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& Slide_Rot() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& Stock_Pos() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& Stock_Rot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& Other_Pos() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& Other_Rot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& Optic_Pos() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& Optic_Rot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& Ornament_Pos() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& Ornament_Rot() {
		return *(T*)((uintptr_t)this + 0xC4);
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
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3AA0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3B40))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppString*))(Il2CppBase() + 0x30F3B48))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Grip_Pos() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3B50))(this);
	}
	template <typename T = void> T set_Grip_Pos(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3B64))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Grip_Rot() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3B70))(this);
	}
	template <typename T = void> T set_Grip_Rot(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3B84))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Muzzle_Pos() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3B90))(this);
	}
	template <typename T = void> T set_Muzzle_Pos(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3BA4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Muzzle_Rot() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3BB0))(this);
	}
	template <typename T = void> T set_Muzzle_Rot(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3BC4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Magazine_Pos() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3BD0))(this);
	}
	template <typename T = void> T set_Magazine_Pos(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3BE4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Magazine_Rot() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3BF0))(this);
	}
	template <typename T = void> T set_Magazine_Rot(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3C04))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Slide_Pos() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3C10))(this);
	}
	template <typename T = void> T set_Slide_Pos(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3C24))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Slide_Rot() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3C30))(this);
	}
	template <typename T = void> T set_Slide_Rot(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3C44))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Stock_Pos() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3C50))(this);
	}
	template <typename T = void> T set_Stock_Pos(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3C64))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Stock_Rot() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3C70))(this);
	}
	template <typename T = void> T set_Stock_Rot(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3C84))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Other_Pos() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3C90))(this);
	}
	template <typename T = void> T set_Other_Pos(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3CA4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Other_Rot() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3CB0))(this);
	}
	template <typename T = void> T set_Other_Rot(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3CC4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Optic_Pos() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3CD0))(this);
	}
	template <typename T = void> T set_Optic_Pos(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3CE4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Optic_Rot() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3CF0))(this);
	}
	template <typename T = void> T set_Optic_Rot(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3D04))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Ornament_Pos() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3D10))(this);
	}
	template <typename T = void> T set_Ornament_Pos(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3D24))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Ornament_Rot() {
		return ((T (*)(WeaponAttachPointConfig*))(Il2CppBase() + 0x30F3D30))(this);
	}
	template <typename T = void> T set_Ornament_Rot(Il2CppVector3 value) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppVector3))(Il2CppBase() + 0x30F3D44))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponAttachPointConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F3D50))(this, bytes, position);
	}

};

}
