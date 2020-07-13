#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LogUploaderAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LogUploaderAssist"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearClientLogReportRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClearClientLogReportResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T ClearClientLogReportRequest() {
		return ((T (*)(LogUploaderAssist*))(Il2CppBase() + 0x36B5E94))(this);
	}
	template <typename T = void> T OnClearClientLogReportResponse(uintptr_t message, uintptr_t* err) {
		return ((T (*)(LogUploaderAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x36B5F94))(this, message, err);
	}

};

}
