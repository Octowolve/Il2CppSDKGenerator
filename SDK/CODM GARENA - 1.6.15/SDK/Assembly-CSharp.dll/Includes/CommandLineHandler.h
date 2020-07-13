#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommandLineHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommandLineHandler"));
	}

	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> static T& MemoryList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& mFreeCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& UIRootPerspective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& UIRootGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& ToggleParticle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& EnableAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11);
	}
	template <typename T = uintptr_t> static T& oldMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& newMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPlayerCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRestart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessCommand_PerfAnalysis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> static T ProcessPlayerCommand(Il2CppString* command) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D343E0))(0, command);
	}
	template <typename T = uintptr_t> static T DoRestart() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D39A84))(0);
	}
	template <typename T = bool> static T ProcessCommand_PerfAnalysis(Il2CppString* command) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D38D68))(0, command);
	}
	template <typename T = uintptr_t> static T FindRenderer() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D39B80))(0);
	}
	template <typename T = uintptr_t> static T LoadShader() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D39CF8))(0);
	}

};

}
