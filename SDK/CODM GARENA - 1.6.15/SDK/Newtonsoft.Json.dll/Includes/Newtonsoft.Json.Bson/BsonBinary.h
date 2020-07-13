#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonBinary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonBinary"));
	}

	template <typename T = uintptr_t> T& BinaryType() {
		return *(T*)((uintptr_t)this + 0x15);
	}

	template <typename T = uintptr_t> T get_BinaryType() {
		return ((T (*)(BsonBinary*))(Il2CppBase() + 0x40869B0))(this);
	}
	template <typename T = void> T set_BinaryType(uintptr_t value) {
		return ((T (*)(BsonBinary*, uintptr_t))(Il2CppBase() + 0x40869B8))(this, value);
	}

};

}
