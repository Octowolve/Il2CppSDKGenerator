#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDetailPlayerItemScoreDetailLabelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDetailPlayerItemScoreDetailLabelView"));
	}

	template <typename T = uintptr_t> T& TotalScoreName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TotalScoreNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScoreDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetScoreDetail(Il2CppString* name, Il2CppString* num) {
		return ((T (*)(SettlementDetailPlayerItemScoreDetailLabelView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x29597CC))(this, name, num);
	}

};

}
