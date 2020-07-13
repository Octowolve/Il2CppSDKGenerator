#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Log
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Log"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& LogBuffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_LogStream() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PathLogDir() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PathLogFile() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_bAllowSuppression() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_bSuppressedFlags() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SuppressedFlagNames() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_bShutedDown() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_PushLock() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& kBytesBufferLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kCharBufferLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BytesBuffer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_WriteAllLock() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& m_CachedProcessID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& ms_FrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& IsLowDisk() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> static T& m_HasException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& m_DeviceName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> T& StatsWantLogTotalCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& StatsWantLogTotalLength() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& StatsDidLogTotalCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& StatsDidLogTotalLength() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> static T& __DEBUG_DERECTIVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& __UNITY_EDITOR_DERECTIVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStackTraceLogType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFileStream() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteOldLogs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLoggerCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadLoggerCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWriteThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterLogCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Push() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteAllCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogPushToBytesBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InternalLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_InternalLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_InternalLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_InternalLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_InternalLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalLogCore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEditorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProcessID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatTimeStampForLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSuppressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SuppressAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLogFolderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintIdentifyLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDeviceName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDeviceName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUserLogType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneralLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GeneralLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GeneralLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_GeneralLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_GeneralLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_GeneralLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EditorLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogAndFlush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PublishLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PublishLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_PublishLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_PublishLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_PublishLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_PublishLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneralWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GeneralWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GeneralWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_GeneralWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_GeneralWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_GeneralWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EditorWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneralError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GeneralError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GeneralError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_GeneralError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_GeneralError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_GeneralError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EditorError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UserLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UserLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_UserLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_UserLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_UserLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_UserLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StuckInMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlowLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraceLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EditorException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Assert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EditorAssert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneralLogYellow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForgiveHer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RedDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}

	template <typename T = void> T Init() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A3B28))(this);
	}
	template <typename T = void> T SetStackTraceLogType() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A3D8C))(this);
	}
	template <typename T = void> T InitFileStream() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A44A0))(this);
	}
	template <typename T = void> T DeleteOldLogs(Il2CppString* dir, int32_t reservedCount) {
		return ((T (*)(Log*, Il2CppString*, int32_t))(Il2CppBase() + 0x24A6038))(this, dir, reservedCount);
	}
	template <typename T = void> T InitLoggerCfg() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A40AC))(this);
	}
	template <typename T = void> T ReloadLoggerCfg() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A64A4))(this);
	}
	template <typename T = void> T InitWriteThread() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A4900))(this);
	}
	template <typename T = void> T WriteThread() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A6584))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A69B8))(this);
	}
	template <typename T = void> T RegisterLogCallback(bool addHandler) {
		return ((T (*)(Log*, bool))(Il2CppBase() + 0x24A4A74))(this, addHandler);
	}
	template <typename T = void> T Push(Il2CppString* str) {
		return ((T (*)(Log*, Il2CppString*))(Il2CppBase() + 0x24A6E10))(this, str);
	}
	template <typename T = void> T WriteAllCache(bool flush) {
		return ((T (*)(Log*, bool))(Il2CppBase() + 0x24A6764))(this, flush);
	}
	template <typename T = int32_t> T LogPushToBytesBuffer(Il2CppString* str) {
		return ((T (*)(Log*, Il2CppString*))(Il2CppBase() + 0x24A6F84))(this, str);
	}
	template <typename T = void> T LogCallback(Il2CppString* strLog, Il2CppString* stackTrace, uintptr_t type) {
		return ((T (*)(Log*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24A7170))(this, strLog, stackTrace, type);
	}
	template <typename T = void> T InternalLog(uintptr_t type, Il2CppString* msg) {
		return ((T (*)(Log*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x24A7E84))(this, type, msg);
	}
	template <typename T = void> T InternalLog_1(uintptr_t type, Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(Log*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24A87E8))(this, type, msg, arg0);
	}
	template <typename T = void> T InternalLog_2(uintptr_t type, Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(Log*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24A89F4))(this, type, msg, arg0);
	}
	template <typename T = void> T InternalLog_3(uintptr_t type, Il2CppString* msg, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(Log*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24A8C1C))(this, type, msg, arg0, arg1);
	}
	template <typename T = void> T InternalLog_4(uintptr_t type, Il2CppString* msg, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(Log*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24A8E38))(this, type, msg, arg0, arg1, arg2);
	}
	template <typename T = void> T InternalLog_5(uintptr_t type, Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(Log*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24A905C))(this, type, msg, args);
	}
	template <typename T = void> T InternalLogCore(uintptr_t type, Il2CppString* msg) {
		return ((T (*)(Log*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x24A8490))(this, type, msg);
	}
	template <typename T = Il2CppString*> static T AddEditorInfo(uintptr_t type, Il2CppString* str) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x24A8198))(0, type, str);
	}
	template <typename T = int32_t> static T GetProcessID() {
		return ((T (*)(void *))(Il2CppBase() + 0x24A927C))(0);
	}
	template <typename T = Il2CppString*> static T GetTimeStamp(bool isDisplayDay) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x24A6C70))(0, isDisplayDay);
	}
	template <typename T = Il2CppString*> static T FormatTimeStampForLog(bool isDisplayDay) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x24A9448))(0, isDisplayDay);
	}
	template <typename T = void> static T UpdateFrameCount(int32_t f) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x24A95B8))(0, f);
	}
	template <typename T = bool> T IsSuppressed(uintptr_t type) {
		return ((T (*)(Log*, uintptr_t))(Il2CppBase() + 0x24A8070))(this, type);
	}
	template <typename T = void> T SuppressAll(bool supp) {
		return ((T (*)(Log*, bool))(Il2CppBase() + 0x24A96C0))(this, supp);
	}
	template <typename T = bool> T get_IsLowDisk() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A7BE8))(this);
	}
	template <typename T = void> T set_IsLowDisk(bool value) {
		return ((T (*)(Log*, bool))(Il2CppBase() + 0x24A98BC))(this, value);
	}
	template <typename T = Il2CppString*> static T GetLogFolderPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x24A5DC4))(0);
	}
	template <typename T = void> T PrintIdentifyLog() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24A4BAC))(this);
	}
	template <typename T = void> static T ReportException(Il2CppString* log, Il2CppString* exception, Il2CppString* stacktrace) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x24A7BF0))(0, log, exception, stacktrace);
	}
	template <typename T = void> static T ReportLog(uintptr_t ls, Il2CppString* exceptionInfo) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x24A9B44))(0, ls, exceptionInfo);
	}
	template <typename T = void> static T InitDeviceName() {
		return ((T (*)(void *))(Il2CppBase() + 0x24A5BA0))(0);
	}
	template <typename T = void> static T SetDeviceName(Il2CppString* deviceName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x24A9CF4))(0, deviceName);
	}
	template <typename T = uintptr_t> static T GetUserLogType(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x24A9DFC))(0, msg);
	}
	template <typename T = int32_t> T get_StatsWantLogTotalCount() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24AA088))(this);
	}
	template <typename T = void> T set_StatsWantLogTotalCount(int32_t value) {
		return ((T (*)(Log*, int32_t))(Il2CppBase() + 0x24AA090))(this, value);
	}
	template <typename T = int32_t> T get_StatsWantLogTotalLength() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24AA098))(this);
	}
	template <typename T = void> T set_StatsWantLogTotalLength(int32_t value) {
		return ((T (*)(Log*, int32_t))(Il2CppBase() + 0x24AA0A0))(this, value);
	}
	template <typename T = int32_t> T get_StatsDidLogTotalCount() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24AA0A8))(this);
	}
	template <typename T = void> T set_StatsDidLogTotalCount(int32_t value) {
		return ((T (*)(Log*, int32_t))(Il2CppBase() + 0x24AA0B0))(this, value);
	}
	template <typename T = int32_t> T get_StatsDidLogTotalLength() {
		return ((T (*)(Log*))(Il2CppBase() + 0x24AA0B8))(this);
	}
	template <typename T = void> T set_StatsDidLogTotalLength(int32_t value) {
		return ((T (*)(Log*, int32_t))(Il2CppBase() + 0x24AA0C0))(this, value);
	}
	template <typename T = void> static T GeneralLog(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x24AA0C8))(0, msg);
	}
	template <typename T = void> static T GeneralLog_1(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24AA1F0))(0, msg, arg0);
	}
	template <typename T = void> static T GeneralLog_2(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24AA330))(0, msg, arg0);
	}
	template <typename T = void> static T GeneralLog_3(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24AA470))(0, msg, arg0, arg1);
	}
	template <typename T = void> static T GeneralLog_4(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24AA5C0))(0, msg, arg0, arg1, arg2);
	}
	template <typename T = void> static T GeneralLog_5(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24AA718))(0, msg, args);
	}
	template <typename T = void> static T EditorLog(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24AA858))(0, msg, args);
	}
	template <typename T = void> static T LogAndFlush(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24AA928))(0, msg, args);
	}
	template <typename T = void> static T PublishLog(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2450F40))(0, msg);
	}
	template <typename T = void> static T PublishLog_1(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24A98C4))(0, msg, arg0);
	}
	template <typename T = void> static T PublishLog_2(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x244C660))(0, msg, arg0);
	}
	template <typename T = void> static T PublishLog_3(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x246BCF0))(0, msg, arg0, arg1);
	}
	template <typename T = void> static T PublishLog_4(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24AAA54))(0, msg, arg0, arg1, arg2);
	}
	template <typename T = void> static T PublishLog_5(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24A9A04))(0, msg, args);
	}
	template <typename T = void> static T GeneralWarning(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x24971D0))(0, msg);
	}
	template <typename T = void> static T GeneralWarning_1(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24AABAC))(0, msg, arg0);
	}
	template <typename T = void> static T GeneralWarning_2(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24AACEC))(0, msg, arg0);
	}
	template <typename T = void> static T GeneralWarning_3(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24AAE2C))(0, msg, arg0, arg1);
	}
	template <typename T = void> static T GeneralWarning_4(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24AAF7C))(0, msg, arg0, arg1, arg2);
	}
	template <typename T = void> static T GeneralWarning_5(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24AB0D4))(0, msg, paras);
	}
	template <typename T = void> static T EditorWarning(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24AB214))(0, msg, paras);
	}
	template <typename T = void> static T GeneralError(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x244D170))(0, msg);
	}
	template <typename T = void> static T GeneralError_1(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x244D030))(0, msg, arg0);
	}
	template <typename T = void> static T GeneralError_2(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2458BD0))(0, msg, arg0);
	}
	template <typename T = void> static T GeneralError_3(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24A2D30))(0, msg, arg0, arg1);
	}
	template <typename T = void> static T GeneralError_4(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24AB314))(0, msg, arg0, arg1, arg2);
	}
	template <typename T = void> static T GeneralError_5(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2469F5C))(0, msg, args);
	}
	template <typename T = void> static T EditorError(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24AB46C))(0, msg, args);
	}
	template <typename T = void> static T UserLog(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x24AB56C))(0, msg);
	}
	template <typename T = void> static T UserLog_1(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24AB6A0))(0, msg, arg0);
	}
	template <typename T = void> static T UserLog_2(Il2CppString* msg, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24AB7EC))(0, msg, arg0);
	}
	template <typename T = void> static T UserLog_3(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24AB938))(0, msg, arg0, arg1);
	}
	template <typename T = void> static T UserLog_4(Il2CppString* msg, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24ABA94))(0, msg, arg0, arg1, arg2);
	}
	template <typename T = void> static T UserLog_5(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24ABBF8))(0, msg, args);
	}
	template <typename T = void> static T StuckInMatch(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24ABD44))(0, msg, args);
	}
	template <typename T = void> static T FlowLog(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24ABE84))(0, msg, args);
	}
	template <typename T = void> static T TraceLog(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24ABFC4))(0, msg, args);
	}
	template <typename T = void> static T EditorException(uintptr_t exp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24AC104))(0, exp);
	}
	template <typename T = void> static T Assert(bool expression, Il2CppString* msg) {
		return ((T (*)(void *, bool, Il2CppString*))(Il2CppBase() + 0x24AC218))(0, expression, msg);
	}
	template <typename T = void> static T EditorAssert(bool expression, Il2CppString* msg) {
		return ((T (*)(void *, bool, Il2CppString*))(Il2CppBase() + 0x24AC414))(0, expression, msg);
	}
	template <typename T = void> static T GeneralLogYellow(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24AC514))(0, msg, args);
	}
	template <typename T = void> static T ForgiveHer(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24AC5E4))(0, msg, args);
	}
	template <typename T = void> static T RedDebug(Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24AC6B4))(0, msg, args);
	}
	template <typename T = int32_t> static T DeleteOldLogsm__0(uintptr_t f1, uintptr_t f2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x24AC848))(0, f1, f2);
	}

};

}
