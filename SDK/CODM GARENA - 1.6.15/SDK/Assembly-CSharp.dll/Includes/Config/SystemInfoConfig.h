#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SystemInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SystemInfoConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOC_ID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x1C);
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
		return ((T (*)(SystemInfoConfig*))(Il2CppBase() + 0x30ED8F8))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(SystemInfoConfig*))(Il2CppBase() + 0x30ED998))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(SystemInfoConfig*, int32_t))(Il2CppBase() + 0x30ED9A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(SystemInfoConfig*))(Il2CppBase() + 0x30ED9A8))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(SystemInfoConfig*, Il2CppString*))(Il2CppBase() + 0x30ED9B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(SystemInfoConfig*))(Il2CppBase() + 0x30ED9B8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(SystemInfoConfig*, Il2CppString*))(Il2CppBase() + 0x30ED9C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SystemInfoConfig*))(Il2CppBase() + 0x30ED9C8))(this);
	}
	template <typename T = Il2CppString*> T get_LOC_ID() {
		return ((T (*)(SystemInfoConfig*))(Il2CppBase() + 0x30ED9D8))(this);
	}
	template <typename T = void> T set_LOC_ID(Il2CppString* value) {
		return ((T (*)(SystemInfoConfig*, Il2CppString*))(Il2CppBase() + 0x30ED9E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(SystemInfoConfig*))(Il2CppBase() + 0x30ED9E8))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(SystemInfoConfig*, Il2CppString*))(Il2CppBase() + 0x30ED9F0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SystemInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30ED9F8))(this, bytes, position);
	}

};

}
