#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PoolObjectTranformBake
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PoolObjectTranformBake"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_BakeDatas() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Bake() {
		return ((T (*)(PoolObjectTranformBake*))(Il2CppBase() + 0x170A198))(this);
	}
	template <typename T = void> T Recover() {
		return ((T (*)(PoolObjectTranformBake*))(Il2CppBase() + 0x170A3AC))(this);
	}

};

}
