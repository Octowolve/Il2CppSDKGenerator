#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class ICollection1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "ICollection`1"));
	}


	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ICollection1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ICollection1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(ICollection1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ICollection1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(ICollection1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(ICollection1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, array, arrayIndex);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(ICollection1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}

};

}
