#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class NetworkResourcesDownloader1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "NetworkResourcesDownloader`1"));
	}

	template <typename T = void*> T& m_BrokenUrlSet() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& m_MemoryDic() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& m_DownloadTaskList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDownloadTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllMemoryData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Download() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUrlValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFromStorage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveToStorage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHighPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Tick() {
		return ((T (*)(NetworkResourcesDownloader1*))(Il2CppBase() + 0x48DB4A4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NetworkResourcesDownloader1*))(Il2CppBase() + 0x48DBE38))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(NetworkResourcesDownloader1*))(Il2CppBase() + 0x48DBEFC))(this);
	}
	template <typename T = void> T ResetDownloadTask() {
		return ((T (*)(NetworkResourcesDownloader1*))(Il2CppBase() + 0x48DBFA8))(this);
	}
	template <typename T = void> T ResetAllMemoryData() {
		return ((T (*)(NetworkResourcesDownloader1*))(Il2CppBase() + 0x48DC0C0))(this);
	}
	template <typename T = uintptr_t> T LocalLoad(Il2CppString* url, bool cache) {
		return ((T (*)(NetworkResourcesDownloader1*, Il2CppString*, bool))(Il2CppBase() + 0x48DC16C))(this, url, cache);
	}
	template <typename T = uintptr_t> T Download(Il2CppString* url, void* callback, bool memoryCache, bool checkBrokenUrl, bool changeable, int32_t timeout, int32_t attemptLimit) {
		return ((T (*)(NetworkResourcesDownloader1*, Il2CppString*, void*, bool, bool, bool, int32_t, int32_t))(Il2CppBase() + 0x48DC55C))(this, url, callback, memoryCache, checkBrokenUrl, changeable, timeout, attemptLimit);
	}
	template <typename T = bool> static T IsUrlValid(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x48DCD0C))(0, url);
	}
	template <typename T = void> T CancelDownload(Il2CppString* url, void* callback) {
		return ((T (*)(NetworkResourcesDownloader1*, Il2CppString*, void*))(Il2CppBase() + 0x48DCFB8))(this, url, callback);
	}
	template <typename T = bool> T HasCache(Il2CppString* url) {
		return ((T (*)(NetworkResourcesDownloader1*, Il2CppString*))(Il2CppBase() + 0x48DD22C))(this, url);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T LoadFromStorage(Il2CppString* url) {
		return ((T (*)(NetworkResourcesDownloader1*, Il2CppString*))(Il2CppBase() + 0x48DD478))(this, url);
	}
	template <typename T = void> T SaveToStorage(Il2CppString* url, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(NetworkResourcesDownloader1*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x48DD7D4))(this, url, bytes);
	}
	template <typename T = uintptr_t> T ConvertBytesToDelivery(Il2CppArray<uintptr_t>* bytes, Il2CppString* url) {
		return ((T (*)(NetworkResourcesDownloader1*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(this, bytes, url);
	}
	template <typename T = bool> T IsHighPriority() {
		return ((T (*)(NetworkResourcesDownloader1*))(Il2CppBase() + 0x48DDB5C))(this);
	}

};

}
