#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonToken"));
	}

	template <typename T = uintptr_t> T& Parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& CalculatedSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(BsonToken*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Parent() {
		return ((T (*)(BsonToken*))(Il2CppBase() + 0x408B96C))(this);
	}
	template <typename T = void> T set_Parent(uintptr_t value) {
		return ((T (*)(BsonToken*, uintptr_t))(Il2CppBase() + 0x4086828))(this, value);
	}
	template <typename T = int32_t> T get_CalculatedSize() {
		return ((T (*)(BsonToken*))(Il2CppBase() + 0x40889A0))(this);
	}
	template <typename T = void> T set_CalculatedSize(int32_t value) {
		return ((T (*)(BsonToken*, int32_t))(Il2CppBase() + 0x4088DF0))(this, value);
	}

};

}
