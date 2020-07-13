#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class ReflectionUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "ReflectionUtils"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> static T& assemblyNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& loadedAssemblies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& typeLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetLoadedAssemblies() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F22E34))(0);
	}
	template <typename T = uintptr_t> static T GetGlobalType(Il2CppString* typeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2ECDE24))(0, typeName);
	}
	template <typename T = uintptr_t> static T GetPropertyType(uintptr_t type, Il2CppString* path) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2F11254))(0, type, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetMemberInfo(uintptr_t type, Il2CppString* path) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2F14284))(0, type, path);
	}
	template <typename T = bool> static T CanReadMemberValue(uintptr_t member) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F22E68))(0, member);
	}
	template <typename T = bool> static T CanSetMemberValue(uintptr_t member) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F22F68))(0, member);
	}
	template <typename T = bool> static T CanGetMemberValue(uintptr_t member) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F23068))(0, member);
	}
	template <typename T = uintptr_t> static T GetMemberUnderlyingType(uintptr_t member) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F14554))(0, member);
	}
	template <typename T = uintptr_t> static T GetMemberValue(Il2CppArray<uintptr_t>* memberInfo, uintptr_t target) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2F14184))(0, memberInfo, target);
	}
	template <typename T = uintptr_t> static T GetMemberValue_1(uintptr_t member, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F23168))(0, member, target);
	}
	template <typename T = void> static T SetMemberValue(uintptr_t member, uintptr_t target, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F23434))(0, member, target, value);
	}
	template <typename T = void> static T SetMemberValue_1(Il2CppArray<uintptr_t>* memberInfo, uintptr_t target, uintptr_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F12D24))(0, memberInfo, target, value);
	}
	template <typename T = void> static T SetBoxedMemberValue(uintptr_t parent, uintptr_t targetInfo, uintptr_t target, uintptr_t propertyInfo, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F23604))(0, parent, targetInfo, target, propertyInfo, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetFieldsAndProperties(uintptr_t bindingAttr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21D2460))(0, bindingAttr);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetFieldsAndProperties_1(uintptr_t type, uintptr_t bindingAttr) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F236D4))(0, type, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetPublicFields(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2ECEE30))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetPublicProperties(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F237FC))(0, type);
	}

};

}
