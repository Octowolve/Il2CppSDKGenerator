#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonString"));
	}

	template <typename T = int32_t> T& ByteCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IncludeLength() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_ByteCount() {
		return ((T (*)(BsonString*))(Il2CppBase() + 0x4088A80))(this);
	}
	template <typename T = void> T set_ByteCount(int32_t value) {
		return ((T (*)(BsonString*, int32_t))(Il2CppBase() + 0x4088DF8))(this, value);
	}
	template <typename T = bool> T get_IncludeLength() {
		return ((T (*)(BsonString*))(Il2CppBase() + 0x4088E00))(this);
	}
	template <typename T = void> T set_IncludeLength(bool value) {
		return ((T (*)(BsonString*, bool))(Il2CppBase() + 0x408B964))(this, value);
	}

};

}
