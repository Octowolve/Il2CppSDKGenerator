#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PersonalInfoParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PersonalInfoParam"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& secondTab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& thirdTab() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
