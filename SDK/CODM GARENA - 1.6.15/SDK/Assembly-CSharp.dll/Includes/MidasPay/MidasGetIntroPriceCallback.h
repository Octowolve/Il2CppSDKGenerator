#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class MidasGetIntroPriceCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "MidasGetIntroPriceCallback"));
	}


	template <typename T = void> T OnMidasGetIntroPrice(Il2CppDictionary<Il2CppString*, uintptr_t>* result) {
		return ((T (*)(MidasGetIntroPriceCallback*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x0))(this, result);
	}

};

}
