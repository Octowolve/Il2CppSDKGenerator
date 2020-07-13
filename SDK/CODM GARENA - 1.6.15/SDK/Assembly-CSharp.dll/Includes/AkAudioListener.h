#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkAudioListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkAudioListener"));
	}

	template <typename T = uintptr_t> static T& defaultListeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& akGameObjectID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& EmittersToStartListeningTo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& EmittersToStopListeningTo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mAkGameObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isDefaultListener() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& mLastPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mNextUpdateCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mCurStep() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& clearCDTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& clearTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& kSkipFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& mCurFrameCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& kStepCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& listenerId() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> static T get_DefaultListeners() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2459C))(0);
	}
	template <typename T = void> T StartListeningToEmitter(uintptr_t emitter) {
		return ((T (*)(AkAudioListener*, uintptr_t))(Il2CppBase() + 0x4A2464C))(this, emitter);
	}
	template <typename T = void> T StopListeningToEmitter(uintptr_t emitter) {
		return ((T (*)(AkAudioListener*, uintptr_t))(Il2CppBase() + 0x4A2471C))(this, emitter);
	}
	template <typename T = void> T SetIsDefaultListener(bool isDefault) {
		return ((T (*)(AkAudioListener*, bool))(Il2CppBase() + 0x4A247EC))(this, isDefault);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkAudioListener*))(Il2CppBase() + 0x4A24910))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkAudioListener*))(Il2CppBase() + 0x4A24A58))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkAudioListener*))(Il2CppBase() + 0x4A24B60))(this);
	}
	template <typename T = void> T OnListenerMoved() {
		return ((T (*)(AkAudioListener*))(Il2CppBase() + 0x4A24C30))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AkAudioListener*))(Il2CppBase() + 0x4A24C3C))(this);
	}
	template <typename T = uint64_t> T GetAkGameObjectID() {
		return ((T (*)(AkAudioListener*))(Il2CppBase() + 0x4A25A6C))(this);
	}
	template <typename T = void> T _MoveToNextStep() {
		return ((T (*)(AkAudioListener*))(Il2CppBase() + 0x4A25A74))(this);
	}
	template <typename T = void> T ClearAKList() {
		return ((T (*)(AkAudioListener*))(Il2CppBase() + 0x4A25004))(this);
	}
	template <typename T = void> T _UpdateCulling(Il2CppVector3 vecPos) {
		return ((T (*)(AkAudioListener*, Il2CppVector3))(Il2CppBase() + 0x4A24F28))(this, vecPos);
	}
	template <typename T = void> T _CullingAkSurfaceReflector(Il2CppVector3 vecCurPos) {
		return ((T (*)(AkAudioListener*, Il2CppVector3))(Il2CppBase() + 0x4A25AC4))(this, vecCurPos);
	}
	template <typename T = void> T _CullingAkRoom(Il2CppVector3 vecCurPos) {
		return ((T (*)(AkAudioListener*, Il2CppVector3))(Il2CppBase() + 0x4A25EE0))(this, vecCurPos);
	}
	template <typename T = void> T _CullingAkBuildingPortal(Il2CppVector3 vecCurPos) {
		return ((T (*)(AkAudioListener*, Il2CppVector3))(Il2CppBase() + 0x4A26878))(this, vecCurPos);
	}
	template <typename T = void> T _CullingAkRoomPortal(Il2CppVector3 vecCurPos) {
		return ((T (*)(AkAudioListener*, Il2CppVector3))(Il2CppBase() + 0x4A262D4))(this, vecCurPos);
	}
	template <typename T = void> T Migrate14() {
		return ((T (*)(AkAudioListener*))(Il2CppBase() + 0x4A26DC8))(this);
	}

};

}
