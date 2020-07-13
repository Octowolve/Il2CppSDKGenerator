#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadSceneAsynccIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadSceneAsync>c__Iterator1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& scenePathList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& onFail() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& loadFromAB__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& onSucess() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& onProgress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& onSceneLoadStatus() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& autoActivation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& setActiveSceneOnLoaded() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& setVisible() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = uintptr_t> T& cor__0() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadSceneAsynccIterator1*))(Il2CppBase() + 0x3BFC0AC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadSceneAsynccIterator1*))(Il2CppBase() + 0x3BFC6C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadSceneAsynccIterator1*))(Il2CppBase() + 0x3BFC6CC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadSceneAsynccIterator1*))(Il2CppBase() + 0x3BFC6D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadSceneAsynccIterator1*))(Il2CppBase() + 0x3BFC6E8))(this);
	}

};

}
