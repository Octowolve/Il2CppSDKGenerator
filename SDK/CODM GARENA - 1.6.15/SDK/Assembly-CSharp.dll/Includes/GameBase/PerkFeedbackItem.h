#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PerkFeedbackItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PerkFeedbackItem"));
	}

	template <typename T = uintptr_t> T& spriteIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& currentPosSlot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLifeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushToNextSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayFadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePostion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(PerkFeedbackItem*, uintptr_t))(Il2CppBase() + 0x16D9B88))(this, owner);
	}
	template <typename T = void> T Play(Il2CppString* iconName) {
		return ((T (*)(PerkFeedbackItem*, Il2CppString*))(Il2CppBase() + 0x16D9C30))(this, iconName);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PerkFeedbackItem*))(Il2CppBase() + 0x16DA0DC))(this);
	}
	template <typename T = void> T SetLifeTime(float lifeTime) {
		return ((T (*)(PerkFeedbackItem*, float))(Il2CppBase() + 0x16D9F34))(this, lifeTime);
	}
	template <typename T = void> T OnPlayFinished() {
		return ((T (*)(PerkFeedbackItem*))(Il2CppBase() + 0x16DA18C))(this);
	}
	template <typename T = void> T PushToNextSlot() {
		return ((T (*)(PerkFeedbackItem*))(Il2CppBase() + 0x16DA48C))(this);
	}
	template <typename T = void> T DelayFadeOut() {
		return ((T (*)(PerkFeedbackItem*))(Il2CppBase() + 0x16DA548))(this);
	}
	template <typename T = void> T FadeInOut(bool fadeIn, float duration) {
		return ((T (*)(PerkFeedbackItem*, bool, float))(Il2CppBase() + 0x16D9DDC))(this, fadeIn, duration);
	}
	template <typename T = void> T UpdatePostion() {
		return ((T (*)(PerkFeedbackItem*))(Il2CppBase() + 0x16DA044))(this);
	}

};

}
