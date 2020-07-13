#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICmdButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICmdButton"));
	}

	template <typename T = uintptr_t> T& CmdBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CmdDescLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& CmdContent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& CmdFunc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CmdAction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCmdBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UICmdButton*))(Il2CppBase() + 0x29D2810))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UICmdButton*))(Il2CppBase() + 0x29D29A0))(this);
	}
	template <typename T = void> T OnCmdBtnClick() {
		return ((T (*)(UICmdButton*))(Il2CppBase() + 0x29D2B30))(this);
	}

};

}
