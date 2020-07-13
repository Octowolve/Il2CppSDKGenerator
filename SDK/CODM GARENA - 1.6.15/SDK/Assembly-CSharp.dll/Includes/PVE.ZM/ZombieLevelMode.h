#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieLevelMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieLevelMode"));
	}

	template <typename T = int32_t> T& LevelID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ChapterID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LevelType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DropItemID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsLock() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& WinTimes() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
