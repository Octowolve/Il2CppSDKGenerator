#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Default
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Default"));
	}


	template <typename T = uintptr_t> T BindToMethod(uintptr_t bindingAttr, Il2CppArray<uintptr_t>* match, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* modifiers, uintptr_t culture, Il2CppArray<uintptr_t>* names, uintptr_t* state) {
		return ((T (*)(Default*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4561AA4))(this, bindingAttr, match, args, modifiers, culture, names, state);
	}
	template <typename T = void> T ReorderParameters(Il2CppArray<uintptr_t>* names, Il2CppArray<uintptr_t>* args, uintptr_t selected) {
		return ((T (*)(Default*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x45621E8))(this, names, args, selected);
	}
	template <typename T = bool> static T IsArrayAssignable(uintptr_t object_type, uintptr_t target_type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45624BC))(0, object_type, target_type);
	}
	template <typename T = uintptr_t> T ChangeType(uintptr_t value, uintptr_t type, uintptr_t culture) {
		return ((T (*)(Default*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x456256C))(this, value, type, culture);
	}
	template <typename T = void> T ReorderArgumentArray(Il2CppArray<uintptr_t>* args, uintptr_t state) {
		return ((T (*)(Default*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4563428))(this, args, state);
	}
	template <typename T = bool> static T check_type(uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45629E4))(0, from, to);
	}
	template <typename T = bool> static T check_arguments(Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* args, bool allowByRefMatch) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x456342C))(0, types, args, allowByRefMatch);
	}
	template <typename T = uintptr_t> T SelectMethod(uintptr_t bindingAttr, Il2CppArray<uintptr_t>* match, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Default*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4563598))(this, bindingAttr, match, types, modifiers);
	}
	template <typename T = uintptr_t> T SelectMethod_1(uintptr_t bindingAttr, Il2CppArray<uintptr_t>* match, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers, bool allowByRefMatch) {
		return ((T (*)(Default*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4561CEC))(this, bindingAttr, match, types, modifiers, allowByRefMatch);
	}
	template <typename T = uintptr_t> T GetBetterMethod(uintptr_t m1, uintptr_t m2, Il2CppArray<uintptr_t>* types) {
		return ((T (*)(Default*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45635B8))(this, m1, m2, types);
	}
	template <typename T = int32_t> T CompareCloserType(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(Default*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4563918))(this, t1, t2);
	}
	template <typename T = uintptr_t> T SelectProperty(uintptr_t bindingAttr, Il2CppArray<uintptr_t>* match, uintptr_t returnType, Il2CppArray<uintptr_t>* indexes, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Default*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4563BB4))(this, bindingAttr, match, returnType, indexes, modifiers);
	}
	template <typename T = int32_t> static T check_arguments_with_score(Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4563E94))(0, types, args);
	}
	template <typename T = int32_t> static T check_type_with_score(uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4563F60))(0, from, to);
	}

};

}
