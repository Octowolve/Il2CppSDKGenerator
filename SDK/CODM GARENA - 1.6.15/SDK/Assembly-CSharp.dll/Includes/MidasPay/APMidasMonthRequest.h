#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class APMidasMonthRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "APMidasMonthRequest"));
	}

	template <typename T = Il2CppString*> T& serviceCode() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& serviceName() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& serviceType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& autoPay() {
		return *(T*)((uintptr_t)this + 0x64);
	}


};

}
