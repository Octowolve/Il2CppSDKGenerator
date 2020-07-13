#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BaseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BaseData"));
	}

	template <typename T = float> static T& IrrelevantTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_StartIrrelevantTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> static T& MaxIrrelevantTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_IrrelevantTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ArrRelevantRange() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& RelevantRange() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AttackableInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsVehicleData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& ServerPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& RelevantObjType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_IsServerRelevant() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_IsClientRelevant() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& m_CurRelevant() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = bool> T& IsWaitProcess() {
		return *(T*)((uintptr_t)this + 0x43);
	}
	template <typename T = int32_t> T& m_ForwardWeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_WaitProcessWeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> static T& FOVZoom2X() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FOVZoom4X() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& OpenDrawBaseData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_ServerObj() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_Position() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRelevantRangeInLowMemory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DependRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaitProcessWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRelevantChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInstanceObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelInstanceObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyIrrelevantObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRelevantRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplicationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBaseData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uint32_t> T get_ActorID() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B1BFC))(this);
	}
	template <typename T = bool> T ChangeRelevantRangeInLowMemory(uint32_t range) {
		return ((T (*)(BaseData*, uint32_t))(Il2CppBase() + 0x24B1C04))(this, range);
	}
	template <typename T = bool> T get_IsServerRelevant() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B1DE8))(this);
	}
	template <typename T = void> T set_IsServerRelevant(bool value) {
		return ((T (*)(BaseData*, bool))(Il2CppBase() + 0x24B1DF0))(this, value);
	}
	template <typename T = bool> T get_IsClientRelevant() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B1E04))(this);
	}
	template <typename T = bool> T get_CurRelevant() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B1E0C))(this);
	}
	template <typename T = float> T get_WaitProcessWeight() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B1E14))(this);
	}
	template <typename T = void> T set_WaitProcessWeight(float value) {
		return ((T (*)(BaseData*, float))(Il2CppBase() + 0x24B226C))(this, value);
	}
	template <typename T = bool> T IsForward() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B1E5C))(this);
	}
	template <typename T = bool> T DependRelevant() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B227C))(this);
	}
	template <typename T = void> T SetWaitProcessWeight() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B234C))(this);
	}
	template <typename T = bool> T IsRelevant() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B24F4))(this);
	}
	template <typename T = bool> T IsRelevantChange() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B26D4))(this);
	}
	template <typename T = bool> T AddInstanceObj() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B2804))(this);
	}
	template <typename T = bool> T DelInstanceObj() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B28D4))(this);
	}
	template <typename T = bool> T DestroyIrrelevantObj() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B2AE4))(this);
	}
	template <typename T = bool> T UpdateRelevant() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B2BB4))(this);
	}
	template <typename T = void> T ProcessRelevant() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B2DD4))(this);
	}
	template <typename T = void> T UpdatePosition(float deltaTime) {
		return ((T (*)(BaseData*, float))(Il2CppBase() + 0x24B2EE4))(this, deltaTime);
	}
	template <typename T = void> T UpdateRelevantRange(float cameraFov) {
		return ((T (*)(BaseData*, float))(Il2CppBase() + 0x24B2FF0))(this, cameraFov);
	}
	template <typename T = void> T TickReplicationData(float deltaTime) {
		return ((T (*)(BaseData*, float))(Il2CppBase() + 0x24B3278))(this, deltaTime);
	}
	template <typename T = void> T ClearData() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B3348))(this);
	}
	template <typename T = void> T DrawBaseData() {
		return ((T (*)(BaseData*))(Il2CppBase() + 0x24B34C4))(this);
	}

};

}
