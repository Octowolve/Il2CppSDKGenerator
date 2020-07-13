#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class PropertyNameTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "PropertyNameTable"));
	}

	template <typename T = int32_t> static T& HashCodeRandomizer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _entries() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _mask() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Get(Il2CppArray<uintptr_t>* key, int32_t start, int32_t length) {
		return ((T (*)(PropertyNameTable*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4DF2D98))(this, key, start, length);
	}
	template <typename T = Il2CppString*> T Add(Il2CppString* key) {
		return ((T (*)(PropertyNameTable*, Il2CppString*))(Il2CppBase() + 0x4DF30E8))(this, key);
	}
	template <typename T = Il2CppString*> T AddEntry(Il2CppString* str, int32_t hashCode) {
		return ((T (*)(PropertyNameTable*, Il2CppString*, int32_t))(Il2CppBase() + 0x4DF3340))(this, str, hashCode);
	}
	template <typename T = void> T Grow() {
		return ((T (*)(PropertyNameTable*))(Il2CppBase() + 0x4DF34C0))(this);
	}
	template <typename T = bool> static T TextEquals(Il2CppString* str1, Il2CppArray<uintptr_t>* str2, int32_t str2Start, int32_t str2Length) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4DF3020))(0, str1, str2, str2Start, str2Length);
	}

};

}
