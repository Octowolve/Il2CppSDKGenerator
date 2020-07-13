#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class SearchPattern
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "SearchPattern"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& WildcardChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& InvalidChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
