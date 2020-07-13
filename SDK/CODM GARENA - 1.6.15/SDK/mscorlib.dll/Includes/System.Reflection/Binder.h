#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class Binder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "Binder"));
	}

	template <typename T = uintptr_t> static T& default_binder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T BindToMethod(uintptr_t bindingAttr, Il2CppArray<uintptr_t>* match, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* modifiers, uintptr_t culture, Il2CppArray<uintptr_t>* names, uintptr_t* state) {
		return ((T (*)(Binder*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x0))(this, bindingAttr, match, args, modifiers, culture, names, state);
	}
	template <typename T = uintptr_t> T ChangeType(uintptr_t value, uintptr_t type, uintptr_t culture) {
		return ((T (*)(Binder*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, value, type, culture);
	}
	template <typename T = void> T ReorderArgumentArray(Il2CppArray<uintptr_t>* args, uintptr_t state) {
		return ((T (*)(Binder*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, args, state);
	}
	template <typename T = uintptr_t> T SelectMethod(uintptr_t bindingAttr, Il2CppArray<uintptr_t>* match, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Binder*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, bindingAttr, match, types, modifiers);
	}
	template <typename T = uintptr_t> T SelectProperty(uintptr_t bindingAttr, Il2CppArray<uintptr_t>* match, uintptr_t returnType, Il2CppArray<uintptr_t>* indexes, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Binder*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, bindingAttr, match, returnType, indexes, modifiers);
	}
	template <typename T = uintptr_t> static T get_DefaultBinder() {
		return ((T (*)(void *))(Il2CppBase() + 0x455219C))(0);
	}
	template <typename T = bool> static T ConvertArgs(uintptr_t binder, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* pinfo, uintptr_t culture) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4561820))(0, binder, args, pinfo, culture);
	}
	template <typename T = int32_t> static T GetDerivedLevel(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4561A38))(0, type);
	}
	template <typename T = uintptr_t> static T FindMostDerivedMatch(Il2CppArray<uintptr_t>* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4552758))(0, match);
	}

};

}
