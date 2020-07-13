#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class IArrayPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "IArrayPool`1"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T Rent(int32_t minimumLength) {
		return ((T (*)(IArrayPool1*, int32_t))(Il2CppBase() + 0x0))(this, minimumLength);
	}
	template <typename T = void> T Return(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(IArrayPool1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, array);
	}

};

}
