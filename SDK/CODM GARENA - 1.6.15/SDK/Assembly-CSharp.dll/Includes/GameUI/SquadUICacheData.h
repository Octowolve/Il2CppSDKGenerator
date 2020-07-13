#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SquadUICacheData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SquadUICacheData"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_NeedShowLoadoutSPIUpEffect() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_NeedShowSquadSPIUpEffect() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& m_UpgradeLoadoutFromBox() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& m_NeedCheckCanSquadSPIRaise() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CarryingZombieList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_bEnterFromWhere() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_NeedShowLoadoutSPIUpEffect() {
		return ((T (*)(SquadUICacheData*))(Il2CppBase() + 0x299CB04))(this);
	}
	template <typename T = void> T set_NeedShowLoadoutSPIUpEffect(bool value) {
		return ((T (*)(SquadUICacheData*, bool))(Il2CppBase() + 0x299CB0C))(this, value);
	}
	template <typename T = bool> T get_NeedShowSquadSPIUpEffect() {
		return ((T (*)(SquadUICacheData*))(Il2CppBase() + 0x299CB14))(this);
	}
	template <typename T = void> T set_NeedShowSquadSPIUpEffect(bool value) {
		return ((T (*)(SquadUICacheData*, bool))(Il2CppBase() + 0x299CB1C))(this, value);
	}
	template <typename T = bool> T get_UpgradeLoadoutFromBox() {
		return ((T (*)(SquadUICacheData*))(Il2CppBase() + 0x299CB24))(this);
	}
	template <typename T = void> T set_UpgradeLoadoutFromBox(bool value) {
		return ((T (*)(SquadUICacheData*, bool))(Il2CppBase() + 0x299CB2C))(this, value);
	}
	template <typename T = bool> T get_NeedCheckCanSquadSPIRaise() {
		return ((T (*)(SquadUICacheData*))(Il2CppBase() + 0x299CB34))(this);
	}
	template <typename T = void> T set_NeedCheckCanSquadSPIRaise(bool value) {
		return ((T (*)(SquadUICacheData*, bool))(Il2CppBase() + 0x299CB3C))(this, value);
	}
	template <typename T = uintptr_t> T get_bEnterFromWhere() {
		return ((T (*)(SquadUICacheData*))(Il2CppBase() + 0x299CB44))(this);
	}
	template <typename T = void> T set_bEnterFromWhere(uintptr_t value) {
		return ((T (*)(SquadUICacheData*, uintptr_t))(Il2CppBase() + 0x299CB4C))(this, value);
	}

};

}
