#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AStar {

class Coord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AStar", "Coord"));
	}

	template <typename T = int32_t> T& x() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& y() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
