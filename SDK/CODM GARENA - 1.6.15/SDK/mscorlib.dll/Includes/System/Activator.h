#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Activator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Activator"));
	}


	template <typename T = uintptr_t> static T CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3368E40))(0);
	}
	template <typename T = uintptr_t> static T CreateInstance_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x361BEB0))(0, type);
	}
	template <typename T = uintptr_t> static T CreateInstance_2(uintptr_t type, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x361C238))(0, type, args);
	}
	template <typename T = uintptr_t> static T CreateInstance_3(uintptr_t type, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* activationAttributes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x361C2E4))(0, type, args, activationAttributes);
	}
	template <typename T = uintptr_t> static T CreateInstance_4(uintptr_t type, uintptr_t bindingAttr, uintptr_t binder, Il2CppArray<uintptr_t>* args, uintptr_t culture, Il2CppArray<uintptr_t>* activationAttributes) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x361C3B4))(0, type, bindingAttr, binder, args, culture, activationAttributes);
	}
	template <typename T = uintptr_t> static T CreateInstance_5(uintptr_t type, bool nonPublic) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x361BEB8))(0, type, nonPublic);
	}
	template <typename T = void> static T CheckType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x361CB40))(0, type);
	}
	template <typename T = void> static T CheckAbstractType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x361CEB8))(0, type);
	}
	template <typename T = uintptr_t> static T CreateInstanceInternal(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x361CEB0))(0, type);
	}

};

}
