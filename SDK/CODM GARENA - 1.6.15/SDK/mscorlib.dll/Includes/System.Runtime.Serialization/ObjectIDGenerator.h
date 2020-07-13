#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class ObjectIDGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "ObjectIDGenerator"));
	}

	template <typename T = uintptr_t> T& table() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int64_t> T GetId(uintptr_t obj, uintptr_t* firstTime) {
		return ((T (*)(ObjectIDGenerator*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x302CC70))(this, obj, firstTime);
	}
	template <typename T = int64_t> T get_NextId() {
		return ((T (*)(ObjectIDGenerator*))(Il2CppBase() + 0x3028A88))(this);
	}

};

}
