#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPAPcIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPAP>c__Iterator2"));
	}

	template <typename T = float> T& putWeaponAnimLen__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& getPAPAnimLen__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetPAPcIterator2*))(Il2CppBase() + 0x461F448))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GetPAPcIterator2*))(Il2CppBase() + 0x461FB80))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetPAPcIterator2*))(Il2CppBase() + 0x461FB88))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetPAPcIterator2*))(Il2CppBase() + 0x461FB90))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetPAPcIterator2*))(Il2CppBase() + 0x461FBA4))(this);
	}

};

}
