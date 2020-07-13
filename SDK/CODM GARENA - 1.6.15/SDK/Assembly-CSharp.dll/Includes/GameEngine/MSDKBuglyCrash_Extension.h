#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MSDKBuglyCrashExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MSDKBuglyCrash_Extension"));
	}


	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T MyLogCallbackExtrasHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x2711194))(0);
	}

};

}
