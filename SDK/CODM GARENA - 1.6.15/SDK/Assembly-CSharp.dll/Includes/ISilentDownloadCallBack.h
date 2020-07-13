#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISilentDownloadCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISilentDownloadCallBack"));
	}


	template <typename T = void> T OnSilentDownResult(bool success) {
		return ((T (*)(ISilentDownloadCallBack*, bool))(Il2CppBase() + 0x0))(this, success);
	}
	template <typename T = void> T OnSilentDownProgress(uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(ISilentDownloadCallBack*, uint32_t, uint32_t))(Il2CppBase() + 0x0))(this, nowSize, totalSize);
	}

};

}
