#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SoundEventEConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SoundEventEConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& EnumName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Constant() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Note() {
		return *(T*)((uintptr_t)this + 0x18);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SoundEventEConfig*))(Il2CppBase() + 0x30E2460))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(SoundEventEConfig*))(Il2CppBase() + 0x30E2500))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(SoundEventEConfig*, int32_t))(Il2CppBase() + 0x30E2508))(this, value);
	}
	template <typename T = Il2CppString*> T get_EnumName() {
		return ((T (*)(SoundEventEConfig*))(Il2CppBase() + 0x30E2510))(this);
	}
	template <typename T = void> T set_EnumName(Il2CppString* value) {
		return ((T (*)(SoundEventEConfig*, Il2CppString*))(Il2CppBase() + 0x30E2518))(this, value);
	}
	template <typename T = Il2CppString*> T get_Constant() {
		return ((T (*)(SoundEventEConfig*))(Il2CppBase() + 0x30E2520))(this);
	}
	template <typename T = void> T set_Constant(Il2CppString* value) {
		return ((T (*)(SoundEventEConfig*, Il2CppString*))(Il2CppBase() + 0x30E2528))(this, value);
	}
	template <typename T = Il2CppString*> T get_Note() {
		return ((T (*)(SoundEventEConfig*))(Il2CppBase() + 0x30E2530))(this);
	}
	template <typename T = void> T set_Note(Il2CppString* value) {
		return ((T (*)(SoundEventEConfig*, Il2CppString*))(Il2CppBase() + 0x30E2538))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SoundEventEConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E2540))(this, bytes, position);
	}
	template <typename T = Il2CppString*> static T GetValue(uintptr_t configEnum) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30E2698))(0, configEnum);
	}

};

}
