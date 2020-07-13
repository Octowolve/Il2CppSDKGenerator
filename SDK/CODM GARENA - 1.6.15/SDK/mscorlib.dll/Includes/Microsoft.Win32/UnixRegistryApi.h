#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Microsoft.Win32 {

class UnixRegistryApi
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Microsoft.Win32", "UnixRegistryApi"));
	}


	template <typename T = Il2CppString*> static T ToUnix(Il2CppString* keyname) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F89BF8))(0, keyname);
	}
	template <typename T = bool> static T IsWellKnownKey(Il2CppString* parentKeyName, Il2CppString* keyname) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3F89C60))(0, parentKeyName, keyname);
	}
	template <typename T = uintptr_t> T OpenSubKey(uintptr_t rkey, Il2CppString* keyname, bool writable) {
		return ((T (*)(UnixRegistryApi*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x3F89EEC))(this, rkey, keyname, writable);
	}
	template <typename T = void> T Flush(uintptr_t rkey) {
		return ((T (*)(UnixRegistryApi*, uintptr_t))(Il2CppBase() + 0x3F8A12C))(this, rkey);
	}
	template <typename T = void> T Close(uintptr_t rkey) {
		return ((T (*)(UnixRegistryApi*, uintptr_t))(Il2CppBase() + 0x3F8A1DC))(this, rkey);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t rkey, Il2CppString* name, uintptr_t default_value, uintptr_t options) {
		return ((T (*)(UnixRegistryApi*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8A27C))(this, rkey, name, default_value, options);
	}
	template <typename T = Il2CppString*> T ToString(uintptr_t rkey) {
		return ((T (*)(UnixRegistryApi*, uintptr_t))(Il2CppBase() + 0x3F8A360))(this, rkey);
	}
	template <typename T = uintptr_t> T CreateSubKey(uintptr_t rkey, Il2CppString* keyname, bool writable) {
		return ((T (*)(UnixRegistryApi*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x3F8A010))(this, rkey, keyname, writable);
	}

};

}
