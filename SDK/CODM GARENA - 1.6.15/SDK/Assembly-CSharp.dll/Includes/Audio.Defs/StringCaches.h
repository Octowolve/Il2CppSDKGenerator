#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Defs {

class StringCaches
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Defs", "StringCaches"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& msPhyMatStringNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
