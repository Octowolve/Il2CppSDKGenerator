#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SearchedWayPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SearchedWayPoint"));
	}

	template <typename T = uintptr_t> T& Point() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Parent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& G() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& F() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& H() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneratePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_ID() {
		return ((T (*)(SearchedWayPoint*))(Il2CppBase() + 0x44ED90C))(this);
	}
	template <typename T = uintptr_t> static T GeneratePoint(uintptr_t ptFrom, uintptr_t ptTo, int32_t G) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x44ED220))(0, ptFrom, ptTo, G);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SearchedWayPoint*))(Il2CppBase() + 0x44EE070))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(SearchedWayPoint*))(Il2CppBase() + 0x44EE3BC))(this);
	}

};

}
