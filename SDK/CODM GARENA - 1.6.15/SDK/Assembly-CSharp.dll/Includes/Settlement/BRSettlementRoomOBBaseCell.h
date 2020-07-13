#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRoomOBBaseCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRoomOBBaseCell"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& rankSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankSpritesColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetRankSpritesColor(int32_t teamId) {
		return ((T (*)(BRSettlementRoomOBBaseCell*, int32_t))(Il2CppBase() + 0x3C2ADCC))(this, teamId);
	}

};

}
