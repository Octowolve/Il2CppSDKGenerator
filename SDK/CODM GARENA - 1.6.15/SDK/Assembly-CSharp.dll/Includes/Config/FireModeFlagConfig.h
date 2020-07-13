#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class FireModeFlagConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "FireModeFlagConfig"));
	}

	template <typename T = Il2CppString*> T& Servermoduledesc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Server_module() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Fire_flag() {
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

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(FireModeFlagConfig*))(Il2CppBase() + 0x4643BF0))(this);
	}
	template <typename T = Il2CppString*> T get_Servermoduledesc() {
		return ((T (*)(FireModeFlagConfig*))(Il2CppBase() + 0x4643C90))(this);
	}
	template <typename T = void> T set_Servermoduledesc(Il2CppString* value) {
		return ((T (*)(FireModeFlagConfig*, Il2CppString*))(Il2CppBase() + 0x4643C98))(this, value);
	}
	template <typename T = int32_t> T get_Server_module() {
		return ((T (*)(FireModeFlagConfig*))(Il2CppBase() + 0x4643CA0))(this);
	}
	template <typename T = void> T set_Server_module(int32_t value) {
		return ((T (*)(FireModeFlagConfig*, int32_t))(Il2CppBase() + 0x4643CA8))(this, value);
	}
	template <typename T = int32_t> T get_Fire_flag() {
		return ((T (*)(FireModeFlagConfig*))(Il2CppBase() + 0x4643CB0))(this);
	}
	template <typename T = void> T set_Fire_flag(int32_t value) {
		return ((T (*)(FireModeFlagConfig*, int32_t))(Il2CppBase() + 0x4643CB8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(FireModeFlagConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4643CC0))(this, bytes, position);
	}

};

}
