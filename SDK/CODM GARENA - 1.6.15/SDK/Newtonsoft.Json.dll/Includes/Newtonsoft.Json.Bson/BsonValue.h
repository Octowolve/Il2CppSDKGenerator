#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonValue"));
	}

	template <typename T = uintptr_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(BsonValue*))(Il2CppBase() + 0x4088A78))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(BsonValue*))(Il2CppBase() + 0x408B974))(this);
	}

};

}
