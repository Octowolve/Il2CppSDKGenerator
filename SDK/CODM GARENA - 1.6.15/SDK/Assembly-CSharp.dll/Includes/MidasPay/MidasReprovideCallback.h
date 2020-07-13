#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class MidasReprovideCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "MidasReprovideCallback"));
	}


	template <typename T = void> T OnMidasReprovideFinished(Il2CppDictionary<Il2CppString*, uintptr_t>* result) {
		return ((T (*)(MidasReprovideCallback*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x0))(this, result);
	}

};

}
