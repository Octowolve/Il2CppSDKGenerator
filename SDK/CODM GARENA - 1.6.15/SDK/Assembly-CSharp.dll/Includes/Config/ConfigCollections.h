#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigCollections
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigCollections"));
	}

	template <typename T = uintptr_t> T& OnReset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadRawBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T Cache() {
		return ((T (*)(ConfigCollections*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ConfigCollections*))(Il2CppBase() + 0x463648C))(this);
	}
	template <typename T = bool> T ReadRawBytes(Il2CppArray<uintptr_t>** data, uintptr_t* count) {
		return ((T (*)(ConfigCollections*, Il2CppArray<uintptr_t>**, uintptr_t*))(Il2CppBase() + 0x1B8A144))(this, data, count);
	}

};

}
