#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpListenerPrefixCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpListenerPrefixCollection"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& prefixes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& listener() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(HttpListenerPrefixCollection*))(Il2CppBase() + 0x42DA2B4))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(HttpListenerPrefixCollection*))(Il2CppBase() + 0x42DA374))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(HttpListenerPrefixCollection*))(Il2CppBase() + 0x42DA40C))(this);
	}
	template <typename T = void> T Add(Il2CppString* uriPrefix) {
		return ((T (*)(HttpListenerPrefixCollection*, Il2CppString*))(Il2CppBase() + 0x42DA414))(this, uriPrefix);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(HttpListenerPrefixCollection*))(Il2CppBase() + 0x42DA56C))(this);
	}
	template <typename T = bool> T Contains(Il2CppString* uriPrefix) {
		return ((T (*)(HttpListenerPrefixCollection*, Il2CppString*))(Il2CppBase() + 0x42DA66C))(this, uriPrefix);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t offset) {
		return ((T (*)(HttpListenerPrefixCollection*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42DA71C))(this, array, offset);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(HttpListenerPrefixCollection*))(Il2CppBase() + 0x42C6FAC))(this);
	}
	template <typename T = bool> T Remove(Il2CppString* uriPrefix) {
		return ((T (*)(HttpListenerPrefixCollection*, Il2CppString*))(Il2CppBase() + 0x42DA7D4))(this, uriPrefix);
	}

};

}
