#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReflectionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReflectionHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ModifyObjectFieldValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ModifyObjectFieldValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> static T ModifyObjectFieldValue(uintptr_t inObj, Il2CppString* inFieldName, Il2CppString* inNewValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x382A6D4))(0, inObj, inFieldName, inNewValue);
	}
	template <typename T = bool> static T ModifyObjectFieldValue_1(uintptr_t inEnum, Il2CppString* inFieldName, Il2CppString* inNewValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x382A85C))(0, inEnum, inFieldName, inNewValue);
	}

};

}
