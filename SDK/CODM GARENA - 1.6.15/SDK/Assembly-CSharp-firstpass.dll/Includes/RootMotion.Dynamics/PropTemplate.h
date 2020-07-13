#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class PropTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "PropTemplate"));
	}


	template <typename T = void> T OnStart() {
		return ((T (*)(PropTemplate*))(Il2CppBase() + 0x38BD944))(this);
	}
	template <typename T = void> T OnPickUp(uintptr_t propRoot) {
		return ((T (*)(PropTemplate*, uintptr_t))(Il2CppBase() + 0x38BD948))(this, propRoot);
	}
	template <typename T = void> T OnDrop() {
		return ((T (*)(PropTemplate*))(Il2CppBase() + 0x38BD94C))(this);
	}

};

}
