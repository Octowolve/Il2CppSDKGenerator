#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDataMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDataMgr"));
	}

	template <typename T = int64_t> static T& m_lastTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& mLastReportedClientms_King() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int64_t> static T& mLastReportedClientms_Beacon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& kPracModeUnknown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& IDataTypeCodeToKingCodeDic_Easy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& IDataTypeCodeToKingCodeDic_Hard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Record() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Record() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Record() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIDataFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPractMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportToBeacon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> static T Record(uintptr_t dataType, bool status) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4F2167C))(0, dataType, status);
	}
	template <typename T = void> static T Record_1(uintptr_t dataType, bool status) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4F22160))(0, dataType, status);
	}
	template <typename T = void> static T Record_2(uintptr_t dataType, bool status) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4F225FC))(0, dataType, status);
	}
	template <typename T = bool> static T IsIDataFinish() {
		return ((T (*)(void *))(Il2CppBase() + 0x4F21944))(0);
	}
	template <typename T = void> static T Send(int32_t stepId, bool status) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x4F21BB8))(0, stepId, status);
	}
	template <typename T = int32_t> static T GetPractMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4F21A94))(0);
	}
	template <typename T = int64_t> static T GetDuration() {
		return ((T (*)(void *))(Il2CppBase() + 0x4F22704))(0);
	}
	template <typename T = void> static T ReportToBeacon(int32_t stepId, bool status) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x4F222C8))(0, stepId, status);
	}

};

}
