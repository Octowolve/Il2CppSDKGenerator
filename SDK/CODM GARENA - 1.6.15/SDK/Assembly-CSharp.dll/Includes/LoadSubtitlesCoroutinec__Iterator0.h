#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadSubtitlesCoroutinecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadSubtitlesCoroutine>c__Iterator0"));
	}

	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& www__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& subtitleData__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fileLocation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& filePath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
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
		return ((T (*)(LoadSubtitlesCoroutinecIterator0*))(Il2CppBase() + 0x41202B0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadSubtitlesCoroutinecIterator0*))(Il2CppBase() + 0x4120698))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadSubtitlesCoroutinecIterator0*))(Il2CppBase() + 0x41206A0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadSubtitlesCoroutinecIterator0*))(Il2CppBase() + 0x41206A8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadSubtitlesCoroutinecIterator0*))(Il2CppBase() + 0x41206BC))(this);
	}

};

}
