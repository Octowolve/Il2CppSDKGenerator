#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IMemoryPoolObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IMemoryPoolObject"));
	}


	template <typename T = void> T OnRecycle() {
		return ((T (*)(IMemoryPoolObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(IMemoryPoolObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(IMemoryPoolObject*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
