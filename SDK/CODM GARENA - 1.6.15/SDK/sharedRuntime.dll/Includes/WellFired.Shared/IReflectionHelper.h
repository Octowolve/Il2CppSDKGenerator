#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class IReflectionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "IReflectionHelper"));
	}


	template <typename T = uintptr_t> T GetProperty(uintptr_t type, Il2CppString* name) {
		return ((T (*)(IReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, type, name);
	}
	template <typename T = uintptr_t> T GetField(uintptr_t type, Il2CppString* name) {
		return ((T (*)(IReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, type, name);
	}
	template <typename T = uintptr_t> T GetNonPublicStaticMethod(uintptr_t type, Il2CppString* name) {
		return ((T (*)(IReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, type, name);
	}
	template <typename T = uintptr_t> T GetNonPublicInstanceProperty(uintptr_t type, Il2CppString* name) {
		return ((T (*)(IReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, type, name);
	}
	template <typename T = uintptr_t> T GetNonPublicInstanceField(uintptr_t type, Il2CppString* name) {
		return ((T (*)(IReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, type, name);
	}

};

}
