#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Action1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Action`1"));
	}


	template <typename T = void> T Invoke(uintptr_t obj) {
		return ((T (*)(Action1*, uintptr_t))(Il2CppBase() + 0x519DB98))(this, obj);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t obj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Action1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x519DC30))(this, obj, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Action1*, uintptr_t))(Il2CppBase() + 0x519DC5C))(this, result);
	}

};

}
