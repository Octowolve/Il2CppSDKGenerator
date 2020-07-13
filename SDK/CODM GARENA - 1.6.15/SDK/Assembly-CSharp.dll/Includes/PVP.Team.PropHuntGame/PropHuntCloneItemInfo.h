#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntCloneItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntCloneItemInfo"));
	}

	template <typename T = uint32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& HP() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& Scale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
