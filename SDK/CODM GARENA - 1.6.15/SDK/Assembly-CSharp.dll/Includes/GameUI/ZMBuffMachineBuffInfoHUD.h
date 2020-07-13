#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMBuffMachineBuffInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMBuffMachineBuffInfoHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& BuyBuffs() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BuyBuffLevels() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefeshBuffs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMBuffMachineBuffInfoHUD*))(Il2CppBase() + 0x2A439FC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMBuffMachineBuffInfoHUD*))(Il2CppBase() + 0x2A43B10))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ZMBuffMachineBuffInfoHUD*))(Il2CppBase() + 0x2A43BCC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMBuffMachineBuffInfoHUD*))(Il2CppBase() + 0x2A43D10))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMBuffMachineBuffInfoHUD*))(Il2CppBase() + 0x2A43D18))(this);
	}
	template <typename T = void> T OnNotifyRefeshBuffs(uintptr_t Msg) {
		return ((T (*)(ZMBuffMachineBuffInfoHUD*, uintptr_t))(Il2CppBase() + 0x2A43D24))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMBuffMachineBuffInfoHUD*))(Il2CppBase() + 0x2A44194))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMBuffMachineBuffInfoHUD*))(Il2CppBase() + 0x2A4419C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMBuffMachineBuffInfoHUD*))(Il2CppBase() + 0x2A441A4))(this);
	}

};

}
