#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class UILotteryIntroductionView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "UILotteryIntroductionView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ColorQualityProbabilityList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LuckPointRewardIntorduceLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_UIFirstPopupBigTemplate() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ColorProb() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> static T& m_MaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessingCombinationProbabilityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUILotteryIntroductionView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T ProcessingCombinationProbabilityData(Il2CppList<uintptr_t>* data) {
		return ((T (*)(UILotteryIntroductionView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2D61904))(this, data);
	}
	template <typename T = void> T InitUI() {
		return ((T (*)(UILotteryIntroductionView*))(Il2CppBase() + 0x2D60538))(this);
	}
	template <typename T = void> T UpdateUILotteryIntroductionView(uintptr_t res) {
		return ((T (*)(UILotteryIntroductionView*, uintptr_t))(Il2CppBase() + 0x2D611E4))(this, res);
	}
	template <typename T = int32_t> static T UpdateUILotteryIntroductionViewm__0(uintptr_t param1, uintptr_t param2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D61D00))(0, param1, param2);
	}

};

}
