#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetScreenShotPictureCoroutinecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetScreenShotPictureCoroutine>c__Iterator0"));
	}

	template <typename T = Il2CppRect> T& rect__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& texture() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& act() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetScreenShotPictureCoroutinecIterator0*))(Il2CppBase() + 0x447804C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GetScreenShotPictureCoroutinecIterator0*))(Il2CppBase() + 0x447827C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetScreenShotPictureCoroutinecIterator0*))(Il2CppBase() + 0x4478284))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetScreenShotPictureCoroutinecIterator0*))(Il2CppBase() + 0x447828C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetScreenShotPictureCoroutinecIterator0*))(Il2CppBase() + 0x44782A0))(this);
	}

};

}
