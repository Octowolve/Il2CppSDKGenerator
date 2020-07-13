#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SpaceShowCoverSpot {

class ShowCoverSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SpaceShowCoverSpot", "ShowCoverSpot"));
	}

	template <typename T = Il2CppList<Il2CppVector3>*> T& pointList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(ShowCoverSpot*))(Il2CppBase() + 0x390D7CC))(this);
	}

};

}
