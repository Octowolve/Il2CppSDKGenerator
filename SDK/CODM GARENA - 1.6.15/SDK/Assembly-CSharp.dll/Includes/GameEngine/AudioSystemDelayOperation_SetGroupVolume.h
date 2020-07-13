#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AudioSystemDelayOperationSetGroupVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AudioSystemDelayOperation_SetGroupVolume"));
	}

	template <typename T = uintptr_t> T& m_iGroup() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_fVol() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Do() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Do() {
		return ((T (*)(AudioSystemDelayOperationSetGroupVolume*))(Il2CppBase() + 0x35EAD00))(this);
	}

};

}
