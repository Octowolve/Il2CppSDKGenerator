#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components {

class WWiseMainAudioListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components", "WWiseMainAudioListener"));
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
	template <typename T = uintptr_t> T& mSubAL() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mSubSAL() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mListSubListeners() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = uintptr_t> T get_CurrentAudioListener() {
		return ((T (*)(WWiseMainAudioListener*))(Il2CppBase() + 0x44FB38C))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(WWiseMainAudioListener*))(Il2CppBase() + 0x44FB664))(this);
	}
	template <typename T = Il2CppVector3> static T GetCurrentListenerPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x44FB88C))(0);
	}
	template <typename T = float> static T GetSqrtListenerDistance(Il2CppVector3 vecPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x44D1EFC))(0, vecPos);
	}
	template <typename T = Il2CppVector3> static T GetCurrentListenerForward() {
		return ((T (*)(void *))(Il2CppBase() + 0x44FBE8C))(0);
	}
	template <typename T = Il2CppVector3> static T GetCurrentListenerRight() {
		return ((T (*)(void *))(Il2CppBase() + 0x44FC5DC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WWiseMainAudioListener*))(Il2CppBase() + 0x44FDD68))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WWiseMainAudioListener*))(Il2CppBase() + 0x44FDF4C))(this);
	}
	template <typename T = void> T AttachAudioListenerTo(uintptr_t goListener) {
		return ((T (*)(WWiseMainAudioListener*, uintptr_t))(Il2CppBase() + 0x44FE17C))(this, goListener);
	}
	template <typename T = void> T OnSubListenerEnable(uintptr_t pSubListener) {
		return ((T (*)(WWiseMainAudioListener*, uintptr_t))(Il2CppBase() + 0x44FF480))(this, pSubListener);
	}
	template <typename T = void> T OnSubListenerDisable(uintptr_t pSubListener) {
		return ((T (*)(WWiseMainAudioListener*, uintptr_t))(Il2CppBase() + 0x44FF650))(this, pSubListener);
	}
	template <typename T = void> T OnSubListenerDestroy(uintptr_t pSubListener) {
		return ((T (*)(WWiseMainAudioListener*, uintptr_t))(Il2CppBase() + 0x44FF82C))(this, pSubListener);
	}
	template <typename T = void> T _AddSubListener(uintptr_t goListener) {
		return ((T (*)(WWiseMainAudioListener*, uintptr_t))(Il2CppBase() + 0x44FE850))(this, goListener);
	}
	template <typename T = void> T _RemoveSubListener(uintptr_t goListener) {
		return ((T (*)(WWiseMainAudioListener*, uintptr_t))(Il2CppBase() + 0x44FFA14))(this, goListener);
	}
	template <typename T = int32_t> T _GetMaxPriority() {
		return ((T (*)(WWiseMainAudioListener*))(Il2CppBase() + 0x44FFC14))(this);
	}
	template <typename T = void> T _RefreshListenerStatus() {
		return ((T (*)(WWiseMainAudioListener*))(Il2CppBase() + 0x44FEBCC))(this);
	}
	template <typename T = void> T _EnableAudioMainListener() {
		return ((T (*)(WWiseMainAudioListener*))(Il2CppBase() + 0x44FFF30))(this);
	}
	template <typename T = void> T _DisableMainAudioListener() {
		return ((T (*)(WWiseMainAudioListener*))(Il2CppBase() + 0x450007C))(this);
	}
	template <typename T = bool> T _HasAnySubListener() {
		return ((T (*)(WWiseMainAudioListener*))(Il2CppBase() + 0x44FFDC4))(this);
	}

};

}
