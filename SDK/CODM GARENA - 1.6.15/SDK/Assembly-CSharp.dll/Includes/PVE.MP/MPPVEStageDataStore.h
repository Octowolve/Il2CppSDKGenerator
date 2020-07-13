#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPPVEStageDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPPVEStageDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& allTeammateInfos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& offLineTeammateInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& stageID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& instanceID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& instanceInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& totalScore() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& kLastStageID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SavePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SavePlayerInfo() {
		return ((T (*)(MPPVEStageDataStore*))(Il2CppBase() + 0x460F5A4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(MPPVEStageDataStore*))(Il2CppBase() + 0x4624E48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(MPPVEStageDataStore*))(Il2CppBase() + 0x4624F50))(this);
	}

};

}
