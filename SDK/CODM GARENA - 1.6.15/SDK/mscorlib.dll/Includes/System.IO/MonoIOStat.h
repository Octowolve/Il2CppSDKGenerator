#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class MonoIOStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "MonoIOStat"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Attributes() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int64_t> T& Length() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& CreationTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& LastAccessTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& LastWriteTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
