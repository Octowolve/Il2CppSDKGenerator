#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class TextElementEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "TextElementEnumerator"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& elementindex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& startpos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& str() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& element() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(TextElementEnumerator*))(Il2CppBase() + 0x3FDD428))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(TextElementEnumerator*))(Il2CppBase() + 0x3FDD56C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TextElementEnumerator*))(Il2CppBase() + 0x3FDD5F0))(this);
	}

};

}
