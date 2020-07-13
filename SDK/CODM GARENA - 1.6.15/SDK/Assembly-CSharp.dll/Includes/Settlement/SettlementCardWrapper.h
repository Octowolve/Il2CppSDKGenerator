#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementCardWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementCardWrapper"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProperSettlementCardGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReusedCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T GetProperSettlementCardGrid(int32_t idx, uintptr_t cardData, uintptr_t go, uintptr_t script) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2942DA0))(0, idx, cardData, go, script);
	}
	template <typename T = uintptr_t> static T ReusedCard(uintptr_t cache, uintptr_t used, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B463A8))(0, cache, used, parent);
	}

};

}
