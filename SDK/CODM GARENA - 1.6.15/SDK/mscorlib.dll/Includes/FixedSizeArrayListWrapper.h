#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FixedSizeArrayListWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "FixedSizeArrayListWrapper"));
	}


	template <typename T = Il2CppString*> T get_ErrorMessage() {
		return ((T (*)(FixedSizeArrayListWrapper*))(Il2CppBase() + 0x3632F24))(this);
	}
	template <typename T = int32_t> T get_Capacity() {
		return ((T (*)(FixedSizeArrayListWrapper*))(Il2CppBase() + 0x3632F9C))(this);
	}
	template <typename T = void> T set_Capacity(int32_t value) {
		return ((T (*)(FixedSizeArrayListWrapper*, int32_t))(Il2CppBase() + 0x3632FA0))(this, value);
	}
	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(FixedSizeArrayListWrapper*))(Il2CppBase() + 0x3633054))(this);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(FixedSizeArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x363305C))(this, value);
	}
	template <typename T = void> T AddRange(uintptr_t c) {
		return ((T (*)(FixedSizeArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3633110))(this, c);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(FixedSizeArrayListWrapper*))(Il2CppBase() + 0x36331C4))(this);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t value) {
		return ((T (*)(FixedSizeArrayListWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x3633278))(this, index, value);
	}
	template <typename T = void> T InsertRange(int32_t index, uintptr_t c) {
		return ((T (*)(FixedSizeArrayListWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x363332C))(this, index, c);
	}
	template <typename T = void> T Remove(uintptr_t value) {
		return ((T (*)(FixedSizeArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x36333E0))(this, value);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(FixedSizeArrayListWrapper*, int32_t))(Il2CppBase() + 0x3633494))(this, index);
	}

};

}
