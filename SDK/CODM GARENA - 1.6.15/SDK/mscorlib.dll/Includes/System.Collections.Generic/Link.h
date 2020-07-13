#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class Link
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "Link"));
	}

	template <typename T = int32_t> T& HashCode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Next() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
