#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class IList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "IList"));
	}


	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(IList*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(IList*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(IList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(IList*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, index, value);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(IList*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(IList*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(IList*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t value) {
		return ((T (*)(IList*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t value) {
		return ((T (*)(IList*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, index, value);
	}
	template <typename T = void> T Remove(uintptr_t value) {
		return ((T (*)(IList*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(IList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}

};

}
