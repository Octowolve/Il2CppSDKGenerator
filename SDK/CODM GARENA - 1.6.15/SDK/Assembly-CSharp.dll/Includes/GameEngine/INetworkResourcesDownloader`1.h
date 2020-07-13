#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class INetworkResourcesDownloader1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "INetworkResourcesDownloader`1"));
	}


	template <typename T = uintptr_t> T LocalLoad(Il2CppString* url, bool cache) {
		return ((T (*)(INetworkResourcesDownloader1*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, url, cache);
	}
	template <typename T = uintptr_t> T Download(Il2CppString* url, void* callback, bool memoryCache, bool checkBrokenUrl, bool changeable, int32_t timeout, int32_t attemptLimit) {
		return ((T (*)(INetworkResourcesDownloader1*, Il2CppString*, void*, bool, bool, bool, int32_t, int32_t))(Il2CppBase() + 0x0))(this, url, callback, memoryCache, checkBrokenUrl, changeable, timeout, attemptLimit);
	}
	template <typename T = void> T CancelDownload(Il2CppString* url, void* callback) {
		return ((T (*)(INetworkResourcesDownloader1*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, url, callback);
	}
	template <typename T = bool> T HasCache(Il2CppString* url) {
		return ((T (*)(INetworkResourcesDownloader1*, Il2CppString*))(Il2CppBase() + 0x0))(this, url);
	}

};

}
