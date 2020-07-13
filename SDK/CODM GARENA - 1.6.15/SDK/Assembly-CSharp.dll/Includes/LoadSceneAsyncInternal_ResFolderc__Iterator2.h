#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadSceneAsyncInternalResFoldercIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadSceneAsyncInternal_ResFolder>c__Iterator2"));
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
	template <typename T = uintptr_t> T& asyncOp__2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& param__2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& setActiveSceneOnLoaded() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& setVisible() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = void*> T& onFail() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& onSceneLoadStatus() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& onProgress() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& autoActivation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& onSucess() {
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
		return ((T (*)(LoadSceneAsyncInternalResFoldercIterator2*))(Il2CppBase() + 0x3BFC77C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadSceneAsyncInternalResFoldercIterator2*))(Il2CppBase() + 0x3BFCAC4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadSceneAsyncInternalResFoldercIterator2*))(Il2CppBase() + 0x3BFCACC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadSceneAsyncInternalResFoldercIterator2*))(Il2CppBase() + 0x3BFCAD4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadSceneAsyncInternalResFoldercIterator2*))(Il2CppBase() + 0x3BFCAE8))(this);
	}

};

}
