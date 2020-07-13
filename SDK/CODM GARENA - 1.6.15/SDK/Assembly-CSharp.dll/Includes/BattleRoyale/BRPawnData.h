#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRPawnData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRPawnData"));
	}

	template <typename T = uintptr_t> T& m_SyncRespawnMsg() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_PlayerInfo() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_CurDependVehicle() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_VisionRangeIndex() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> static T& IrrelevantScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& IrrelevantHadObjScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppVector3> static T& RelevantScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DependRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaitProcessWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecyclePawnVirtualSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInstanceObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelInstanceObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyIrrelevantObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTimers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplicationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBaseData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T get_Pawn() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC1574))(this);
	}
	template <typename T = uintptr_t> T get_SyncRespawnMsg() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC157C))(this);
	}
	template <typename T = uintptr_t> T get_PlayerInfo() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC1584))(this);
	}
	template <typename T = void> T OnReSpawnPlayer(uintptr_t msg) {
		return ((T (*)(BRPawnData*, uintptr_t))(Il2CppBase() + 0x1AC158C))(this, msg);
	}
	template <typename T = bool> T DependRelevant() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC1888))(this);
	}
	template <typename T = void> T SetWaitProcessWeight() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC1C14))(this);
	}
	template <typename T = bool> T IsRelevant() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC2040))(this);
	}
	template <typename T = void> T RecyclePawnVirtualSound() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC2310))(this);
	}
	template <typename T = bool> T AddInstanceObj() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC24B0))(this);
	}
	template <typename T = bool> T DelInstanceObj() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC2B2C))(this);
	}
	template <typename T = bool> T DestroyIrrelevantObj() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC3020))(this);
	}
	template <typename T = void> T UpdateTimers() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC34B8))(this);
	}
	template <typename T = void> T UpdatePosition(float deltaTime) {
		return ((T (*)(BRPawnData*, float))(Il2CppBase() + 0x1AC3698))(this, deltaTime);
	}
	template <typename T = void> T TickReplicationData(float deltaTime) {
		return ((T (*)(BRPawnData*, float))(Il2CppBase() + 0x1AC37DC))(this, deltaTime);
	}
	template <typename T = void> T ClearData() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC3AD4))(this);
	}
	template <typename T = void> T DrawBaseData() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC3BC0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DependRelevant() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC4B08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetWaitProcessWeight() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC4B10))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsRelevant() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC4B18))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_AddInstanceObj() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC4B20))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DelInstanceObj() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC4B28))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DestroyIrrelevantObj() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC4B30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePosition(float P0) {
		return ((T (*)(BRPawnData*, float))(Il2CppBase() + 0x1AC4B38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplicationData(float P0) {
		return ((T (*)(BRPawnData*, float))(Il2CppBase() + 0x1AC4B40))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ClearData() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC4B48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DrawBaseData() {
		return ((T (*)(BRPawnData*))(Il2CppBase() + 0x1AC4B50))(this);
	}

};

}
