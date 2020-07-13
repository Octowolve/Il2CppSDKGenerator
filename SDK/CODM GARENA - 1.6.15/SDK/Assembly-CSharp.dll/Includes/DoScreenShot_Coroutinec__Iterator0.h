#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoScreenShotCoroutinecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DoScreenShot_Coroutine>c__Iterator0"));
	}

	template <typename T = Il2CppRect> T& rect() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& tex__0() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& showCaptureInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(DoScreenShotCoroutinecIterator0*))(Il2CppBase() + 0x3C035BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DoScreenShotCoroutinecIterator0*))(Il2CppBase() + 0x3C03764))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DoScreenShotCoroutinecIterator0*))(Il2CppBase() + 0x3C0376C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DoScreenShotCoroutinecIterator0*))(Il2CppBase() + 0x3C03774))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DoScreenShotCoroutinecIterator0*))(Il2CppBase() + 0x3C03788))(this);
	}

};

}
