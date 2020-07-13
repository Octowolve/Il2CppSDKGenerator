#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Microsoft.Win32 {

class RegistryKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Microsoft.Win32", "RegistryKey"));
	}

	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& hive() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& qname() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isRemoteRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isWritable() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& RegistryApi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F82EA8))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F83040))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F80674))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F830A4))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F82ED0))(this);
	}
	template <typename T = uintptr_t> T OpenSubKey(Il2CppString* name) {
		return ((T (*)(RegistryKey*, Il2CppString*))(Il2CppBase() + 0x3F831EC))(this, name);
	}
	template <typename T = uintptr_t> T OpenSubKey_1(Il2CppString* name, bool writable) {
		return ((T (*)(RegistryKey*, Il2CppString*, bool))(Il2CppBase() + 0x3F892D8))(this, name, writable);
	}
	template <typename T = uintptr_t> T GetValue(Il2CppString* name) {
		return ((T (*)(RegistryKey*, Il2CppString*))(Il2CppBase() + 0x3F89630))(this, name);
	}
	template <typename T = uintptr_t> T GetValue_1(Il2CppString* name, uintptr_t defaultValue) {
		return ((T (*)(RegistryKey*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F89638))(this, name, defaultValue);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F897AC))(this);
	}
	template <typename T = bool> T get_IsRoot() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F80C00))(this);
	}
	template <typename T = uintptr_t> T get_Hive() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F80C10))(this);
	}
	template <typename T = uintptr_t> T get_Handle() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F898FC))(this);
	}
	template <typename T = void> T AssertKeyStillValid() {
		return ((T (*)(RegistryKey*))(Il2CppBase() + 0x3F894A4))(this);
	}
	template <typename T = void> T AssertKeyNameLength(Il2CppString* name) {
		return ((T (*)(RegistryKey*, Il2CppString*))(Il2CppBase() + 0x3F8955C))(this, name);
	}
	template <typename T = Il2CppString*> static T DecodeString(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F89904))(0, data);
	}
	template <typename T = uintptr_t> static T CreateMarkedForDeletionException() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F89A3C))(0);
	}
	template <typename T = Il2CppString*> static T GetHiveName(uintptr_t hive) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F82B38))(0, hive);
	}

};

}
