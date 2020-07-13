#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Resources {

class RuntimeResourceSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Resources", "RuntimeResourceSet"));
	}


	template <typename T = uintptr_t> T GetObject(Il2CppString* name) {
		return ((T (*)(RuntimeResourceSet*, Il2CppString*))(Il2CppBase() + 0x4FDEFD0))(this, name);
	}
	template <typename T = uintptr_t> T GetObject_1(Il2CppString* name, bool ignoreCase) {
		return ((T (*)(RuntimeResourceSet*, Il2CppString*, bool))(Il2CppBase() + 0x4FDF1E0))(this, name, ignoreCase);
	}
	template <typename T = uintptr_t> T CloneDisposableObjectIfPossible(uintptr_t value) {
		return ((T (*)(RuntimeResourceSet*, uintptr_t))(Il2CppBase() + 0x4FDF0A8))(this, value);
	}

};

}
