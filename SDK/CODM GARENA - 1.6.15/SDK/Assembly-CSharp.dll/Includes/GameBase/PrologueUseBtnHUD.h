#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PrologueUseBtnHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PrologueUseBtnHUD"));
	}

	template <typename T = Il2CppString*> static T& OnUseBtnClickName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& SwitchBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_HandlePress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PrologueUseBtnHUD*))(Il2CppBase() + 0x2DBBABC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PrologueUseBtnHUD*))(Il2CppBase() + 0x2DBBBE4))(this);
	}
	template <typename T = void> T HandlePress(uintptr_t go, bool state) {
		return ((T (*)(PrologueUseBtnHUD*, uintptr_t, bool))(Il2CppBase() + 0x2DBBCC8))(this, go, state);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PrologueUseBtnHUD*))(Il2CppBase() + 0x2DBBEC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PrologueUseBtnHUD*))(Il2CppBase() + 0x2DBBEC8))(this);
	}

};

}
