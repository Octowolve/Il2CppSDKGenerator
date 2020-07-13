#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Globalization.Unicode {

class CodePointIndexer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Globalization.Unicode", "CodePointIndexer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ranges() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& TotalCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& defaultIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& defaultCP() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T ToIndex(int32_t cp) {
		return ((T (*)(CodePointIndexer*, int32_t))(Il2CppBase() + 0x3F8B7C0))(this, cp);
	}

};

}
