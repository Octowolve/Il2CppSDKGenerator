#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class ObjectConstructor1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "ObjectConstructor`1"));
	}


	template <typename T = uintptr_t> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(ObjectConstructor1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B61B14))(this, args);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* args, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ObjectConstructor1*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B61BAC))(this, args, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ObjectConstructor1*, uintptr_t))(Il2CppBase() + 0x4B61BD8))(this, result);
	}

};

}
