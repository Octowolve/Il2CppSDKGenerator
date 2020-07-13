#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicDownloadMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicDownloadMgr"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& _dicDownQuestState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& _dicDownloadProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<int32_t>*>*> static T& _dicGenericDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> static T& _listGenericDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& DOWNLOADPROGRESS_ZERO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMapIsCouldUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSupportDynamicDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMapIsCouldUseByQuestId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMapInDownloadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMapIsDownloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuestKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDownloadCompOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuestIdByMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMapState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelButNeedCheckDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelAllDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginAllDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckQuestIsDownloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> static T InitDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x4182FC4))(0);
	}
	template <typename T = bool> static T CheckMapIsCouldUse(uint32_t mapid) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x41835D0))(0, mapid);
	}
	template <typename T = bool> static T IsSupportDynamicDownload() {
		return ((T (*)(void *))(Il2CppBase() + 0x4183CF8))(0);
	}
	template <typename T = bool> static T CheckMapIsCouldUseByQuestId(int32_t questId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4183DFC))(0, questId);
	}
	template <typename T = bool> static T IsMapInDownloadList(uint32_t octMapId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4184034))(0, octMapId);
	}
	template <typename T = bool> static T CheckMapIsDownloading(uint32_t mapid) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4184320))(0, mapid);
	}
	template <typename T = int32_t> static T GetQuestKey(uint32_t mapid) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4183844))(0, mapid);
	}
	template <typename T = bool> static T IsDownloadCompOK() {
		return ((T (*)(void *))(Il2CppBase() + 0x41845EC))(0);
	}
	template <typename T = int32_t> static T GetQuestIdByMapId(uint32_t mapid) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x41846F0))(0, mapid);
	}
	template <typename T = bool> static T CheckMapState(int32_t Questkey, uintptr_t* totalSize, uintptr_t* wholeSize) {
		return ((T (*)(void *, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4183B1C))(0, Questkey, totalSize, wholeSize);
	}
	template <typename T = void> static T BeginDownload(int32_t Questkey, uintptr_t progressCallback, uintptr_t finishedCallBack) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41848A0))(0, Questkey, progressCallback, finishedCallBack);
	}
	template <typename T = void> static T DownloadFinished(int32_t Questkey) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4184B50))(0, Questkey);
	}
	template <typename T = void> static T CancelDownload(int32_t Questkey) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4184C94))(0, Questkey);
	}
	template <typename T = void> static T CancelButNeedCheckDownload(int32_t Questkey) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4184F2C))(0, Questkey);
	}
	template <typename T = void> static T CancelAllDownload() {
		return ((T (*)(void *))(Il2CppBase() + 0x41851C4))(0);
	}
	template <typename T = void> static T BeginAllDownload(uintptr_t progressCallback, uintptr_t finishedCallBack) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4185684))(0, progressCallback, finishedCallBack);
	}
	template <typename T = void> static T SetDownloadProgress(int32_t questId, uint64_t nowSize, uint64_t totaleSize) {
		return ((T (*)(void *, int32_t, uint64_t, uint64_t))(Il2CppBase() + 0x4185B24))(0, questId, nowSize, totaleSize);
	}
	template <typename T = uintptr_t> static T GetDownloadProgress(int32_t questId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4185DA8))(0, questId);
	}
	template <typename T = bool> static T CheckQuestIsDownloading(int32_t questId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4185FB4))(0, questId);
	}

};

}
