#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "ContentInfo"));
	}

	template <typename T = Il2CppString*> T& contentType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_ASN1() {
		return ((T (*)(ContentInfo*))(Il2CppBase() + 0x47D5FC8))(this);
	}
	template <typename T = uintptr_t> T get_Content() {
		return ((T (*)(ContentInfo*))(Il2CppBase() + 0x47D60CC))(this);
	}
	template <typename T = void> T set_Content(uintptr_t value) {
		return ((T (*)(ContentInfo*, uintptr_t))(Il2CppBase() + 0x47D60D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ContentType() {
		return ((T (*)(ContentInfo*))(Il2CppBase() + 0x47D60DC))(this);
	}
	template <typename T = void> T set_ContentType(Il2CppString* value) {
		return ((T (*)(ContentInfo*, Il2CppString*))(Il2CppBase() + 0x47D60E4))(this, value);
	}
	template <typename T = uintptr_t> T GetASN1() {
		return ((T (*)(ContentInfo*))(Il2CppBase() + 0x47D5FCC))(this);
	}

};

}
