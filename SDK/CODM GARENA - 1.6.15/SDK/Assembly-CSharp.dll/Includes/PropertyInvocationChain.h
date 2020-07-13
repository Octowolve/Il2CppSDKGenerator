#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PropertyInvocationChain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PropertyInvocationChain"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& members() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidFieldName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_value() {
		return ((T (*)(PropertyInvocationChain*))(Il2CppBase() + 0x48065CC))(this);
	}
	template <typename T = void> T set_value(uintptr_t value) {
		return ((T (*)(PropertyInvocationChain*, uintptr_t))(Il2CppBase() + 0x4806660))(this, value);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(PropertyInvocationChain*))(Il2CppBase() + 0x48065BC))(this);
	}
	template <typename T = uintptr_t> static T GetInstance(uintptr_t obj, Il2CppString* path, Il2CppArray<uintptr_t>** members) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4806848))(0, obj, path, members);
	}
	template <typename T = uintptr_t> static T GetMemberValue(uintptr_t target, uintptr_t member, int32_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4807AFC))(0, target, member, index);
	}
	template <typename T = void> static T setValue(uintptr_t target, uintptr_t member, uintptr_t value, int32_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4807D64))(0, target, member, value, index);
	}
	template <typename T = Il2CppString*> static T GetValidFieldName(uintptr_t obj, Il2CppString* fieldName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4807070))(0, obj, fieldName);
	}
	template <typename T = uintptr_t> static T getField(uintptr_t obj, Il2CppString* field, uintptr_t* member, int32_t index) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*, int32_t))(Il2CppBase() + 0x48076BC))(0, obj, field, member, index);
	}

};

}
