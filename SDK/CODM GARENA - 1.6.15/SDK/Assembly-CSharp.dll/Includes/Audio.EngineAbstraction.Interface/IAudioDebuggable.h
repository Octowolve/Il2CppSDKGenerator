#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.Interface {

class IAudioDebuggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.Interface", "IAudioDebuggable"));
	}


	template <typename T = void> T FillInDebugString(uintptr_t sbInput) {
		return ((T (*)(IAudioDebuggable*, uintptr_t))(Il2CppBase() + 0x0))(this, sbInput);
	}

};

}
