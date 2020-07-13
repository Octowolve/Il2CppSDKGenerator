#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChipMachineTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChipMachineTipsHUD"));
	}

	template <typename T = uintptr_t> T& TipsLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> static T& tweenDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayAndHideCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTweenFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetTipsLabel(Il2CppString* tips) {
		return ((T (*)(BRChipMachineTipsHUD*, Il2CppString*))(Il2CppBase() + 0x24FF7D0))(this, tips);
	}
	template <typename T = void> T ShowTips(Il2CppString* tipsContent, float visibleTime) {
		return ((T (*)(BRChipMachineTipsHUD*, Il2CppString*, float))(Il2CppBase() + 0x24FF8F4))(this, tipsContent, visibleTime);
	}
	template <typename T = uintptr_t> T DelayAndHideCommonTips(float delay) {
		return ((T (*)(BRChipMachineTipsHUD*, float))(Il2CppBase() + 0x24FFAA0))(this, delay);
	}
	template <typename T = uintptr_t> T OnTweenFinished(float delay) {
		return ((T (*)(BRChipMachineTipsHUD*, float))(Il2CppBase() + 0x24FFBD4))(this, delay);
	}

};

}
