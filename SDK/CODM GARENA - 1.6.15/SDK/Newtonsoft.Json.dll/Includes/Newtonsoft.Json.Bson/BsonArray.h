#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonArray"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _children() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Add(uintptr_t token) {
		return ((T (*)(BsonArray*, uintptr_t))(Il2CppBase() + 0x4086788))(this, token);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(BsonArray*))(Il2CppBase() + 0x4086830))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(BsonArray*))(Il2CppBase() + 0x4086838))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(BsonArray*))(Il2CppBase() + 0x40868F8))(this);
	}

};

}
