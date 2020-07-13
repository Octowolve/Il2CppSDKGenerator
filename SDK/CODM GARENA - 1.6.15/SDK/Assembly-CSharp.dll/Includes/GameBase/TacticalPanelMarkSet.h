#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalPanelMarkSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalPanelMarkSet"));
	}

	template <typename T = uintptr_t> T& m_TVMView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ViewTarget() {
		return *(T*)((uintptr_t)this + 0x10);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ReceiveEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDatum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOBMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClassifyPawnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalClassifyPawnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SDClassifyPawnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClassifyMissileList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Initialize(uintptr_t inTVMView) {
		return ((T (*)(TacticalPanelMarkSet*, uintptr_t))(Il2CppBase() + 0x2796884))(this, inTVMView);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(TacticalPanelMarkSet*))(Il2CppBase() + 0x279692C))(this);
	}
	template <typename T = void> T ReceiveEvent(uintptr_t inMsg) {
		return ((T (*)(TacticalPanelMarkSet*, uintptr_t))(Il2CppBase() + 0x27969EC))(this, inMsg);
	}
	template <typename T = void> T ResetDatum() {
		return ((T (*)(TacticalPanelMarkSet*))(Il2CppBase() + 0x2796A8C))(this);
	}
	template <typename T = bool> T IsOBMode() {
		return ((T (*)(TacticalPanelMarkSet*))(Il2CppBase() + 0x2796B24))(this);
	}
	template <typename T = void> T ClassifyPawnList(uintptr_t outTeammateList, uintptr_t outEnemyList) {
		return ((T (*)(TacticalPanelMarkSet*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2796C80))(this, outTeammateList, outEnemyList);
	}
	template <typename T = void> T NormalClassifyPawnList(uintptr_t outTeammateList, uintptr_t outEnemyList) {
		return ((T (*)(TacticalPanelMarkSet*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2797090))(this, outTeammateList, outEnemyList);
	}
	template <typename T = void> T SDClassifyPawnList(uintptr_t outTeammateList, uintptr_t outEnemyList) {
		return ((T (*)(TacticalPanelMarkSet*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2796DD8))(this, outTeammateList, outEnemyList);
	}
	template <typename T = void> T ClassifyMissileList(uintptr_t outMissileList) {
		return ((T (*)(TacticalPanelMarkSet*, uintptr_t))(Il2CppBase() + 0x2797518))(this, outMissileList);
	}
	template <typename T = void> T OnViewShow() {
		return ((T (*)(TacticalPanelMarkSet*))(Il2CppBase() + 0x27977E8))(this);
	}

};

}
