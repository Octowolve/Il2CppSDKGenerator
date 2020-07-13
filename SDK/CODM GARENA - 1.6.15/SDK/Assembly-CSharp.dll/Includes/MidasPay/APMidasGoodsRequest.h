#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class APMidasGoodsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "APMidasGoodsRequest"));
	}

	template <typename T = int32_t> T& tokenType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& goodsTokenUrl() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& developerPayload() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& isReceiptMode() {
		return *(T*)((uintptr_t)this + 0x64);
	}


};

}
