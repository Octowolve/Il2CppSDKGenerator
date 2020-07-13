#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutSellItemConfirmView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutSellItemConfirmView"));
	}

	template <typename T = uintptr_t> T& LabelNumItems() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& GoCoinTemp() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& CoinGrid() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnConfirm() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent(int32_t items, Il2CppList<uintptr_t>* coins) {
		return ((T (*)(LoadoutSellItemConfirmView*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1F41614))(this, items, coins);
	}

};

}
