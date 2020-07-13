#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class SearchOption
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "SearchOption"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& TopDirectoryOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AllDirectories() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
