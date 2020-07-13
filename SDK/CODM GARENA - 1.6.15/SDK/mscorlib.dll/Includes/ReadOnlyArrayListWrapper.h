#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReadOnlyArrayListWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ReadOnlyArrayListWrapper"));
	}


	template <typename T = Il2CppString*> T get_ErrorMessage() {
		return ((T (*)(ReadOnlyArrayListWrapper*))(Il2CppBase() + 0x3633548))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ReadOnlyArrayListWrapper*))(Il2CppBase() + 0x36335C0))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ReadOnlyArrayListWrapper*, int32_t))(Il2CppBase() + 0x36335C8))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(ReadOnlyArrayListWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x36335FC))(this, index, value);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(ReadOnlyArrayListWrapper*))(Il2CppBase() + 0x36336EC))(this);
	}
	template <typename T = void> T Sort_1(uintptr_t comparer) {
		return ((T (*)(ReadOnlyArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x36337DC))(this, comparer);
	}

};

}
