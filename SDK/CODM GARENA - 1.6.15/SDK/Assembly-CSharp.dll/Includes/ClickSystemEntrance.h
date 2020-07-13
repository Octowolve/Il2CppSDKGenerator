#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClickSystemEntrance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClickSystemEntrance"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseButtonID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(ClickSystemEntrance*))(Il2CppBase() + 0x467452C))(this);
	}
	template <typename T = int32_t> T ParseButtonID(int32_t mainID, int32_t secondID, int32_t thirdID) {
		return ((T (*)(ClickSystemEntrance*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x46745A4))(this, mainID, secondID, thirdID);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(uintptr_t buttonID, int32_t secondID, int32_t thirdID, uint32_t goodID, uint64_t taskID) {
		return ((T (*)(ClickSystemEntrance*, uintptr_t, int32_t, int32_t, uint32_t, uint64_t))(Il2CppBase() + 0x46746AC))(this, buttonID, secondID, thirdID, goodID, taskID);
	}

};

}
