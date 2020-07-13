#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InterAssetDownloadCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InterAssetDownloadCallBack"));
	}

	template <typename T = uintptr_t> T& _moduleDownloadMgr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetDownResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetDownProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnAssetDownResult(int32_t assetID, bool success) {
		return ((T (*)(InterAssetDownloadCallBack*, int32_t, bool))(Il2CppBase() + 0x317E414))(this, assetID, success);
	}
	template <typename T = void> T OnAssetDownProgress(int32_t assetID, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(InterAssetDownloadCallBack*, int32_t, uint32_t, uint32_t))(Il2CppBase() + 0x317E4C8))(this, assetID, nowSize, totalSize);
	}
	template <typename T = void> T Init(uintptr_t moduleDownloadMgr) {
		return ((T (*)(InterAssetDownloadCallBack*, uintptr_t))(Il2CppBase() + 0x317E584))(this, moduleDownloadMgr);
	}

};

}
