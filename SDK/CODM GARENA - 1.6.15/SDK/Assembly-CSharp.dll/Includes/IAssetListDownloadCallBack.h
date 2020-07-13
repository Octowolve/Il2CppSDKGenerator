#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetListDownloadCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetListDownloadCallBack"));
	}


	template <typename T = void> T OnAssetListDownResult(uint32_t taskId, Il2CppList<int32_t>* assetIDs, bool success) {
		return ((T (*)(IAssetListDownloadCallBack*, uint32_t, Il2CppList<int32_t>*, bool))(Il2CppBase() + 0x0))(this, taskId, assetIDs, success);
	}
	template <typename T = void> T OnAssetListDownProgress(uint32_t taskId, Il2CppList<int32_t>* assetIDs, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(IAssetListDownloadCallBack*, uint32_t, Il2CppList<int32_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x0))(this, taskId, assetIDs, nowSize, totalSize);
	}

};

}
