#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class ObjectPoolHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "ObjectPoolHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t obj) {
		return ((T (*)(ObjectPoolHandler*, uintptr_t))(Il2CppBase() + 0x476A680))(this, obj);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t obj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ObjectPoolHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x476A718))(this, obj, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ObjectPoolHandler*, uintptr_t))(Il2CppBase() + 0x476A744))(this, result);
	}

};

}
