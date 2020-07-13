#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaServerControlConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaServerControlConfig"));
	}

	template <typename T = bool> T& enableControl() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LuaExecuatablePath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mainScriptPath() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& szLuaExpoertName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& waitForDebugger() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
