#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetDownloadCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetDownloadCallBack"));
	}


	template <typename T = void> T OnAssetDownResult(int32_t assetID, bool success) {
		return ((T (*)(IAssetDownloadCallBack*, int32_t, bool))(Il2CppBase() + 0x0))(this, assetID, success);
	}
	template <typename T = void> T OnAssetDownProgress(int32_t assetID, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(IAssetDownloadCallBack*, int32_t, uint32_t, uint32_t))(Il2CppBase() + 0x0))(this, assetID, nowSize, totalSize);
	}

};

}
