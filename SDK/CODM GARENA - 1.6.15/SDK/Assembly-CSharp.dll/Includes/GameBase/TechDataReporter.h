#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TechDataReporter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TechDataReporter"));
	}

	template <typename T = Il2CppString*> static T& TechDataDirective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_sender() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_reportGuid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& AppEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GameEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SpawnPoolEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ShaderVariantEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KeyAppBootGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KeyReportUnixTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KeyReportIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KeyGameGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KeyScenario() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& CanEnableReporter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Pref_EnableReporter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_enableReporter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_reportIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_inGameReportIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_lastReportTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& GameReportDurationThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySendTechDataReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAppBootTechData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGameTechData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeginGameTechData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportInGameTechData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportEndGameTechData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportExitGameTechData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveShaderVariantReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillHeavyGameReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillCoreGameReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillCommonGameReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillSpawnPoolReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillShaderVariantReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_Sender() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27BD1E0))(this);
	}
	template <typename T = void> T set_EnableReporter(bool value) {
		return ((T (*)(TechDataReporter*, bool))(Il2CppBase() + 0x27BD1E8))(this, value);
	}
	template <typename T = bool> T get_EnableReporter() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27BD288))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27BD354))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T CreateReportData() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27BD4FC))(this);
	}
	template <typename T = void> T TrySendTechDataReport(Il2CppString* name, Il2CppDictionary<Il2CppString*, Il2CppString*>* eventList) {
		return ((T (*)(TechDataReporter*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x27BD7AC))(this, name, eventList);
	}
	template <typename T = void> T ReportAppBootTechData() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27BD98C))(this);
	}
	template <typename T = void> T EnterGame() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27BF8E8))(this);
	}
	template <typename T = void> T ReportGameTechData() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27BFA44))(this);
	}
	template <typename T = void> T ReportBeginGameTechData() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27BFB30))(this);
	}
	template <typename T = void> T ReportInGameTechData() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27BFE18))(this);
	}
	template <typename T = void> T ReportEndGameTechData() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27C31C0))(this);
	}
	template <typename T = void> T ReportExitGameTechData() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27C349C))(this);
	}
	template <typename T = void> T SaveShaderVariantReportData() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27C3FC0))(this);
	}
	template <typename T = void> T ExitGame() {
		return ((T (*)(TechDataReporter*))(Il2CppBase() + 0x27C48CC))(this);
	}
	template <typename T = void> T FillHeavyGameReportData(Il2CppDictionary<Il2CppString*, Il2CppString*>* newReportData) {
		return ((T (*)(TechDataReporter*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x27C1EF8))(this, newReportData);
	}
	template <typename T = void> T FillCoreGameReportData(Il2CppDictionary<Il2CppString*, Il2CppString*>* newReportData) {
		return ((T (*)(TechDataReporter*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x27C0120))(this, newReportData);
	}
	template <typename T = void> T FillCommonGameReportData(Il2CppDictionary<Il2CppString*, Il2CppString*>* newReportData) {
		return ((T (*)(TechDataReporter*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x27C02A8))(this, newReportData);
	}
	template <typename T = bool> T FillSpawnPoolReportData(Il2CppDictionary<Il2CppString*, Il2CppString*>* newReportData) {
		return ((T (*)(TechDataReporter*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x27C3834))(this, newReportData);
	}
	template <typename T = bool> T FillShaderVariantReportData(Il2CppDictionary<Il2CppString*, Il2CppString*>* newReportData) {
		return ((T (*)(TechDataReporter*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x27C39BC))(this, newReportData);
	}

};

}
