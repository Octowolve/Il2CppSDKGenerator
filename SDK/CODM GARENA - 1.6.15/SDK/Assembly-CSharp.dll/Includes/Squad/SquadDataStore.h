#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_SquadDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_CurrentSelectedSquadIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSquadDataById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSelectedSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetSquadDataById(int32_t squadId) {
		return ((T (*)(SquadDataStore*, int32_t))(Il2CppBase() + 0x3935A2C))(this, squadId);
	}
	template <typename T = uintptr_t> T GetCurrentSelectedSquad() {
		return ((T (*)(SquadDataStore*))(Il2CppBase() + 0x3935BA4))(this);
	}

};

}
