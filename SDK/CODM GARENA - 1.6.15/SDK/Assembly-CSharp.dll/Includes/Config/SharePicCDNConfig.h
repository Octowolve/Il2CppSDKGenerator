#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SharePicCDNConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SharePicCDNConfig"));
	}

	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& CDN() {
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

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(SharePicCDNConfig*))(Il2CppBase() + 0x30DF98C))(this);
	}
	template <typename T = Il2CppString*> T get_Type() {
		return ((T (*)(SharePicCDNConfig*))(Il2CppBase() + 0x30DFA2C))(this);
	}
	template <typename T = void> T set_Type(Il2CppString* value) {
		return ((T (*)(SharePicCDNConfig*, Il2CppString*))(Il2CppBase() + 0x30DFA34))(this, value);
	}
	template <typename T = Il2CppString*> T get_CDN() {
		return ((T (*)(SharePicCDNConfig*))(Il2CppBase() + 0x30DFA3C))(this);
	}
	template <typename T = void> T set_CDN(Il2CppString* value) {
		return ((T (*)(SharePicCDNConfig*, Il2CppString*))(Il2CppBase() + 0x30DFA44))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SharePicCDNConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DFA4C))(this, bytes, position);
	}

};

}
