#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class PVPLadderHelpWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "PVPLadderHelpWindow"));
	}

	template <typename T = uintptr_t> T& RankTipsTable() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
