#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AK.Wwise {

class Switch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AK.Wwise", "Switch"));
	}


	template <typename T = void> T SetValue(uintptr_t gameObject) {
		return ((T (*)(Switch*, uintptr_t))(Il2CppBase() + 0x4A20250))(this, gameObject);
	}

};

}
