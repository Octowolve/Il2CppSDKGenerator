#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class Creator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "Creator`1"));
	}


	template <typename T = uintptr_t> T Invoke() {
		return ((T (*)(Creator1*))(Il2CppBase() + 0x4B6413C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(Creator1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B641CC))(this, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(Creator1*, uintptr_t))(Il2CppBase() + 0x4B641F8))(this, result);
	}

};

}
