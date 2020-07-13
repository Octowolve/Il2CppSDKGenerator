#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TLog {

class TLogClickStatistics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TLog", "TLogClickStatistics"));
	}

	template <typename T = int32_t> static T& m_Length() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_ClickCountList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_CachedReportList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Acc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportAndReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T Acc(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x466ED18))(0, index);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetReportAndReset() {
		return ((T (*)(void *))(Il2CppBase() + 0x466EF40))(0);
	}

};

}
