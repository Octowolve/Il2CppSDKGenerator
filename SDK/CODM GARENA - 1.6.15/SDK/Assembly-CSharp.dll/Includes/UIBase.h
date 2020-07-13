#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIBase"));
	}

	template <typename T = bool> T& mInited() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CallBackAfterInited() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Inited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ForceUpdate(bool recursive) {
		return ((T (*)(UIBase*, bool))(Il2CppBase() + 0x4260538))(this, recursive);
	}
	template <typename T = bool> T get_bInited() {
		return ((T (*)(UIBase*))(Il2CppBase() + 0x4260114))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CallBackAfterInited() {
		return ((T (*)(UIBase*))(Il2CppBase() + 0x426011C))(this);
	}
	template <typename T = void> T Inited() {
		return ((T (*)(UIBase*))(Il2CppBase() + 0x42601CC))(this);
	}

};

}
