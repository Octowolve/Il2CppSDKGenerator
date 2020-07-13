#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BRLotteryMachinePoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BRLotteryMachinePoint"));
	}

	template <typename T = uintptr_t> T& LotteryType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LotterySettings() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& bShowGizmo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_color() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& CoolDownTimeSeconds() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& GroupID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& VehicleSpawnPoint() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsStart() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BRLotteryMachinePoint*))(Il2CppBase() + 0x418ACE0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRLotteryMachinePoint*))(Il2CppBase() + 0x418AD90))(this);
	}
	template <typename T = int32_t> T GetItemIdx(int32_t itemId) {
		return ((T (*)(BRLotteryMachinePoint*, int32_t))(Il2CppBase() + 0x418AE40))(this, itemId);
	}
	template <typename T = int32_t> T GetItemId(int32_t idx) {
		return ((T (*)(BRLotteryMachinePoint*, int32_t))(Il2CppBase() + 0x418AF98))(this, idx);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRLotteryMachinePoint*))(Il2CppBase() + 0x418B12C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRLotteryMachinePoint*))(Il2CppBase() + 0x418B134))(this);
	}

};

}
