#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMatineeSequencecAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMatineeSequence>c__AnonStorey5"));
	}

	template <typename T = Il2CppString*> T& sequenceName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetMatineeSequencecAnonStorey5*, uintptr_t))(Il2CppBase() + 0x19C9424))(this, e);
	}

};

}
