#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPTutorialTimeRecorder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPTutorialTimeRecorder"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_RecordDic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CurRecordType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OnTimeReport() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRecording() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurRecordTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRecordTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportTimeRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ResetRecord() {
		return ((T (*)(SPTutorialTimeRecorder*))(Il2CppBase() + 0x3F1A66C))(this);
	}
	template <typename T = void> T BeginRecord(uintptr_t recordType) {
		return ((T (*)(SPTutorialTimeRecorder*, uintptr_t))(Il2CppBase() + 0x3F1A748))(this, recordType);
	}
	template <typename T = void> T EndRecord(uintptr_t recordType) {
		return ((T (*)(SPTutorialTimeRecorder*, uintptr_t))(Il2CppBase() + 0x3F1A984))(this, recordType);
	}
	template <typename T = bool> T IsRecording() {
		return ((T (*)(SPTutorialTimeRecorder*))(Il2CppBase() + 0x3F1AB0C))(this);
	}
	template <typename T = float> T GetCurRecordTime() {
		return ((T (*)(SPTutorialTimeRecorder*))(Il2CppBase() + 0x3F1ABB4))(this);
	}
	template <typename T = float> T GetRecordTime(uintptr_t recordType) {
		return ((T (*)(SPTutorialTimeRecorder*, uintptr_t))(Il2CppBase() + 0x3F1AD10))(this, recordType);
	}
	template <typename T = void> T ReportTimeRecord() {
		return ((T (*)(SPTutorialTimeRecorder*))(Il2CppBase() + 0x3F1AE44))(this);
	}

};

}
