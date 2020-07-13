#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BlackMarketBaseMonitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BlackMarketBaseMonitor"));
	}

	template <typename T = uintptr_t> T& Actor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BMActorManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ActorInfoList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ModelRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& WorldSpaceBottomLeft() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& WorldSpaceTopRight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_LocalSpaceBottomLeft() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& LocalSpaceTopRight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildWorldModelTranformMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnActorList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInsideArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMonitorUnloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterMonitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BlackMarketBaseMonitor*))(Il2CppBase() + 0x24B656C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BlackMarketBaseMonitor*))(Il2CppBase() + 0x24B661C))(this);
	}
	template <typename T = uintptr_t> T BuildWorldModelTranformMatrix() {
		return ((T (*)(BlackMarketBaseMonitor*))(Il2CppBase() + 0x24B6960))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BlackMarketBaseMonitor*, float))(Il2CppBase() + 0x24B6C9C))(this, dt);
	}
	template <typename T = void> T UpdatePawnActorList() {
		return ((T (*)(BlackMarketBaseMonitor*))(Il2CppBase() + 0x24B6D70))(this);
	}
	template <typename T = bool> T CheckInsideArea(Il2CppVector3 worldPos) {
		return ((T (*)(BlackMarketBaseMonitor*, Il2CppVector3))(Il2CppBase() + 0x24B6E08))(this, worldPos);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BlackMarketBaseMonitor*))(Il2CppBase() + 0x24B6F14))(this);
	}
	template <typename T = void> T OnMonitorUnloaded() {
		return ((T (*)(BlackMarketBaseMonitor*))(Il2CppBase() + 0x24B6FC4))(this);
	}
	template <typename T = void> T UnregisterMonitor() {
		return ((T (*)(BlackMarketBaseMonitor*))(Il2CppBase() + 0x24B7068))(this);
	}

};

}
