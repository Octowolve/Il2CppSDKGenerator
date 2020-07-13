#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Microsoft.Win32 {

class IRegistryApi
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Microsoft.Win32", "IRegistryApi"));
	}


	template <typename T = uintptr_t> T OpenSubKey(uintptr_t rkey, Il2CppString* keyname, bool writtable) {
		return ((T (*)(IRegistryApi*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, rkey, keyname, writtable);
	}
	template <typename T = void> T Flush(uintptr_t rkey) {
		return ((T (*)(IRegistryApi*, uintptr_t))(Il2CppBase() + 0x0))(this, rkey);
	}
	template <typename T = void> T Close(uintptr_t rkey) {
		return ((T (*)(IRegistryApi*, uintptr_t))(Il2CppBase() + 0x0))(this, rkey);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t rkey, Il2CppString* name, uintptr_t default_value, uintptr_t options) {
		return ((T (*)(IRegistryApi*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, rkey, name, default_value, options);
	}
	template <typename T = Il2CppString*> T ToString(uintptr_t rkey) {
		return ((T (*)(IRegistryApi*, uintptr_t))(Il2CppBase() + 0x0))(this, rkey);
	}

};

}
