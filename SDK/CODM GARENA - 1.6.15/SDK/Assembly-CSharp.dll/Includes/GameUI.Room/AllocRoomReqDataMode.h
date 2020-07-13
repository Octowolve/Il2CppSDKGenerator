#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class AllocRoomReqDataMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "AllocRoomReqDataMode"));
	}

	template <typename T = uintptr_t> T& GameMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& LevelID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MissionID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bQuickType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Clone(uintptr_t oldObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ACD730))(0, oldObj);
	}

};

}
