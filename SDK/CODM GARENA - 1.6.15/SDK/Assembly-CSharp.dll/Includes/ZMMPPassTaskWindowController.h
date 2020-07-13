#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZMMPPassTaskWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZMMPPassTaskWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPassZMBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ZMMPPassTaskWindowController*))(Il2CppBase() + 0x4DD9794))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ZMMPPassTaskWindowController*))(Il2CppBase() + 0x4DD98A0))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t res) {
		return ((T (*)(ZMMPPassTaskWindowController*, uintptr_t))(Il2CppBase() + 0x4DD9944))(this, res);
	}
	template <typename T = void> T PlayPassZMBGM() {
		return ((T (*)(ZMMPPassTaskWindowController*))(Il2CppBase() + 0x4DDA1D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ZMMPPassTaskWindowController*))(Il2CppBase() + 0x4DDA32C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ZMMPPassTaskWindowController*))(Il2CppBase() + 0x4DDA334))(this);
	}

};

}
