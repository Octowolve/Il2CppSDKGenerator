#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TGPACallbackClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TGPACallbackClass"));
	}


	template <typename T = void> T notifySystemInfo(Il2CppString* json) {
		return ((T (*)(TGPACallbackClass*, Il2CppString*))(Il2CppBase() + 0x22C9A7C))(this, json);
	}

};

}
