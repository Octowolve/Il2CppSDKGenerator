#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractFrameCoroutinecIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ExtractFrameCoroutine>c__Iterator2"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& result__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& frame__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& timeSeconds() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& seekTimeMs__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& timeThresholdMs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& preSeekFrameCount__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& accurateSeek() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& currFc__3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& iterations__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& maxIterations__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(ExtractFrameCoroutinecIterator2*))(Il2CppBase() + 0x411F480))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ExtractFrameCoroutinecIterator2*))(Il2CppBase() + 0x411FF8C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ExtractFrameCoroutinecIterator2*))(Il2CppBase() + 0x411FF94))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ExtractFrameCoroutinecIterator2*))(Il2CppBase() + 0x411FF9C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ExtractFrameCoroutinecIterator2*))(Il2CppBase() + 0x411FFB0))(this);
	}

};

}
