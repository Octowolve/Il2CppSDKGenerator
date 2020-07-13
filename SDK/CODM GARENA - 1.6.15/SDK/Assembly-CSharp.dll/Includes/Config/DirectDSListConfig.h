#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DirectDSListConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DirectDSListConfig"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ConfigType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ConfigValue() {
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
		return ((T (*)(DirectDSListConfig*))(Il2CppBase() + 0x46424A0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DirectDSListConfig*))(Il2CppBase() + 0x4642540))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(DirectDSListConfig*, Il2CppString*))(Il2CppBase() + 0x4642548))(this, value);
	}
	template <typename T = int32_t> T get_ConfigType() {
		return ((T (*)(DirectDSListConfig*))(Il2CppBase() + 0x4642550))(this);
	}
	template <typename T = void> T set_ConfigType(int32_t value) {
		return ((T (*)(DirectDSListConfig*, int32_t))(Il2CppBase() + 0x4642558))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConfigValue() {
		return ((T (*)(DirectDSListConfig*))(Il2CppBase() + 0x4642560))(this);
	}
	template <typename T = void> T set_ConfigValue(Il2CppString* value) {
		return ((T (*)(DirectDSListConfig*, Il2CppString*))(Il2CppBase() + 0x4642568))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(DirectDSListConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4642570))(this, bytes, position);
	}

};

}
