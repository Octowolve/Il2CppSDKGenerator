#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class RecvedUDPDataEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "RecvedUDPDataEventHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(RecvedUDPDataEventHandler*))(Il2CppBase() + 0x4436ECC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(RecvedUDPDataEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4436F5C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RecvedUDPDataEventHandler*, uintptr_t))(Il2CppBase() + 0x4436F88))(this, result);
	}

};

}
