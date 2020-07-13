#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.Interface {

class IOneShotSoundEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.Interface", "IOneShotSoundEmitter"));
	}


	template <typename T = void> T PlayOneShot(Il2CppString* strEventName, Il2CppVector3 vecPos, bool byPassRangeCheck) {
		return ((T (*)(IOneShotSoundEmitter*, Il2CppString*, Il2CppVector3, bool))(Il2CppBase() + 0x0))(this, strEventName, vecPos, byPassRangeCheck);
	}
	template <typename T = void> T ClearCache() {
		return ((T (*)(IOneShotSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}

};

}
