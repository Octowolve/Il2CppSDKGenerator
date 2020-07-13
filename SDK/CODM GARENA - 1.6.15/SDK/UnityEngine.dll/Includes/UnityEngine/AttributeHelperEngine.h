#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AttributeHelperEngine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AttributeHelperEngine"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _disallowMultipleComponentArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _executeInEditModeArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _requireComponentArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& ParentTypeDisallowingMultipleInclusionCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> static T& RequiredComponentsCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T GetParentTypeDisallowingMultipleInclusion(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x469BE38))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetRequiredComponents(uintptr_t klass) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x469C250))(0, klass);
	}
	template <typename T = bool> static T CheckIsEditorScript(uintptr_t klass) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x469C960))(0, klass);
	}
	template <typename T = int32_t> static T GetDefaultExecutionOrderFor(uintptr_t klass) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x469CB00))(0, klass);
	}
	template <typename T = uintptr_t> static T GetCustomAttributeOfType(uintptr_t klass) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3393FB4))(0, klass);
	}

};

}
