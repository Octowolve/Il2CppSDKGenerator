#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReportHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReportHandle"));
	}

	template <typename T = uintptr_t> static T& openFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tlog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Debug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T Tlog(uintptr_t openSource, int32_t newContentBookmark, int32_t newContentIsClickGO, int32_t bpIsClickGO) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3CA2ACC))(0, openSource, newContentBookmark, newContentIsClickGO, bpIsClickGO);
	}
	template <typename T = void> static T Debug(uintptr_t openSource, int32_t newContentBookmark, int32_t newContentIsClickGO, int32_t bpIsClickGO) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3CAFC4C))(0, openSource, newContentBookmark, newContentIsClickGO, bpIsClickGO);
	}

};

}
