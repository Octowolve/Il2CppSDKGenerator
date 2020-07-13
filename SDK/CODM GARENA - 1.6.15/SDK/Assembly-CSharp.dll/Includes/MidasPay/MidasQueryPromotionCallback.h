#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class MidasQueryPromotionCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "MidasQueryPromotionCallback"));
	}


	template <typename T = void> T OnQueryPromotionCallback(Il2CppString* result) {
		return ((T (*)(MidasQueryPromotionCallback*, Il2CppString*))(Il2CppBase() + 0x0))(this, result);
	}

};

}
