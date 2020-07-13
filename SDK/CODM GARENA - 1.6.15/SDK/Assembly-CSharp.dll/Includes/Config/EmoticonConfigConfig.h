#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class EmoticonConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "EmoticonConfigConfig"));
	}

	template <typename T = int32_t> T& Emot_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Emot_sprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Emot_num() {
		return *(T*)((uintptr_t)this + 0x14);
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
		return ((T (*)(EmoticonConfigConfig*))(Il2CppBase() + 0x4642F20))(this);
	}
	template <typename T = int32_t> T get_Emot_id() {
		return ((T (*)(EmoticonConfigConfig*))(Il2CppBase() + 0x4642FC0))(this);
	}
	template <typename T = void> T set_Emot_id(int32_t value) {
		return ((T (*)(EmoticonConfigConfig*, int32_t))(Il2CppBase() + 0x4642FC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Emot_sprite() {
		return ((T (*)(EmoticonConfigConfig*))(Il2CppBase() + 0x4642FD0))(this);
	}
	template <typename T = void> T set_Emot_sprite(Il2CppString* value) {
		return ((T (*)(EmoticonConfigConfig*, Il2CppString*))(Il2CppBase() + 0x4642FD8))(this, value);
	}
	template <typename T = int32_t> T get_Emot_num() {
		return ((T (*)(EmoticonConfigConfig*))(Il2CppBase() + 0x4642FE0))(this);
	}
	template <typename T = void> T set_Emot_num(int32_t value) {
		return ((T (*)(EmoticonConfigConfig*, int32_t))(Il2CppBase() + 0x4642FE8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(EmoticonConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4642FF0))(this, bytes, position);
	}

};

}
