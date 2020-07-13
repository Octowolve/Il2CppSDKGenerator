#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class VideoBlockConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "VideoBlockConfig"));
	}

	template <typename T = Il2CppString*> T& ModelName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& VendorName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsIOS() {
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
		return ((T (*)(VideoBlockConfig*))(Il2CppBase() + 0x30F2380))(this);
	}
	template <typename T = Il2CppString*> T get_ModelName() {
		return ((T (*)(VideoBlockConfig*))(Il2CppBase() + 0x30F2420))(this);
	}
	template <typename T = void> T set_ModelName(Il2CppString* value) {
		return ((T (*)(VideoBlockConfig*, Il2CppString*))(Il2CppBase() + 0x30F2428))(this, value);
	}
	template <typename T = Il2CppString*> T get_VendorName() {
		return ((T (*)(VideoBlockConfig*))(Il2CppBase() + 0x30F2430))(this);
	}
	template <typename T = void> T set_VendorName(Il2CppString* value) {
		return ((T (*)(VideoBlockConfig*, Il2CppString*))(Il2CppBase() + 0x30F2438))(this, value);
	}
	template <typename T = bool> T get_IsIOS() {
		return ((T (*)(VideoBlockConfig*))(Il2CppBase() + 0x30F2440))(this);
	}
	template <typename T = void> T set_IsIOS(bool value) {
		return ((T (*)(VideoBlockConfig*, bool))(Il2CppBase() + 0x30F2448))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(VideoBlockConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F2450))(this, bytes, position);
	}

};

}
