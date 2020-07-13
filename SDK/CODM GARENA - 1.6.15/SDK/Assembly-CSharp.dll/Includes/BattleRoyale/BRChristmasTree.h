#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChristmasTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChristmasTree"));
	}

	template <typename T = uint32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_TreeAssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_PropAssetID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_FireWorkEffectID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Asset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LanternBlink() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& EffectPlayed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isShowing() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& hasShowed() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> T& starEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SentUIShowState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPlayStarEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStarEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChristmasTreeLightenedState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init(uint32_t uid, int32_t propAssetID, int32_t christmasTreeID, int32_t fireWorkEffectID, bool hasShow) {
		return ((T (*)(BRChristmasTree*, uint32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x2500A34))(this, uid, propAssetID, christmasTreeID, fireWorkEffectID, hasShow);
	}
	template <typename T = void> T InitAsset() {
		return ((T (*)(BRChristmasTree*))(Il2CppBase() + 0x2500B2C))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRChristmasTree*, uintptr_t))(Il2CppBase() + 0x2500BC4))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRChristmasTree*, uintptr_t))(Il2CppBase() + 0x2501094))(this, other);
	}
	template <typename T = void> T SentUIShowState(bool shouldShow, bool hasStar) {
		return ((T (*)(BRChristmasTree*, bool, bool))(Il2CppBase() + 0x2500DB4))(this, shouldShow, hasStar);
	}
	template <typename T = void> T DoPlayStarEffect() {
		return ((T (*)(BRChristmasTree*))(Il2CppBase() + 0x2501250))(this);
	}
	template <typename T = void> T CheckStarEffect(float lightTime) {
		return ((T (*)(BRChristmasTree*, float))(Il2CppBase() + 0x2501610))(this, lightTime);
	}
	template <typename T = void> T DoLightEffect() {
		return ((T (*)(BRChristmasTree*))(Il2CppBase() + 0x2501498))(this);
	}
	template <typename T = void> T SetChristmasTreeLightenedState(bool hasLight) {
		return ((T (*)(BRChristmasTree*, bool))(Il2CppBase() + 0x25016CC))(this, hasLight);
	}

};

}
