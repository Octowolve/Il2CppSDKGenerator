#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SquadMemberAvatarBindData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SquadMemberAvatarBindData"));
	}

	template <typename T = int32_t> T& PositionInRoom() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
