#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IAudioSystemDelayOperations
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IAudioSystemDelayOperations"));
	}


	template <typename T = void> T Do() {
		return ((T (*)(IAudioSystemDelayOperations*))(Il2CppBase() + 0x0))(this);
	}

};

}
