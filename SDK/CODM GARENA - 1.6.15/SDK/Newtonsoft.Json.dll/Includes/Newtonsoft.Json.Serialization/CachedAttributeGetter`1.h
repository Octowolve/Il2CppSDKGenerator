#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class CachedAttributeGetter1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "CachedAttributeGetter`1"));
	}

	template <typename T = void*> static T& TypeAttributeCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetAttribute(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B6122C))(0, type);
	}

};

}
