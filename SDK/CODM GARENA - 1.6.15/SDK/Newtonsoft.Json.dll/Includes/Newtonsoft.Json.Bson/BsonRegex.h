#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonRegex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonRegex"));
	}

	template <typename T = uintptr_t> T& Pattern() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Options() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Pattern() {
		return ((T (*)(BsonRegex*))(Il2CppBase() + 0x4088BB4))(this);
	}
	template <typename T = void> T set_Pattern(uintptr_t value) {
		return ((T (*)(BsonRegex*, uintptr_t))(Il2CppBase() + 0x408B868))(this, value);
	}
	template <typename T = uintptr_t> T get_Options() {
		return ((T (*)(BsonRegex*))(Il2CppBase() + 0x4088BBC))(this);
	}
	template <typename T = void> T set_Options(uintptr_t value) {
		return ((T (*)(BsonRegex*, uintptr_t))(Il2CppBase() + 0x408B870))(this, value);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(BsonRegex*))(Il2CppBase() + 0x408B95C))(this);
	}

};

}
