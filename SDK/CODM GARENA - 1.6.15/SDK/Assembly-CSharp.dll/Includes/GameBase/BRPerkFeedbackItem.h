#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRPerkFeedbackItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRPerkFeedbackItem"));
	}

	template <typename T = uintptr_t> T& perkIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& buffTips() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& currentPosSlot() {
		return *(T*)((uintptr_t)this + 0x1C);
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
		return ((T (*)(BRPerkFeedbackItem*, uintptr_t))(Il2CppBase() + 0x3746028))(this, owner);
	}
	template <typename T = void> T Play(Il2CppString* iconName, Il2CppString* tips) {
		return ((T (*)(BRPerkFeedbackItem*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3746BC0))(this, iconName, tips);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRPerkFeedbackItem*))(Il2CppBase() + 0x3746F80))(this);
	}
	template <typename T = void> T SetLifeTime(float lifeTime) {
		return ((T (*)(BRPerkFeedbackItem*, float))(Il2CppBase() + 0x3747244))(this, lifeTime);
	}
	template <typename T = void> T OnPlayFinished() {
		return ((T (*)(BRPerkFeedbackItem*))(Il2CppBase() + 0x3747354))(this);
	}
	template <typename T = void> T PushToNextSlot() {
		return ((T (*)(BRPerkFeedbackItem*))(Il2CppBase() + 0x3746B04))(this);
	}
	template <typename T = void> T DelayFadeOut() {
		return ((T (*)(BRPerkFeedbackItem*))(Il2CppBase() + 0x3747500))(this);
	}
	template <typename T = void> T FadeInOut(bool fadeIn, float duration) {
		return ((T (*)(BRPerkFeedbackItem*, bool, float))(Il2CppBase() + 0x37470EC))(this, fadeIn, duration);
	}
	template <typename T = void> T UpdatePostion() {
		return ((T (*)(BRPerkFeedbackItem*))(Il2CppBase() + 0x3747468))(this);
	}

};

}
