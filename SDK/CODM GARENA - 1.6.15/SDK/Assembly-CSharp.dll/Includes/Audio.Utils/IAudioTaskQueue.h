#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class IAudioTaskQueue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "IAudioTaskQueue"));
	}


	template <typename T = void> T ProcessCmd() {
		return ((T (*)(IAudioTaskQueue*))(Il2CppBase() + 0x0))(this);
	}

};

}
