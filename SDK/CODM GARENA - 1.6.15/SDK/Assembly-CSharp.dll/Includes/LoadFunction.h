#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadFunction"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T Invoke(Il2CppString* path) {
		return ((T (*)(LoadFunction*, Il2CppString*))(Il2CppBase() + 0x434D29C))(this, path);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* path, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LoadFunction*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x434D334))(this, path, callback, object);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EndInvoke(uintptr_t result) {
		return ((T (*)(LoadFunction*, uintptr_t))(Il2CppBase() + 0x434D360))(this, result);
	}

};

}
