#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class IGCloudSDKLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "IGCloudSDKLog"));
	}


	template <typename T = void> T SetLogLevel(Il2CppString* sdkName, uintptr_t logLevel) {
		return ((T (*)(IGCloudSDKLog*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, sdkName, logLevel);
	}
	template <typename T = void> T SetAllLogLevel(uintptr_t logLevel) {
		return ((T (*)(IGCloudSDKLog*, uintptr_t))(Il2CppBase() + 0x0))(this, logLevel);
	}

};

}
