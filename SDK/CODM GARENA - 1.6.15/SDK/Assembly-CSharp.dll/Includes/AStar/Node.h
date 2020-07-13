#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AStar {

class Node
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AStar", "Node"));
	}

	template <typename T = uintptr_t> T& Coord() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Parent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& G() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& H() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T CompareTo(uintptr_t o) {
		return ((T (*)(Node*, uintptr_t))(Il2CppBase() + 0x22D64A8))(this, o);
	}

};

}
