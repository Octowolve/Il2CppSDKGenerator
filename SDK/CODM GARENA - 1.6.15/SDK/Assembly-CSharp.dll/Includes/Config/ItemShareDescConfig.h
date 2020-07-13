#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ItemShareDescConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ItemShareDescConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x10);
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
		return ((T (*)(ItemShareDescConfig*))(Il2CppBase() + 0x376BCE8))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ItemShareDescConfig*))(Il2CppBase() + 0x376BD88))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ItemShareDescConfig*, int32_t))(Il2CppBase() + 0x376BD90))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ItemShareDescConfig*))(Il2CppBase() + 0x376BD98))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(ItemShareDescConfig*, Il2CppString*))(Il2CppBase() + 0x376BDA0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ItemShareDescConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376BDA8))(this, bytes, position);
	}

};

}
