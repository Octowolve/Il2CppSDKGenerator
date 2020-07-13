#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IModuleDownloadCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IModuleDownloadCallBack"));
	}


	template <typename T = void> T OnModuleDownResult(Il2CppString* moduleName, uintptr_t resQuality, uintptr_t moduleState) {
		return ((T (*)(IModuleDownloadCallBack*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, moduleName, resQuality, moduleState);
	}
	template <typename T = void> T OnModuleDownProgress(Il2CppString* moduleName, uintptr_t resQuality, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(IModuleDownloadCallBack*, Il2CppString*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x0))(this, moduleName, resQuality, nowSize, totalSize);
	}

};

}
