#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class IAudioTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "IAudioTask"));
	}


	template <typename T = uintptr_t> T DoOperation() {
		return ((T (*)(IAudioTask*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(IAudioTask*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_DebugDescription() {
		return ((T (*)(IAudioTask*))(Il2CppBase() + 0x0))(this);
	}

};

}
