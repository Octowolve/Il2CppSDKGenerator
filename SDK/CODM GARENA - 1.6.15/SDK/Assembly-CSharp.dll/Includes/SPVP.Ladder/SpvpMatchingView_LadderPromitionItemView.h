#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpMatchingViewLadderPromitionItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpMatchingView_LadderPromitionItemView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppVector3> T get_ScaleNormal() {
		return ((T (*)(SpvpMatchingViewLadderPromitionItemView*))(Il2CppBase() + 0x4309F24))(this);
	}
	template <typename T = Il2CppVector3> T get_ScaleHighlight() {
		return ((T (*)(SpvpMatchingViewLadderPromitionItemView*))(Il2CppBase() + 0x4309F60))(this);
	}

};

}
