#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Prologue {

class PrologueRecorder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Prologue", "PrologueRecorder"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_RecordDic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AccRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T BeginRecord(uintptr_t recordType) {
		return ((T (*)(PrologueRecorder*, uintptr_t))(Il2CppBase() + 0x4CD8F98))(this, recordType);
	}
	template <typename T = void> T EndRecord(uintptr_t recordType) {
		return ((T (*)(PrologueRecorder*, uintptr_t))(Il2CppBase() + 0x4CD9134))(this, recordType);
	}
	template <typename T = void> T AccRecord(uintptr_t recordType) {
		return ((T (*)(PrologueRecorder*, uintptr_t))(Il2CppBase() + 0x4CD92A0))(this, recordType);
	}
	template <typename T = float> T GetRecord(uintptr_t recordType) {
		return ((T (*)(PrologueRecorder*, uintptr_t))(Il2CppBase() + 0x4CD9434))(this, recordType);
	}
	template <typename T = void> T ReportRecord() {
		return ((T (*)(PrologueRecorder*))(Il2CppBase() + 0x4CD958C))(this);
	}

};

}
