#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IConcurrentMemoryPoolObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IConcurrentMemoryPoolObject"));
	}


	template <typename T = void> T OnRecycle() {
		return ((T (*)(IConcurrentMemoryPoolObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(IConcurrentMemoryPoolObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(IConcurrentMemoryPoolObject*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
