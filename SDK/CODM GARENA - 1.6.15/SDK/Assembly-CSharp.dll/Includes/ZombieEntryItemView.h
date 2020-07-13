#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZombieEntryItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZombieEntryItemView"));
	}

	template <typename T = uintptr_t> T& m_ZBSubType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_CallBack() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& WidgetRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WidgetLock() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelBtnName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BtnEntry() {
		return *(T*)((uintptr_t)this + 0x90);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZombieEntryItemView*))(Il2CppBase() + 0x4DDF5E8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZombieEntryItemView*))(Il2CppBase() + 0x4DDF700))(this);
	}
	template <typename T = void> T SetBtnState(uintptr_t conf, uintptr_t callBack) {
		return ((T (*)(ZombieEntryItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DDF804))(this, conf, callBack);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(ZombieEntryItemView*))(Il2CppBase() + 0x4DDF9C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZombieEntryItemView*))(Il2CppBase() + 0x4DDFAE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZombieEntryItemView*))(Il2CppBase() + 0x4DDFAF0))(this);
	}

};

}
