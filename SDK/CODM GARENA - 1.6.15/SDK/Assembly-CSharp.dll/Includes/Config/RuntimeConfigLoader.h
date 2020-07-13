#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RuntimeConfigLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RuntimeConfigLoader"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_LoadAndDecryptBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadRawBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadDeliveryBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> static T LoadAndDecryptBytes(Il2CppString* address, Il2CppArray<uintptr_t>** bytes, uintptr_t* count, uintptr_t option) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>**, uintptr_t*, uintptr_t))(Il2CppBase() + 0x30DBBF0))(0, address, bytes, count, option);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T LoadRawBytes(Il2CppString* address) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x30DC52C))(0, address);
	}
	template <typename T = Il2CppString*> static T LoadText(Il2CppString* address, Il2CppString* ext) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x30DC638))(0, address, ext);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T LoadDeliveryBytes(Il2CppString* path, uintptr_t option) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x30DBE14))(0, path, option);
	}

};

}
