#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BREquipmentSoundConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BREquipmentSoundConfig"));
	}

	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& SoundName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SoundName_3P() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundName_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetSoundName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> static T GetSoundName(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D4A294))(0, type);
	}
	template <typename T = Il2CppString*> static T GetSoundName_3P(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D4A50C))(0, type);
	}
	template <typename T = Il2CppString*> static T GetSoundName_1(Il2CppString* typeName, bool isLocal) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x2D4A394))(0, typeName, isLocal);
	}
	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(BREquipmentSoundConfig*))(Il2CppBase() + 0x2D4A61C))(this);
	}
	template <typename T = Il2CppString*> T get_Type() {
		return ((T (*)(BREquipmentSoundConfig*))(Il2CppBase() + 0x2D4A6BC))(this);
	}
	template <typename T = void> T set_Type(Il2CppString* value) {
		return ((T (*)(BREquipmentSoundConfig*, Il2CppString*))(Il2CppBase() + 0x2D4A6C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_SoundName() {
		return ((T (*)(BREquipmentSoundConfig*))(Il2CppBase() + 0x2D4A60C))(this);
	}
	template <typename T = void> T set_SoundName(Il2CppString* value) {
		return ((T (*)(BREquipmentSoundConfig*, Il2CppString*))(Il2CppBase() + 0x2D4A6CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_SoundName_3P() {
		return ((T (*)(BREquipmentSoundConfig*))(Il2CppBase() + 0x2D4A614))(this);
	}
	template <typename T = void> T set_SoundName_3P(Il2CppString* value) {
		return ((T (*)(BREquipmentSoundConfig*, Il2CppString*))(Il2CppBase() + 0x2D4A6D4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BREquipmentSoundConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4A6DC))(this, bytes, position);
	}

};

}
