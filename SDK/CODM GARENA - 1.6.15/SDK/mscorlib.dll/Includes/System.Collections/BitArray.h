#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class BitArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "BitArray"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_array() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_length() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = unsigned char> T getByte(int32_t byteIndex) {
		return ((T (*)(BitArray*, int32_t))(Il2CppBase() + 0x36355C0))(this, byteIndex);
	}
	template <typename T = void> T setByte(int32_t byteIndex, unsigned char value) {
		return ((T (*)(BitArray*, int32_t, unsigned char))(Il2CppBase() + 0x3635284))(this, byteIndex, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(BitArray*))(Il2CppBase() + 0x3635624))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(BitArray*))(Il2CppBase() + 0x363562C))(this);
	}
	template <typename T = bool> T get_Item(int32_t index) {
		return ((T (*)(BitArray*, int32_t))(Il2CppBase() + 0x3635634))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, bool value) {
		return ((T (*)(BitArray*, int32_t, bool))(Il2CppBase() + 0x3635730))(this, index, value);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(BitArray*))(Il2CppBase() + 0x3635844))(this);
	}
	template <typename T = void> T set_Length(int32_t value) {
		return ((T (*)(BitArray*, int32_t))(Il2CppBase() + 0x363584C))(this, value);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(BitArray*))(Il2CppBase() + 0x3635A20))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(BitArray*))(Il2CppBase() + 0x3635A24))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(BitArray*, uintptr_t, int32_t))(Il2CppBase() + 0x3635AB4))(this, array, index);
	}
	template <typename T = bool> T Get(int32_t index) {
		return ((T (*)(BitArray*, int32_t))(Il2CppBase() + 0x3635638))(this, index);
	}
	template <typename T = void> T Set(int32_t index, bool value) {
		return ((T (*)(BitArray*, int32_t, bool))(Il2CppBase() + 0x3635734))(this, index, value);
	}
	template <typename T = void> T SetAll(bool value) {
		return ((T (*)(BitArray*, bool))(Il2CppBase() + 0x3635EE0))(this, value);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(BitArray*))(Il2CppBase() + 0x3635F7C))(this);
	}

};

}
