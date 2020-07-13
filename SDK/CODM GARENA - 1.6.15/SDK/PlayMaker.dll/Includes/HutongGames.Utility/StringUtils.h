#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.Utility {

class StringUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.Utility", "StringUtils"));
	}


	template <typename T = Il2CppString*> static T IncrementStringCounter(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2F23BCC))(0, s);
	}

};

}
