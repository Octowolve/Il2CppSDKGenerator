#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class MidasGetLocalPriceCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "MidasGetLocalPriceCallback"));
	}


	template <typename T = void> T OnMidasGetProdcut(Il2CppDictionary<Il2CppString*, uintptr_t>* result) {
		return ((T (*)(MidasGetLocalPriceCallback*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x0))(this, result);
	}

};

}
