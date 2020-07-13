#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnLoadSceneAsyncInternalcIterator3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnLoadSceneAsyncInternal>c__Iterator3"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& scenePathList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& sceneCount__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& sceneName__2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& unloadOp__3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onFinish() {
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
		return ((T (*)(UnLoadSceneAsyncInternalcIterator3*))(Il2CppBase() + 0x3BFCB7C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(UnLoadSceneAsyncInternalcIterator3*))(Il2CppBase() + 0x3BFCD30))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UnLoadSceneAsyncInternalcIterator3*))(Il2CppBase() + 0x3BFCD38))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UnLoadSceneAsyncInternalcIterator3*))(Il2CppBase() + 0x3BFCD40))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UnLoadSceneAsyncInternalcIterator3*))(Il2CppBase() + 0x3BFCD54))(this);
	}

};

}
