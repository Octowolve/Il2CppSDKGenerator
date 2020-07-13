#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class NameTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "NameTable"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buckets() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& size() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Add(Il2CppArray<uintptr_t>* key, int32_t start, int32_t len) {
		return ((T (*)(NameTable*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2AA043C))(this, key, start, len);
	}
	template <typename T = Il2CppString*> T Add_1(Il2CppString* key) {
		return ((T (*)(NameTable*, Il2CppString*))(Il2CppBase() + 0x2AA09A8))(this, key);
	}
	template <typename T = Il2CppString*> T Get(Il2CppString* value) {
		return ((T (*)(NameTable*, Il2CppString*))(Il2CppBase() + 0x2AA0BF8))(this, value);
	}
	template <typename T = Il2CppString*> T AddEntry(Il2CppString* str, int32_t hash) {
		return ((T (*)(NameTable*, Il2CppString*, int32_t))(Il2CppBase() + 0x2AA0750))(this, str, hash);
	}
	template <typename T = bool> static T StrEqArray(Il2CppString* str, Il2CppArray<uintptr_t>* str2, int32_t start) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2AA06B0))(0, str, str2, start);
	}

};

}
