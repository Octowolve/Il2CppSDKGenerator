#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class MidasGetInfoCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "MidasGetInfoCallback"));
	}


	template <typename T = void> T GetInfoFinished(Il2CppString* type, int32_t retCode, Il2CppString* json) {
		return ((T (*)(MidasGetInfoCallback*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, type, retCode, json);
	}

};

}
