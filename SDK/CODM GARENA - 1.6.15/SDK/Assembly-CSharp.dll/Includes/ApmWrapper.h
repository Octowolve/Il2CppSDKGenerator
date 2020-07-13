#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApmWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApmWrapper"));
	}

	template <typename T = bool> static T& defaultEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& isEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& isInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = int32_t> static T& kTagStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kTagEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_Quality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& m_FrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> T& m_Time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> static T& kCapacityConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kRecommendConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& tgpaCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& lastLoadResourceType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& kCategory_Regular() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kCategory_Stuck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_CurrentCategory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& kKey_Position() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kKey_Rotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kKey_View() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kValue_1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kValue_3PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kKey_PhyState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kKey_WeaponState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kKey_ExtraMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ApmWrapper*))(Il2CppBase() + 0x22C6AA4))(this);
	}
	template <typename T = void> T CheckStartService() {
		return ((T (*)(ApmWrapper*))(Il2CppBase() + 0x22C6CE4))(this);
	}
	template <typename T = void> static T SetTapmQualityAndFrameRate(int32_t quality, int32_t frameRate) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x22C6F80))(0, quality, frameRate);
	}
	template <typename T = void> static T SetQuality(uintptr_t level) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22C7040))(0, level);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ApmWrapper*, float))(Il2CppBase() + 0x22C7278))(this, deltaTime);
	}
	template <typename T = void> static T SafeMarkLoadLevel(Il2CppString* level) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22C75DC))(0, level);
	}
	template <typename T = void> static T SafeMarkLoadLevelCompleted() {
		return ((T (*)(void *))(Il2CppBase() + 0x22C774C))(0);
	}
	template <typename T = void> static T SafeMarkLevelFinished() {
		return ((T (*)(void *))(Il2CppBase() + 0x22C78C4))(0);
	}
	template <typename T = void> static T BeginTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22C79C0))(0, tag);
	}
	template <typename T = void> static T EndTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22C7AC8))(0, tag);
	}
	template <typename T = void> static T SetUserId(Il2CppString* openID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22C7BD0))(0, openID);
	}
	template <typename T = void> static T SetTargetFrameRate(int32_t frameRate) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x22C8184))(0, frameRate);
	}
	template <typename T = void> static T UpdateLatency(int32_t delayInMs) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x22C747C))(0, delayInMs);
	}
	template <typename T = int32_t> static T GetMainThreadID() {
		return ((T (*)(void *))(Il2CppBase() + 0x22C7F74))(0);
	}
	template <typename T = int32_t> static T CheckDeviceCapacityLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x22C8300))(0);
	}
	template <typename T = int32_t> static T CheckDeviceRecommendLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x22C83BC))(0);
	}
	template <typename T = void> static T RegisterFrequencyChange(Il2CppString* openid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22C7DE4))(0, openid);
	}
	template <typename T = void> static T RequestNativeResource(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22C6E1C))(0, type);
	}
	template <typename T = void> static T CancelRequestNativeResource() {
		return ((T (*)(void *))(Il2CppBase() + 0x22C8480))(0);
	}
	template <typename T = void> static T SendTGPAEvent(int32_t key, Il2CppString* value, bool dontLog) {
		return ((T (*)(void *, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x22C71A4))(0, key, value, dontLog);
	}
	template <typename T = void> static T SendTGPAEvent_1(Il2CppString* key, Il2CppString* value, bool dontLog) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x22C85E4))(0, key, value, dontLog);
	}
	template <typename T = void> T BeginReportStuck() {
		return ((T (*)(ApmWrapper*))(Il2CppBase() + 0x22C86B8))(this);
	}
	template <typename T = void> T BeginReportRegualrly() {
		return ((T (*)(ApmWrapper*))(Il2CppBase() + 0x22C8794))(this);
	}
	template <typename T = void> T ReportExtraMsg(Il2CppString* msg) {
		return ((T (*)(ApmWrapper*, Il2CppString*))(Il2CppBase() + 0x22C8870))(this, msg);
	}
	template <typename T = void> T EndReport() {
		return ((T (*)(ApmWrapper*))(Il2CppBase() + 0x22C89A8))(this);
	}
	template <typename T = void> T ReportPersonView(bool is1P) {
		return ((T (*)(ApmWrapper*, bool))(Il2CppBase() + 0x22C8FF4))(this, is1P);
	}
	template <typename T = void> T ReportPosAndRot(Il2CppVector3 pos, Il2CppVector3 rot) {
		return ((T (*)(ApmWrapper*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x22C914C))(this, pos, rot);
	}
	template <typename T = void> T ReportPhyState(uintptr_t state) {
		return ((T (*)(ApmWrapper*, uintptr_t))(Il2CppBase() + 0x22C9378))(this, state);
	}
	template <typename T = void> T ReportWeaponState(uintptr_t state) {
		return ((T (*)(ApmWrapper*, uintptr_t))(Il2CppBase() + 0x22C94FC))(this, state);
	}
	template <typename T = void> T ReportSysStatus() {
		return ((T (*)(ApmWrapper*))(Il2CppBase() + 0x22C8AC4))(this);
	}
	template <typename T = void> T ReportVector3(Il2CppString* key, Il2CppVector3 v3f) {
		return ((T (*)(ApmWrapper*, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x22C9234))(this, key, v3f);
	}
	template <typename T = void> T ReportSysDescString(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(ApmWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x22C9680))(this, key, value);
	}
	template <typename T = void> T ReportSysDescInt(Il2CppString* key, int32_t value) {
		return ((T (*)(ApmWrapper*, Il2CppString*, int32_t))(Il2CppBase() + 0x22C97A4))(this, key, value);
	}
	template <typename T = void> T ReportSysDescFloat(Il2CppString* key, float value) {
		return ((T (*)(ApmWrapper*, Il2CppString*, float))(Il2CppBase() + 0x22C98C8))(this, key, value);
	}

};

}
