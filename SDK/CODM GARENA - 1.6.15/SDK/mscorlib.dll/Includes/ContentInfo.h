#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ContentInfo"));
	}

	template <typename T = Il2CppString*> T& contentType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_ASN1_1() {
		return ((T (*)(ContentInfo*))(Il2CppBase() + 0x3FB1CE8))(this);
	}
	template <typename T = uintptr_t> T get_Content_1() {
		return ((T (*)(ContentInfo*))(Il2CppBase() + 0x3FB1DEC))(this);
	}
	template <typename T = void> T set_Content_1(uintptr_t value) {
		return ((T (*)(ContentInfo*, uintptr_t))(Il2CppBase() + 0x3FB1DF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ContentType_1() {
		return ((T (*)(ContentInfo*))(Il2CppBase() + 0x3FB1DFC))(this);
	}
	template <typename T = void> T set_ContentType_1(Il2CppString* value) {
		return ((T (*)(ContentInfo*, Il2CppString*))(Il2CppBase() + 0x3FB1E04))(this, value);
	}
	template <typename T = uintptr_t> T GetASN1_1() {
		return ((T (*)(ContentInfo*))(Il2CppBase() + 0x3FB1CEC))(this);
	}

};

}
