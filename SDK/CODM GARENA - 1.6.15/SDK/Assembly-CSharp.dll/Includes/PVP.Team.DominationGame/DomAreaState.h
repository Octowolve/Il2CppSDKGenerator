#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class DomAreaState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "DomAreaState"));
	}

	template <typename T = uintptr_t> T& m_DomVolume() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_OccupiedCamp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_AttackCamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_LastAreaState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_ForwardTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDomVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaitSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOccupied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateContested() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateForwardWait() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBackwardWait() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_AreaID() {
		return ((T (*)(DomAreaState*))(Il2CppBase() + 0x2B31550))(this);
	}
	template <typename T = uintptr_t> T get_OccupiedCamp() {
		return ((T (*)(DomAreaState*))(Il2CppBase() + 0x2B3162C))(this);
	}
	template <typename T = uintptr_t> T get_AttackCamp() {
		return ((T (*)(DomAreaState*))(Il2CppBase() + 0x2B31634))(this);
	}
	template <typename T = uintptr_t> T get_AreaState() {
		return ((T (*)(DomAreaState*))(Il2CppBase() + 0x2B3163C))(this);
	}
	template <typename T = float> T get_Rate() {
		return ((T (*)(DomAreaState*))(Il2CppBase() + 0x2B31644))(this);
	}
	template <typename T = float> T get_Speed() {
		return ((T (*)(DomAreaState*))(Il2CppBase() + 0x2B31674))(this);
	}
	template <typename T = void> T SetDomVolume(uintptr_t domVolume) {
		return ((T (*)(DomAreaState*, uintptr_t))(Il2CppBase() + 0x2B2E9C4))(this, domVolume);
	}
	template <typename T = void> T Update(float delaTime) {
		return ((T (*)(DomAreaState*, float))(Il2CppBase() + 0x2B320A8))(this, delaTime);
	}
	template <typename T = float> T GetWaitSpeed(int32_t num, bool forward) {
		return ((T (*)(DomAreaState*, int32_t, bool))(Il2CppBase() + 0x2B32964))(this, num, forward);
	}
	template <typename T = uintptr_t> T UpdateOccupied(bool hasPawn, uintptr_t camp) {
		return ((T (*)(DomAreaState*, bool, uintptr_t))(Il2CppBase() + 0x2B325A8))(this, hasPawn, camp);
	}
	template <typename T = uintptr_t> T UpdateContested(bool hasPawn, uintptr_t camp) {
		return ((T (*)(DomAreaState*, bool, uintptr_t))(Il2CppBase() + 0x2B32684))(this, hasPawn, camp);
	}
	template <typename T = uintptr_t> T UpdateForwardWait(bool hasPawn, uintptr_t camp) {
		return ((T (*)(DomAreaState*, bool, uintptr_t))(Il2CppBase() + 0x2B32794))(this, hasPawn, camp);
	}
	template <typename T = uintptr_t> T UpdateBackwardWait(bool hasPawn, uintptr_t camp) {
		return ((T (*)(DomAreaState*, bool, uintptr_t))(Il2CppBase() + 0x2B3287C))(this, hasPawn, camp);
	}

};

}
