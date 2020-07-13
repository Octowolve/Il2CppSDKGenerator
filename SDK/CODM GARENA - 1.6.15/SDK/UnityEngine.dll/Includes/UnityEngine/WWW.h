#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WWW
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WWW"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Dispose() {
		return ((T (*)(WWW*))(Il2CppBase() + 0x4D41660))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(WWW*))(Il2CppBase() + 0x4D41708))(this);
	}
	template <typename T = void> T DestroyWWW(bool cancel) {
		return ((T (*)(WWW*, bool))(Il2CppBase() + 0x4D41668))(this, cancel);
	}
	template <typename T = void> T InitWWW(Il2CppString* url, Il2CppArray<uintptr_t>* postData, Il2CppArray<uintptr_t>* iHeaders) {
		return ((T (*)(WWW*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D415B0))(this, url, postData, iHeaders);
	}
	template <typename T = Il2CppString*> static T UnEscapeURL(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4D41770))(0, s);
	}
	template <typename T = Il2CppString*> static T UnEscapeURL_1(Il2CppString* s, uintptr_t e) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D41820))(0, s, e);
	}
	template <typename T = uintptr_t> static T get_DefaultEncoding() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D41A38))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_bytes() {
		return ((T (*)(WWW*))(Il2CppBase() + 0x4D41AD8))(this);
	}
	template <typename T = Il2CppString*> T get_error() {
		return ((T (*)(WWW*))(Il2CppBase() + 0x4D41B70))(this);
	}
	template <typename T = bool> T get_isDone() {
		return ((T (*)(WWW*))(Il2CppBase() + 0x4D41C08))(this);
	}

};

}
