#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Action
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System", "Action"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(Action*))(Il2CppBase() + 0x4EC27F8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(Action*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EC2888))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Action*, uintptr_t))(Il2CppBase() + 0x4EC28B4))(this, result);
	}

};

}
