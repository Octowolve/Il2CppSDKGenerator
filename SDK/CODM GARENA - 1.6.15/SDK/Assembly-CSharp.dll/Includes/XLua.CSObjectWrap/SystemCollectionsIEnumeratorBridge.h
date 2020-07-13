#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua.CSObjectWrap {

class SystemCollectionsIEnumeratorBridge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua.CSObjectWrap", "SystemCollectionsIEnumeratorBridge"));
	}


	template <typename T = uintptr_t> static T __Create(int32_t reference, uintptr_t luaenv) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0xC22CBC))(0, reference, luaenv);
	}
	template <typename T = bool> T System_Collections_IEnumerator_MoveNext() {
		return ((T (*)(SystemCollectionsIEnumeratorBridge*))(Il2CppBase() + 0xC22D58))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SystemCollectionsIEnumeratorBridge*))(Il2CppBase() + 0xC23A70))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SystemCollectionsIEnumeratorBridge*))(Il2CppBase() + 0xC23CE4))(this);
	}

};

}
