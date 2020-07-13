#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class APMidasGetInfoResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "APMidasGetInfoResult"));
	}

	template <typename T = Il2CppString*> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ret() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
