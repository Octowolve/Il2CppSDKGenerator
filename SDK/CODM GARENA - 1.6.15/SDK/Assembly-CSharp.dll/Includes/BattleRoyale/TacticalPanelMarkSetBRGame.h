#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class TacticalPanelMarkSetBRGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "TacticalPanelMarkSetBRGame"));
	}

	template <typename T = int32_t> static T& MAX_SAFE_AREA_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_GAS_AREA_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_UAV_AREA_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_UNPILOTED_AREA_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_SPARROW_AREA_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GasMaskPropertyID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SafeMaskPropertyID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SparrowMaskPropertyID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& UnpilotedMaskPropertyID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_RecordUnpilotedAreaCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_RecordGasAreaCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_RecordSafeAreaCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_RecordSparrowAreaCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_RecordLastBombID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_ForceUpdateAllArea() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& NONE_UNPILOTED_AREA() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& NONE_GAS_AREA() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& NONE_SAFE_AREA() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& NONE_UAV_AREA() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& NONE_SPARROW_AREA() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MarkShowEffect() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_LastForceUpdateAreaTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T set_ShouldUpdatePanelMark(bool value) {
		return ((T (*)(TacticalPanelMarkSetBRGame*, bool))(Il2CppBase() + 0x35AF7EC))(this, value);
	}
	template <typename T = uintptr_t> T get_MarkShowEffect() {
		return ((T (*)(TacticalPanelMarkSetBRGame*))(Il2CppBase() + 0x35AF7F4))(this);
	}
	template <typename T = void> T set_MarkShowEffect(uintptr_t value) {
		return ((T (*)(TacticalPanelMarkSetBRGame*, uintptr_t))(Il2CppBase() + 0x35AF7FC))(this, value);
	}
	template <typename T = void> T Initialize(uintptr_t inTVMView) {
		return ((T (*)(TacticalPanelMarkSetBRGame*, uintptr_t))(Il2CppBase() + 0x35AF804))(this, inTVMView);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(TacticalPanelMarkSetBRGame*))(Il2CppBase() + 0x35AFA8C))(this);
	}
	template <typename T = void> T UpdateCircle() {
		return ((T (*)(TacticalPanelMarkSetBRGame*))(Il2CppBase() + 0x35AFB3C))(this);
	}
	template <typename T = void> T OnViewShow() {
		return ((T (*)(TacticalPanelMarkSetBRGame*))(Il2CppBase() + 0x35B06C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Initialize(uintptr_t P0) {
		return ((T (*)(TacticalPanelMarkSetBRGame*, uintptr_t))(Il2CppBase() + 0x35B076C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateInfo() {
		return ((T (*)(TacticalPanelMarkSetBRGame*))(Il2CppBase() + 0x35B0774))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnViewShow() {
		return ((T (*)(TacticalPanelMarkSetBRGame*))(Il2CppBase() + 0x35B077C))(this);
	}

};

}
