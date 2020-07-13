#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FeedBackItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FeedBackItem"));
	}

	template <typename T = int32_t> static T& WEAPON_LEVEL_OFFSET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WEAPON_UNLOCK_OFFSET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& tweenPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& widgetRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& spriteIcon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& bgIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& labelName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& labelLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& effectAnimator() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& levelUpFeedBack() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& BeginPlayTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& allWidgets() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& mCurrentPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& mTargetPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> static T& mTweenDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& animStateName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& mPlayTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& mShowSoundID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& mShowSoundPlayed() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& targetPos_0() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& targetPos_1() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& targetPos_2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushToNextPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFromTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLifeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTweenFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_CanPush() {
		return ((T (*)(FeedBackItem*))(Il2CppBase() + 0x31DB364))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FeedBackItem*))(Il2CppBase() + 0x31DC274))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FeedBackItem*))(Il2CppBase() + 0x31DA920))(this);
	}
	template <typename T = void> T Init(Il2CppString* iconName, Il2CppString* feedbackName, Il2CppString* iSoundID, int32_t levelUp) {
		return ((T (*)(FeedBackItem*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x31DB5D0))(this, iconName, feedbackName, iSoundID, levelUp);
	}
	template <typename T = bool> T PushToNextPos() {
		return ((T (*)(FeedBackItem*))(Il2CppBase() + 0x31DBCC0))(this);
	}
	template <typename T = void> T GetFromTo(uintptr_t from, uintptr_t to) {
		return ((T (*)(FeedBackItem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31DC68C))(this, from, to);
	}
	template <typename T = void> T Play() {
		return ((T (*)(FeedBackItem*))(Il2CppBase() + 0x31DC358))(this);
	}
	template <typename T = void> T Move(Il2CppVector3 inFrom, Il2CppVector3 inTo) {
		return ((T (*)(FeedBackItem*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x31DC8B4))(this, inFrom, inTo);
	}
	template <typename T = void> T SetLifeTime(float lifeTime) {
		return ((T (*)(FeedBackItem*, float))(Il2CppBase() + 0x31DC7B8))(this, lifeTime);
	}
	template <typename T = void> T OnPlayFinished() {
		return ((T (*)(FeedBackItem*))(Il2CppBase() + 0x31DCCC8))(this);
	}
	template <typename T = void> T InternalMove(Il2CppVector3 from, Il2CppVector3 to) {
		return ((T (*)(FeedBackItem*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x31DCB38))(this, from, to);
	}
	template <typename T = void> T OnTweenFinished() {
		return ((T (*)(FeedBackItem*))(Il2CppBase() + 0x31DCDDC))(this);
	}

};

}
