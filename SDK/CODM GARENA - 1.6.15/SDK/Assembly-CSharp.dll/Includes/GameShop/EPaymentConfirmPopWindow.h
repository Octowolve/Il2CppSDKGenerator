#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class EPaymentConfirmPopWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "EPaymentConfirmPopWindow"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& CommonComfirmWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& multipleChoiceComfirmWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& BattlePassComfirmWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TextComfirmWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
