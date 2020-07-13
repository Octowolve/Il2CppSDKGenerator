#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRoomOBMatchOneCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRoomOBMatchOneCell"));
	}

	template <typename T = uintptr_t> T& RankLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TeamName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Kill() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetInfo(uintptr_t teamData) {
		return ((T (*)(BRSettlementRoomOBMatchOneCell*, uintptr_t))(Il2CppBase() + 0x3C2DC6C))(this, teamData);
	}

};

}
