#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AK.Wwise {

class RTPC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AK.Wwise", "RTPC"));
	}


	template <typename T = void> T SetValue(uintptr_t gameObject, float value) {
		return ((T (*)(RTPC*, uintptr_t, float))(Il2CppBase() + 0x4A1FFBC))(this, gameObject, value);
	}
	template <typename T = void> T SetGlobalValue(float value) {
		return ((T (*)(RTPC*, float))(Il2CppBase() + 0x4A200A0))(this, value);
	}

};

}
