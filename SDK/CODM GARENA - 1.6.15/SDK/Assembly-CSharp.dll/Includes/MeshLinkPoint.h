#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MeshLinkPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MeshLinkPoint"));
	}

	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& posAdjust() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPositon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T AdjustPositon() {
		return ((T (*)(MeshLinkPoint*))(Il2CppBase() + 0x41CE8E0))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(MeshLinkPoint*))(Il2CppBase() + 0x41CEA38))(this);
	}

};

}
