#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components {

class WWiseMainAudioListener2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components", "WWiseMainAudioListener2"));
	}

	template <typename T = bool> static T& DrawDebugGizmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& msAudioListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> T& mCurListenerPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mLastGetPosFrame() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& mCurListenerForward() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mLastGetForwardFrame() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& mCurListenerRight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& mLastGetRightFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mSubListenerDelegate() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& mIsMainALEnabled() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mMainAL() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mMainSAL() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mMainALGameObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mSubAL() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mSubSAL() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mListSubListeners() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_CurrentAudioListener() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x45002E0))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x45005B8))(this);
	}
	template <typename T = Il2CppVector3> static T GetCurrentListenerPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x44FCD24))(0);
	}
	template <typename T = float> static T GetSqrtListenerDistance(Il2CppVector3 vecPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x44FD0D8))(0, vecPos);
	}
	template <typename T = Il2CppVector3> static T GetCurrentListenerForward() {
		return ((T (*)(void *))(Il2CppBase() + 0x44FD2C4))(0);
	}
	template <typename T = Il2CppVector3> static T GetCurrentListenerRight() {
		return ((T (*)(void *))(Il2CppBase() + 0x44FD674))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x45007E0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x45009C4))(this);
	}
	template <typename T = void> T AttachAudioListenerTo(uintptr_t goListener) {
		return ((T (*)(WWiseMainAudioListener2*, uintptr_t))(Il2CppBase() + 0x4500D60))(this, goListener);
	}
	template <typename T = void> T OnSubListenerEnable(uintptr_t pSubListener) {
		return ((T (*)(WWiseMainAudioListener2*, uintptr_t))(Il2CppBase() + 0x4502104))(this, pSubListener);
	}
	template <typename T = void> T OnSubListenerDisable(uintptr_t pSubListener) {
		return ((T (*)(WWiseMainAudioListener2*, uintptr_t))(Il2CppBase() + 0x45022D4))(this, pSubListener);
	}
	template <typename T = void> T OnSubListenerDestroy(uintptr_t pSubListener) {
		return ((T (*)(WWiseMainAudioListener2*, uintptr_t))(Il2CppBase() + 0x45024B0))(this, pSubListener);
	}
	template <typename T = void> T _AddSubListener(uintptr_t goListener) {
		return ((T (*)(WWiseMainAudioListener2*, uintptr_t))(Il2CppBase() + 0x450124C))(this, goListener);
	}
	template <typename T = void> T _RemoveSubListener(uintptr_t goListener) {
		return ((T (*)(WWiseMainAudioListener2*, uintptr_t))(Il2CppBase() + 0x4502698))(this, goListener);
	}
	template <typename T = int32_t> T _GetMaxPriority() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x4502898))(this);
	}
	template <typename T = void> T _RefreshListenerStatus() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x450164C))(this);
	}
	template <typename T = void> T _SetSpatialAudioRoom(uint64_t uRoomID) {
		return ((T (*)(WWiseMainAudioListener2*, uint64_t))(Il2CppBase() + 0x4502D80))(this, uRoomID);
	}
	template <typename T = void> T _EnableAudioMainListener() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x4502BB4))(this);
	}
	template <typename T = void> T _DisableMainAudioListener() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x4502D74))(this);
	}
	template <typename T = bool> T _HasAnySubListener() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x4502A48))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ListSubListeners() {
		return ((T (*)(WWiseMainAudioListener2*))(Il2CppBase() + 0x4502E54))(this);
	}

};

}
