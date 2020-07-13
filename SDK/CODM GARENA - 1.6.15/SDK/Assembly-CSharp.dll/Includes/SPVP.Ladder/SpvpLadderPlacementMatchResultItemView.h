#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderPlacementMatchResultItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderPlacementMatchResultItemView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppVector3> T get_ScaleNormal() {
		return ((T (*)(SpvpLadderPlacementMatchResultItemView*))(Il2CppBase() + 0x4301FCC))(this);
	}
	template <typename T = Il2CppVector3> T get_ScaleHighlight() {
		return ((T (*)(SpvpLadderPlacementMatchResultItemView*))(Il2CppBase() + 0x4302008))(this);
	}

};

}
