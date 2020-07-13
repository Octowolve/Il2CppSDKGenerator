#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlayerInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlayerInput"));
	}

	template <typename T = float> static T& DoubleClickMaxDeltaTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mPhase() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mFingerID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& mInitTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mInitFrameNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mLastUpdateFrameNum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& mDeltaPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& mCurrentPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& mInitialPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mCurrentTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& mDeltaTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mIsFromGamepad() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppVector2> T get_InitialPosition() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB594))(this);
	}
	template <typename T = void> T set_InitialPosition(Il2CppVector2 value) {
		return ((T (*)(PlayerInput*, Il2CppVector2))(Il2CppBase() + 0x1DEB5A8))(this, value);
	}
	template <typename T = Il2CppVector2> T get_CurrentPosition() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB5B4))(this);
	}
	template <typename T = void> T set_CurrentPosition(Il2CppVector2 value) {
		return ((T (*)(PlayerInput*, Il2CppVector2))(Il2CppBase() + 0x1DEB5C8))(this, value);
	}
	template <typename T = Il2CppVector2> T get_DeltaPosition() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB5D4))(this);
	}
	template <typename T = void> T set_DeltaPosition(Il2CppVector2 value) {
		return ((T (*)(PlayerInput*, Il2CppVector2))(Il2CppBase() + 0x1DEB5E8))(this, value);
	}
	template <typename T = float> T get_InitTime() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB5F4))(this);
	}
	template <typename T = void> T set_InitTime(float value) {
		return ((T (*)(PlayerInput*, float))(Il2CppBase() + 0x1DEB5FC))(this, value);
	}
	template <typename T = int32_t> T get_InitFrameNum() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB604))(this);
	}
	template <typename T = void> T set_InitFrameNum(int32_t value) {
		return ((T (*)(PlayerInput*, int32_t))(Il2CppBase() + 0x1DEB60C))(this, value);
	}
	template <typename T = int32_t> T get_FingerID() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB614))(this);
	}
	template <typename T = void> T set_FingerID(int32_t value) {
		return ((T (*)(PlayerInput*, int32_t))(Il2CppBase() + 0x1DEB61C))(this, value);
	}
	template <typename T = uintptr_t> T get_Phase() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB624))(this);
	}
	template <typename T = void> T set_Phase(uintptr_t value) {
		return ((T (*)(PlayerInput*, uintptr_t))(Il2CppBase() + 0x1DEB62C))(this, value);
	}
	template <typename T = int32_t> T get_LastUpdateFrameNum() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB634))(this);
	}
	template <typename T = void> T set_LastUpdateFrameNum(int32_t value) {
		return ((T (*)(PlayerInput*, int32_t))(Il2CppBase() + 0x1DEB63C))(this, value);
	}
	template <typename T = bool> T get_IsFromGamepad() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB644))(this);
	}
	template <typename T = void> T set_IsFromGamepad(bool value) {
		return ((T (*)(PlayerInput*, bool))(Il2CppBase() + 0x1DEB64C))(this, value);
	}
	template <typename T = float> T get_CurrentTime() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB654))(this);
	}
	template <typename T = float> T get_DeltaTime() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEB65C))(this);
	}
	template <typename T = void> T Init(int32_t inFingerID, Il2CppVector2 InitPos, int32_t initFrameNum, float initTime, bool fromGamepad) {
		return ((T (*)(PlayerInput*, int32_t, Il2CppVector2, int32_t, float, bool))(Il2CppBase() + 0x1DEB4A0))(this, inFingerID, InitPos, initFrameNum, initTime, fromGamepad);
	}
	template <typename T = void> T Init_1(Il2CppVector2 initPos, bool fromGamepad) {
		return ((T (*)(PlayerInput*, Il2CppVector2, bool))(Il2CppBase() + 0x1DEB664))(this, initPos, fromGamepad);
	}
	template <typename T = void> T Update(uintptr_t curPhase, Il2CppVector2 curPos, Il2CppVector2 deltaPos, float curTime, float deltaTime) {
		return ((T (*)(PlayerInput*, uintptr_t, Il2CppVector2, Il2CppVector2, float, float))(Il2CppBase() + 0x1DEB754))(this, curPhase, curPos, deltaPos, curTime, deltaTime);
	}
	template <typename T = void> T LockForward(Il2CppVector2 newPos) {
		return ((T (*)(PlayerInput*, Il2CppVector2))(Il2CppBase() + 0x1DEB948))(this, newPos);
	}
	template <typename T = bool> T IsUpdated() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEBA20))(this);
	}
	template <typename T = bool> T IsSame(uintptr_t input) {
		return ((T (*)(PlayerInput*, uintptr_t))(Il2CppBase() + 0x1DEBAE0))(this, input);
	}
	template <typename T = bool> T IsDoubleClick(uintptr_t lastInput) {
		return ((T (*)(PlayerInput*, uintptr_t))(Il2CppBase() + 0x1DEBBCC))(this, lastInput);
	}
	template <typename T = bool> T IsBegin() {
		return ((T (*)(PlayerInput*))(Il2CppBase() + 0x1DEBD68))(this);
	}

};

}
