#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UriParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System", "UriParser"));
	}

	template <typename T = uintptr_t> static T& lock_object() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& table() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& scheme_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& default_port() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& uri_regex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& auth_regex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T InitializeAndValidate(uintptr_t uri, uintptr_t* parsingError) {
		return ((T (*)(UriParser*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AF4FB0))(this, uri, parsingError);
	}
	template <typename T = void> T OnRegister(Il2CppString* schemeName, int32_t defaultPort) {
		return ((T (*)(UriParser*, Il2CppString*, int32_t))(Il2CppBase() + 0x4AF5148))(this, schemeName, defaultPort);
	}
	template <typename T = void> T set_SchemeName(Il2CppString* value) {
		return ((T (*)(UriParser*, Il2CppString*))(Il2CppBase() + 0x4AF514C))(this, value);
	}
	template <typename T = int32_t> T get_DefaultPort() {
		return ((T (*)(UriParser*))(Il2CppBase() + 0x4AF4260))(this);
	}
	template <typename T = void> T set_DefaultPort(int32_t value) {
		return ((T (*)(UriParser*, int32_t))(Il2CppBase() + 0x4AF5154))(this, value);
	}
	template <typename T = void> static T CreateDefaults() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AF515C))(0);
	}
	template <typename T = void> static T InternalRegister(uintptr_t table, uintptr_t uriParser, Il2CppString* schemeName, int32_t defaultPort) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4AF560C))(0, table, uriParser, schemeName, defaultPort);
	}
	template <typename T = uintptr_t> static T GetParser(Il2CppString* schemeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AF4108))(0, schemeName);
	}

};

}
