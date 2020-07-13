#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class ReflectionObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "ReflectionObject"));
	}

	template <typename T = void*> T& Creator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Members() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void*> T get_Creator() {
		return ((T (*)(ReflectionObject*))(Il2CppBase() + 0x4DF367C))(this);
	}
	template <typename T = void> T set_Creator(void* value) {
		return ((T (*)(ReflectionObject*, void*))(Il2CppBase() + 0x4DF3684))(this, value);
	}
	template <typename T = void*> T get_Members() {
		return ((T (*)(ReflectionObject*))(Il2CppBase() + 0x4DF368C))(this);
	}
	template <typename T = void> T set_Members(void* value) {
		return ((T (*)(ReflectionObject*, void*))(Il2CppBase() + 0x4DF3694))(this, value);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t target, Il2CppString* member) {
		return ((T (*)(ReflectionObject*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DF3748))(this, target, member);
	}
	template <typename T = uintptr_t> T GetType(Il2CppString* member) {
		return ((T (*)(ReflectionObject*, Il2CppString*))(Il2CppBase() + 0x4DF387C))(this, member);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t t, Il2CppArray<uintptr_t>* memberNames) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DF3980))(0, t, memberNames);
	}
	template <typename T = uintptr_t> static T Create_1(uintptr_t t, uintptr_t creator, Il2CppArray<uintptr_t>* memberNames) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DF39A4))(0, t, creator, memberNames);
	}

};

}
