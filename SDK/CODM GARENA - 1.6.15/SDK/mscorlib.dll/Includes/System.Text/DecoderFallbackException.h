#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class DecoderFallbackException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "DecoderFallbackException"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bytes_unknown() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x3C);
	}


};

}
