#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRRunEscapeHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRRunEscapeHUD"));
	}

	template <typename T = uintptr_t> T& NewGuidePanel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& PoisonProgressBar() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PersonProgressBar() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LeftTimeLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DistanceLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& PersonIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PersonIconTweenColor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_SecondCountInt() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_DistanceCountInt() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePoisonProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePersonProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePersonIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPoisonProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPersonProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLeftTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDistanceLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchPersonIconTweenColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPersonIconTweenColorOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Distance2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOutOfAllCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BRRunEscapeHUD*))(Il2CppBase() + 0x1B250C8))(this);
	}
	template <typename T = uint64_t> T get_AlwaysShowGameHudState() {
		return ((T (*)(BRRunEscapeHUD*))(Il2CppBase() + 0x1B250D4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRRunEscapeHUD*))(Il2CppBase() + 0x1B250E0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRRunEscapeHUD*))(Il2CppBase() + 0x1B250F0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRRunEscapeHUD*))(Il2CppBase() + 0x1B25188))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(BRRunEscapeHUD*))(Il2CppBase() + 0x1B257D0))(this);
	}
	template <typename T = void> T UpdateLeftTime(uintptr_t info) {
		return ((T (*)(BRRunEscapeHUD*, uintptr_t))(Il2CppBase() + 0x1B25960))(this, info);
	}
	template <typename T = void> T UpdatePoisonProgress(uintptr_t info, uintptr_t pc) {
		return ((T (*)(BRRunEscapeHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B25A58))(this, info, pc);
	}
	template <typename T = void> T UpdatePersonProgress(uintptr_t info, uintptr_t pc) {
		return ((T (*)(BRRunEscapeHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B25BD4))(this, info, pc);
	}
	template <typename T = void> T UpdatePersonIcon(uintptr_t info, uintptr_t pc) {
		return ((T (*)(BRRunEscapeHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B25E48))(this, info, pc);
	}
	template <typename T = void> T SetPoisonProgressBar(float value) {
		return ((T (*)(BRRunEscapeHUD*, float))(Il2CppBase() + 0x1B25250))(this, value);
	}
	template <typename T = void> T SetPersonProgressBar(float value) {
		return ((T (*)(BRRunEscapeHUD*, float))(Il2CppBase() + 0x1B25318))(this, value);
	}
	template <typename T = void> T ResetLeftTimeLabel() {
		return ((T (*)(BRRunEscapeHUD*))(Il2CppBase() + 0x1B253E0))(this);
	}
	template <typename T = void> T SetLeftTimeLabel(float secondCount) {
		return ((T (*)(BRRunEscapeHUD*, float))(Il2CppBase() + 0x1B26160))(this, secondCount);
	}
	template <typename T = void> T SetDistanceLabel(float distance) {
		return ((T (*)(BRRunEscapeHUD*, float))(Il2CppBase() + 0x1B254C0))(this, distance);
	}
	template <typename T = void> T SwitchPersonIconTweenColor(bool isOpen) {
		return ((T (*)(BRRunEscapeHUD*, bool))(Il2CppBase() + 0x1B264E4))(this, isOpen);
	}
	template <typename T = bool> T IsPersonIconTweenColorOpen() {
		return ((T (*)(BRRunEscapeHUD*))(Il2CppBase() + 0x1B26428))(this);
	}
	template <typename T = float> static T Distance2D(Il2CppVector3 a, Il2CppVector3 b) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1B26334))(0, a, b);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRRunEscapeHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B26624))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRRunEscapeHUD*, uintptr_t))(Il2CppBase() + 0x1B26934))(this, itemType);
	}
	template <typename T = bool> T IsOutOfAllCircle() {
		return ((T (*)(BRRunEscapeHUD*))(Il2CppBase() + 0x1B26A10))(this);
	}

};

}
