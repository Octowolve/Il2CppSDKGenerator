#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class MidasQueryInventoryCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "MidasQueryInventoryCallback"));
	}


	template <typename T = void> T OnQueryInventoryCallback(Il2CppString* result) {
		return ((T (*)(MidasQueryInventoryCallback*, Il2CppString*))(Il2CppBase() + 0x0))(this, result);
	}

};

}
