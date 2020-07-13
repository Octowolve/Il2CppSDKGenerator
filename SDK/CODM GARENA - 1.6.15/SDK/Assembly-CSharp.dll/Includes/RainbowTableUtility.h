#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RainbowTableUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RainbowTableUtility"));
	}


	template <typename T = Il2CppString*> static T GetFilePathEncrypt(Il2CppString* srcPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3DB9F08))(0, srcPath);
	}

};

}
