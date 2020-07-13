#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO.Compression {

class CompressionMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.IO.Compression", "CompressionMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Decompress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Compress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
