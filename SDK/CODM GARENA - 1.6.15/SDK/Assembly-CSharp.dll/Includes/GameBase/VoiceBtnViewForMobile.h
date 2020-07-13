#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceBtnViewForMobile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceBtnViewForMobile"));
	}

	template <typename T = float> T& minX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& maxX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& minY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& maxY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& cacheFingerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& cacheBeginPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_isRecording() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_isCancellFlag() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& m_pressTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_recordingFilePath() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& CAMERA_DISTANCE_Z() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTouchPosToUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfClickSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecordStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancellConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VoiceBtnViewForMobile*))(Il2CppBase() + 0x27EA234))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VoiceBtnViewForMobile*))(Il2CppBase() + 0x27EA50C))(this);
	}
	template <typename T = Il2CppVector3> T GetTouchPosToUI(Il2CppVector3 touchPos) {
		return ((T (*)(VoiceBtnViewForMobile*, Il2CppVector3))(Il2CppBase() + 0x27EB4D8))(this, touchPos);
	}
	template <typename T = bool> T CheckIfClickSelf(Il2CppVector3 pos) {
		return ((T (*)(VoiceBtnViewForMobile*, Il2CppVector3))(Il2CppBase() + 0x27EB79C))(this, pos);
	}
	template <typename T = void> T OnRecordStart() {
		return ((T (*)(VoiceBtnViewForMobile*))(Il2CppBase() + 0x27EB8B0))(this);
	}
	template <typename T = void> T BeginRecord() {
		return ((T (*)(VoiceBtnViewForMobile*))(Il2CppBase() + 0x27EBA14))(this);
	}
	template <typename T = void> T EndRecord(float recordTime) {
		return ((T (*)(VoiceBtnViewForMobile*, float))(Il2CppBase() + 0x27EB008))(this, recordTime);
	}
	template <typename T = void> T OnCancellConfirm() {
		return ((T (*)(VoiceBtnViewForMobile*))(Il2CppBase() + 0x27EAE58))(this);
	}

};

}
