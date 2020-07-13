#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonProperty"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Name() {
		return ((T (*)(BsonProperty*))(Il2CppBase() + 0x4088A70))(this);
	}
	template <typename T = void> T set_Name(uintptr_t value) {
		return ((T (*)(BsonProperty*, uintptr_t))(Il2CppBase() + 0x4089008))(this, value);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(BsonProperty*))(Il2CppBase() + 0x4088A68))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(BsonProperty*, uintptr_t))(Il2CppBase() + 0x4089010))(this, value);
	}

};

}
