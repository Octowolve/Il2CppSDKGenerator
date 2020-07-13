#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAsyncResFoldercIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadAsync_ResFolder>c__Iterator2"));
	}

	template <typename T = uintptr_t> T& obj__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& req__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& assetId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& generation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $this() {
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
		return ((T (*)(LoadAsyncResFoldercIterator2*))(Il2CppBase() + 0x2B96BB4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadAsyncResFoldercIterator2*))(Il2CppBase() + 0x2B96CFC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadAsyncResFoldercIterator2*))(Il2CppBase() + 0x2B96D04))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadAsyncResFoldercIterator2*))(Il2CppBase() + 0x2B96D0C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadAsyncResFoldercIterator2*))(Il2CppBase() + 0x2B96D20))(this);
	}

};

}
