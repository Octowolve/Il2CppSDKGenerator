#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Microsoft.Win32 {

class Win32RegistryApi
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Microsoft.Win32", "Win32RegistryApi"));
	}

	template <typename T = int32_t> T& NativeBytesPerCharacter() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> static T RegCloseKey(uintptr_t keyHandle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F8A380))(0, keyHandle);
	}
	template <typename T = int32_t> static T RegFlushKey(uintptr_t keyHandle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F8A460))(0, keyHandle);
	}
	template <typename T = int32_t> static T RegOpenKeyEx(uintptr_t keyBase, Il2CppString* keyName, uintptr_t reserved, int32_t access, uintptr_t* keyHandle) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3F8A540))(0, keyBase, keyName, reserved, access, keyHandle);
	}
	template <typename T = int32_t> static T RegQueryValueEx(uintptr_t keyBase, Il2CppString* valueName, uintptr_t reserved, uintptr_t type, uintptr_t zero, uintptr_t dataSize) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8A654))(0, keyBase, valueName, reserved, type, zero, dataSize);
	}
	template <typename T = int32_t> static T RegQueryValueEx_1(uintptr_t keyBase, Il2CppString* valueName, uintptr_t reserved, uintptr_t type, Il2CppArray<uintptr_t>** data, uintptr_t dataSize) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3F8A75C))(0, keyBase, valueName, reserved, type, data, dataSize);
	}
	template <typename T = int32_t> static T RegQueryValueEx_2(uintptr_t keyBase, Il2CppString* valueName, uintptr_t reserved, uintptr_t type, uintptr_t data, uintptr_t dataSize) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8A910))(0, keyBase, valueName, reserved, type, data, dataSize);
	}
	template <typename T = uintptr_t> static T GetHandle(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F8AA1C))(0, key);
	}
	template <typename T = bool> static T IsHandleValid(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F8AAB8))(0, key);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t rkey, Il2CppString* name, uintptr_t defaultValue, uintptr_t options) {
		return ((T (*)(Win32RegistryApi*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8AAE4))(this, rkey, name, defaultValue, options);
	}
	template <typename T = int32_t> T GetBinaryValue(uintptr_t rkey, Il2CppString* name, uintptr_t type, Il2CppArray<uintptr_t>** data, int32_t size) {
		return ((T (*)(Win32RegistryApi*, uintptr_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>**, int32_t))(Il2CppBase() + 0x3F8B148))(this, rkey, name, type, data, size);
	}
	template <typename T = uintptr_t> T OpenSubKey(uintptr_t rkey, Il2CppString* keyName, bool writable) {
		return ((T (*)(Win32RegistryApi*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x3F8B238))(this, rkey, keyName, writable);
	}
	template <typename T = void> T Flush(uintptr_t rkey) {
		return ((T (*)(Win32RegistryApi*, uintptr_t))(Il2CppBase() + 0x3F8B484))(this, rkey);
	}
	template <typename T = void> T Close(uintptr_t rkey) {
		return ((T (*)(Win32RegistryApi*, uintptr_t))(Il2CppBase() + 0x3F8B4BC))(this, rkey);
	}
	template <typename T = void> T GenerateException(int32_t errorCode) {
		return ((T (*)(Win32RegistryApi*, int32_t))(Il2CppBase() + 0x3F8AFE4))(this, errorCode);
	}
	template <typename T = Il2CppString*> T ToString(uintptr_t rkey) {
		return ((T (*)(Win32RegistryApi*, uintptr_t))(Il2CppBase() + 0x3F8B4F4))(this, rkey);
	}
	template <typename T = Il2CppString*> static T CombineName(uintptr_t rkey, Il2CppString* localName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3F8B394))(0, rkey, localName);
	}

};

}
