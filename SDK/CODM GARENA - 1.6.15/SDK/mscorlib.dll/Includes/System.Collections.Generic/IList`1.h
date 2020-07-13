#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class IList1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "IList`1"));
	}


	template <typename T = int32_t> T IndexOf(uintptr_t item) {
		return ((T (*)(IList1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t item) {
		return ((T (*)(IList1*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, index, item);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(IList1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(IList1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(IList1*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, index, value);
	}

};

}
