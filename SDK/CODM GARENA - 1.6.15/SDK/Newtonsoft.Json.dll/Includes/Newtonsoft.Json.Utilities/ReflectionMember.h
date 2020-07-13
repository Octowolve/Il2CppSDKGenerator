#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class ReflectionMember
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "ReflectionMember"));
	}

	template <typename T = uintptr_t> T& MemberType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Getter() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Setter() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(ReflectionMember*))(Il2CppBase() + 0x4DF364C))(this);
	}
	template <typename T = void> T set_MemberType(uintptr_t value) {
		return ((T (*)(ReflectionMember*, uintptr_t))(Il2CppBase() + 0x4DF3654))(this, value);
	}
	template <typename T = void*> T get_Getter() {
		return ((T (*)(ReflectionMember*))(Il2CppBase() + 0x4DF365C))(this);
	}
	template <typename T = void> T set_Getter(void* value) {
		return ((T (*)(ReflectionMember*, void*))(Il2CppBase() + 0x4DF3664))(this, value);
	}
	template <typename T = void> T set_Setter(void* value) {
		return ((T (*)(ReflectionMember*, void*))(Il2CppBase() + 0x4DF366C))(this, value);
	}

};

}
