#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneFsmManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneFsmManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& SceneFsmList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& subFSMs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRunningSubFSM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_SceneFsmList() {
		return ((T (*)(SceneFsmManager*))(Il2CppBase() + 0x3BF9668))(this);
	}
	template <typename T = void> T set_SceneFsmList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SceneFsmManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3BF9670))(this, value);
	}
	template <typename T = void> T AddRunningSubFSM(uintptr_t fsm) {
		return ((T (*)(SceneFsmManager*, uintptr_t))(Il2CppBase() + 0x3BF9678))(this, fsm);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SceneFsmManager*))(Il2CppBase() + 0x3BF9758))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SceneFsmManager*))(Il2CppBase() + 0x3BF9860))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SceneFsmManager*))(Il2CppBase() + 0x3BF99E0))(this);
	}

};

}
