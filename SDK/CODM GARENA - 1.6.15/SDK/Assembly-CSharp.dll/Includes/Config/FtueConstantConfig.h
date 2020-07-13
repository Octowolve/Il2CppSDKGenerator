#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class FtueConstantConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "FtueConstantConfig"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Value16() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Value10() {
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
		return ((T (*)(FtueConstantConfig*))(Il2CppBase() + 0x4645784))(this);
	}
	template <typename T = Il2CppString*> T get_Key() {
		return ((T (*)(FtueConstantConfig*))(Il2CppBase() + 0x4645824))(this);
	}
	template <typename T = void> T set_Key(Il2CppString* value) {
		return ((T (*)(FtueConstantConfig*, Il2CppString*))(Il2CppBase() + 0x464582C))(this, value);
	}
	template <typename T = int32_t> T get_Value16() {
		return ((T (*)(FtueConstantConfig*))(Il2CppBase() + 0x4645834))(this);
	}
	template <typename T = void> T set_Value16(int32_t value) {
		return ((T (*)(FtueConstantConfig*, int32_t))(Il2CppBase() + 0x464583C))(this, value);
	}
	template <typename T = int32_t> T get_Value10() {
		return ((T (*)(FtueConstantConfig*))(Il2CppBase() + 0x4645844))(this);
	}
	template <typename T = void> T set_Value10(int32_t value) {
		return ((T (*)(FtueConstantConfig*, int32_t))(Il2CppBase() + 0x464584C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(FtueConstantConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4645854))(this, bytes, position);
	}

};

}
