#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Shop {

class CurrencyType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Shop", "CurrencyType"));
	}

	template <typename T = int32_t> T& OriginalValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& DiscountValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
