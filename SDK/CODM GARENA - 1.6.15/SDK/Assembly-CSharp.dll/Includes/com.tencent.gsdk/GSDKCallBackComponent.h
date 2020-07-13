#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace com.tencent.gsdk {

class GSDKCallBackComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "com.tencent.gsdk", "GSDKCallBackComponent"));
	}


	template <typename T = void> T GSDKStartCallback(Il2CppString* config) {
		return ((T (*)(GSDKCallBackComponent*, Il2CppString*))(Il2CppBase() + 0x2D325F4))(this, config);
	}
	template <typename T = void> T GSDKQualityCallback(Il2CppString* qualityString) {
		return ((T (*)(GSDKCallBackComponent*, Il2CppString*))(Il2CppBase() + 0x2D32ADC))(this, qualityString);
	}
	template <typename T = void> T GSDKLogCallback(Il2CppString* logString) {
		return ((T (*)(GSDKCallBackComponent*, Il2CppString*))(Il2CppBase() + 0x2D32C18))(this, logString);
	}

};

}
