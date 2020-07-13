#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class MethodCall2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "MethodCall`2"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t target, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(MethodCall2*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B68038))(this, target, args);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t target, Il2CppArray<uintptr_t>* args, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MethodCall2*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B680FC))(this, target, args, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(MethodCall2*, uintptr_t))(Il2CppBase() + 0x4B68134))(this, result);
	}

};

}
