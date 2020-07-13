#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChipMachineMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChipMachineMgr"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ChipMachineList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChipMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllChipMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnBRChipMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBRChipMachineStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyChipMachineReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyChipMachineSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetChipMachine(uint32_t UID) {
		return ((T (*)(BRChipMachineMgr*, uint32_t))(Il2CppBase() + 0x24FDB44))(this, UID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllChipMachine() {
		return ((T (*)(BRChipMachineMgr*))(Il2CppBase() + 0x24FDCBC))(this);
	}
	template <typename T = void> T SpawnBRChipMachine(uintptr_t info) {
		return ((T (*)(BRChipMachineMgr*, uintptr_t))(Il2CppBase() + 0x24FDD5C))(this, info);
	}
	template <typename T = void> T OnSyncBRChipMachineStat(uintptr_t info) {
		return ((T (*)(BRChipMachineMgr*, uintptr_t))(Il2CppBase() + 0x24FE230))(this, info);
	}
	template <typename T = void> T OnNotifyChipMachineReady() {
		return ((T (*)(BRChipMachineMgr*))(Il2CppBase() + 0x24FE408))(this);
	}
	template <typename T = void> T OnNotifyChipMachineSound() {
		return ((T (*)(BRChipMachineMgr*))(Il2CppBase() + 0x24FE630))(this);
	}

};

}
