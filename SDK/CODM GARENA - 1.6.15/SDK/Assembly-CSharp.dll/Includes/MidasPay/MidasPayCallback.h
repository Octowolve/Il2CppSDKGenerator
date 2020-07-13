#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class MidasPayCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "MidasPayCallback"));
	}


	template <typename T = void> T OnMidasLoginExpired() {
		return ((T (*)(MidasPayCallback*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnMidasPayFinished(uintptr_t result) {
		return ((T (*)(MidasPayCallback*, uintptr_t))(Il2CppBase() + 0x0))(this, result);
	}

};

}
