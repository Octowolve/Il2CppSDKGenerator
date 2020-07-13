#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class VisibleSoundConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "VisibleSoundConfConfig"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& SpriteByDis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Sound_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Sound_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Sound_dis() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Far_sprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Middle_sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Near_sprite() {
		return *(T*)((uintptr_t)this + 0x24);
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
		return ((T (*)(VisibleSoundConfConfig*))(Il2CppBase() + 0x30F26AC))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(VisibleSoundConfConfig*))(Il2CppBase() + 0x30F2818))(this);
	}
	template <typename T = int32_t> T get_Sound_id() {
		return ((T (*)(VisibleSoundConfConfig*))(Il2CppBase() + 0x30F28B8))(this);
	}
	template <typename T = void> T set_Sound_id(int32_t value) {
		return ((T (*)(VisibleSoundConfConfig*, int32_t))(Il2CppBase() + 0x30F28C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Sound_name() {
		return ((T (*)(VisibleSoundConfConfig*))(Il2CppBase() + 0x30F28C8))(this);
	}
	template <typename T = void> T set_Sound_name(Il2CppString* value) {
		return ((T (*)(VisibleSoundConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F28D0))(this, value);
	}
	template <typename T = int32_t> T get_Sound_dis() {
		return ((T (*)(VisibleSoundConfConfig*))(Il2CppBase() + 0x30F28D8))(this);
	}
	template <typename T = void> T set_Sound_dis(int32_t value) {
		return ((T (*)(VisibleSoundConfConfig*, int32_t))(Il2CppBase() + 0x30F28E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Far_sprite() {
		return ((T (*)(VisibleSoundConfConfig*))(Il2CppBase() + 0x30F2810))(this);
	}
	template <typename T = void> T set_Far_sprite(Il2CppString* value) {
		return ((T (*)(VisibleSoundConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F28E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Middle_sprite() {
		return ((T (*)(VisibleSoundConfConfig*))(Il2CppBase() + 0x30F2808))(this);
	}
	template <typename T = void> T set_Middle_sprite(Il2CppString* value) {
		return ((T (*)(VisibleSoundConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F28F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Near_sprite() {
		return ((T (*)(VisibleSoundConfConfig*))(Il2CppBase() + 0x30F2800))(this);
	}
	template <typename T = void> T set_Near_sprite(Il2CppString* value) {
		return ((T (*)(VisibleSoundConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F28F8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(VisibleSoundConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F2900))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(VisibleSoundConfConfig*))(Il2CppBase() + 0x30F2A88))(this);
	}

};

}
