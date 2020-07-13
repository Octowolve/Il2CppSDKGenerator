#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonObject"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _children() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Add(Il2CppString* name, uintptr_t token) {
		return ((T (*)(BsonObject*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4088EAC))(this, name, token);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(BsonObject*))(Il2CppBase() + 0x4089018))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(BsonObject*))(Il2CppBase() + 0x40889A8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(BsonObject*))(Il2CppBase() + 0x4089020))(this);
	}

};

}
