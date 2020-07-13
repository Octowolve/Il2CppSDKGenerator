#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class ObjRefSurrogate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "ObjRefSurrogate"));
	}


	template <typename T = void> T GetObjectData(uintptr_t obj, uintptr_t si, uintptr_t sc) {
		return ((T (*)(ObjRefSurrogate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B3C6F0))(this, obj, si, sc);
	}
	template <typename T = uintptr_t> T SetObjectData(uintptr_t obj, uintptr_t si, uintptr_t sc, uintptr_t selector) {
		return ((T (*)(ObjRefSurrogate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B3C840))(this, obj, si, sc, selector);
	}

};

}
