#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CPSafeBoxMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CPSafeBoxMainView"));
	}

	template <typename T = uintptr_t> T& safeBoxStateSprite() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& descriptionLabel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& claimBtn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ClaimBtnPriceLabel() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& fReachedProgressValue() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
