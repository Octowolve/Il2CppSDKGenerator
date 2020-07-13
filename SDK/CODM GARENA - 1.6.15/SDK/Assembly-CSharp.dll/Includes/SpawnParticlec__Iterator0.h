#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnParticlecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SpawnParticle>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(SpawnParticlecIterator0*))(Il2CppBase() + 0x2496948))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SpawnParticlecIterator0*))(Il2CppBase() + 0x2496958))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SpawnParticlecIterator0*))(Il2CppBase() + 0x2496960))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SpawnParticlecIterator0*))(Il2CppBase() + 0x2496968))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SpawnParticlecIterator0*))(Il2CppBase() + 0x249696C))(this);
	}

};

}
