#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameSkillID
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameSkillID"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& InfectGameSkillID_Shield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& InfectGameSkillID_SentryGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& InfectGameSkillID_Silence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
