#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceBtnView"));
	}

	template <typename T = float> T& m_pressTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_isRecording() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_isCancellFlag() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = float> T& m_cacheDeltaY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_RecordingFilePath() {
		return *(T*)((uintptr_t)this + 0x1C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnMicPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMicDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancellConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VoiceBtnView*))(Il2CppBase() + 0x27E8CE8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VoiceBtnView*))(Il2CppBase() + 0x27E8F2C))(this);
	}
	template <typename T = void> T OnMicPress(uintptr_t obj, bool isPress) {
		return ((T (*)(VoiceBtnView*, uintptr_t, bool))(Il2CppBase() + 0x27E9824))(this, obj, isPress);
	}
	template <typename T = void> T OnMicDrag(uintptr_t obj, Il2CppVector2 delta) {
		return ((T (*)(VoiceBtnView*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x27E9F8C))(this, obj, delta);
	}
	template <typename T = void> T OnCancellConfirm() {
		return ((T (*)(VoiceBtnView*))(Il2CppBase() + 0x27E91A4))(this);
	}
	template <typename T = void> T BeginRecord() {
		return ((T (*)(VoiceBtnView*))(Il2CppBase() + 0x27E9D34))(this);
	}
	template <typename T = void> T EndRecord(float recordTime) {
		return ((T (*)(VoiceBtnView*, float))(Il2CppBase() + 0x27E9354))(this, recordTime);
	}

};

}
