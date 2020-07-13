#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceBtnBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceBtnBase"));
	}

	template <typename T = uintptr_t> T& MicBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& MAX_DELTA_Y() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
