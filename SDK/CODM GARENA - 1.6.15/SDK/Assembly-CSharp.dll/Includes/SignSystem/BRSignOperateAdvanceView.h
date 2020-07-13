#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class BRSignOperateAdvanceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "BRSignOperateAdvanceView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& GuideHandEffect() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& NewGuideLine() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& NewGuideEffectPanle() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSlideLineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRSignOperateAdvanceView*))(Il2CppBase() + 0x38E0A4C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRSignOperateAdvanceView*))(Il2CppBase() + 0x38E0A54))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRSignOperateAdvanceView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x38E0A64))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = void> T ShowSlideLineEffect(Il2CppVector3 targetPos) {
		return ((T (*)(BRSignOperateAdvanceView*, Il2CppVector3))(Il2CppBase() + 0x38E1010))(this, targetPos);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRSignOperateAdvanceView*, uintptr_t))(Il2CppBase() + 0x38E17C8))(this, itemType);
	}

};

}
