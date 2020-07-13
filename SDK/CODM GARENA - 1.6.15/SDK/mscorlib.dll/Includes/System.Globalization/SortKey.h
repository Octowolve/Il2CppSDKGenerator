#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class SortKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "SortKey"));
	}

	template <typename T = Il2CppString*> T& source() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& options() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& lcid() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> static T Compare(uintptr_t sortkey1, uintptr_t sortkey2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FDC5F8))(0, sortkey1, sortkey2);
	}
	template <typename T = Il2CppString*> T get_OriginalString() {
		return ((T (*)(SortKey*))(Il2CppBase() + 0x3FDC864))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_KeyData() {
		return ((T (*)(SortKey*))(Il2CppBase() + 0x3FDC86C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(SortKey*, uintptr_t))(Il2CppBase() + 0x3FDC874))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SortKey*))(Il2CppBase() + 0x3FDC968))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SortKey*))(Il2CppBase() + 0x3FDC9F4))(this);
	}

};

}
