#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.TGPA {

class ITGPACallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.TGPA", "ITGPACallback"));
	}


	template <typename T = void> T notifySystemInfo(Il2CppString* json) {
		return ((T (*)(ITGPACallback*, Il2CppString*))(Il2CppBase() + 0x0))(this, json);
	}

};

}
