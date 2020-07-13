#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class MidasInitCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "MidasInitCallback"));
	}


	template <typename T = void> T OnMidasInitFinished(Il2CppDictionary<Il2CppString*, uintptr_t>* result) {
		return ((T (*)(MidasInitCallback*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x0))(this, result);
	}

};

}
