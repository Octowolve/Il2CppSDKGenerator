#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLogReportDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TLogReportDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& cachLog() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogDataNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCachToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogNtf_Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogFtueNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T TlogDataNtf(uintptr_t Type, Il2CppList<Il2CppString*>* data) {
		return ((T (*)(TLogReportDataAgent*, uintptr_t, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x495D5B0))(this, Type, data);
	}
	template <typename T = void> T TlogNtf(Il2CppString* structName, Il2CppList<Il2CppString*>* data) {
		return ((T (*)(TLogReportDataAgent*, Il2CppString*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x495DBA0))(this, structName, data);
	}
	template <typename T = void> T SendCachToServer() {
		return ((T (*)(TLogReportDataAgent*))(Il2CppBase() + 0x495E304))(this);
	}
	template <typename T = void> T TlogNtf_Click() {
		return ((T (*)(TLogReportDataAgent*))(Il2CppBase() + 0x495E49C))(this);
	}
	template <typename T = void> T TLogFtueNtf(uintptr_t type) {
		return ((T (*)(TLogReportDataAgent*, uintptr_t))(Il2CppBase() + 0x495E918))(this, type);
	}
	template <typename T = bool> T SendToServer(uintptr_t msg) {
		return ((T (*)(TLogReportDataAgent*, uintptr_t))(Il2CppBase() + 0x495D9FC))(this, msg);
	}
	template <typename T = bool> static T TlogNtfm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x495EEC4))(0, it);
	}
	template <typename T = bool> static T TLogFtueNtfm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x495F004))(0, it);
	}

};

}
