#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadSceneAsynccIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadSceneAsync>c__Iterator2"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& scenePathList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& sceneCount__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& abExs__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& sceneName__2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& asyncOp__2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& abEx__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int16_t> T& sceneBundleIndex__3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& errno__3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& param__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& setActiveSceneOnLoaded() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& setVisible() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = void*> T& onFail() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& onSceneLoadStatus() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& onProgress() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& autoActivation() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& onSucess() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadSceneAsynccIterator2*))(Il2CppBase() + 0x2B775B8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadSceneAsynccIterator2*))(Il2CppBase() + 0x2B78104))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadSceneAsynccIterator2*))(Il2CppBase() + 0x2B7810C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadSceneAsynccIterator2*))(Il2CppBase() + 0x2B78114))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadSceneAsynccIterator2*))(Il2CppBase() + 0x2B78128))(this);
	}

};

}
