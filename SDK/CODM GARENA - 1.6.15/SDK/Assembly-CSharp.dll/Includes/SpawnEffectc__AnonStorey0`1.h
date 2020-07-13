#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnEffectcAnonStorey01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SpawnEffect>c__AnonStorey0`1"));
	}

	template <typename T = float> T& expectedTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& cb() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppQuaternion> T& rot() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T m__0(int32_t id, uintptr_t _) {
		return ((T (*)(SpawnEffectcAnonStorey01*, int32_t, uintptr_t))(Il2CppBase() + 0x48D9A3C))(this, id, _);
	}

};

}
