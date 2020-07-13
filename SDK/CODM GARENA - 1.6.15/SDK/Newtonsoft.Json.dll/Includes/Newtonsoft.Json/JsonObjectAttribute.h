#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonObjectAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonObjectAttribute"));
	}

	template <typename T = uintptr_t> T& _memberSerialization() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& _itemRequired() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_MemberSerialization() {
		return ((T (*)(JsonObjectAttribute*))(Il2CppBase() + 0x40A56CC))(this);
	}

};

}
