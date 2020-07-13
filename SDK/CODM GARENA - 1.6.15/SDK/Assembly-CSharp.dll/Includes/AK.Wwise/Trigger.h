#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AK.Wwise {

class Trigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AK.Wwise", "Trigger"));
	}


	template <typename T = void> T Post(uintptr_t gameObject) {
		return ((T (*)(Trigger*, uintptr_t))(Il2CppBase() + 0x4A2033C))(this, gameObject);
	}

};

}
