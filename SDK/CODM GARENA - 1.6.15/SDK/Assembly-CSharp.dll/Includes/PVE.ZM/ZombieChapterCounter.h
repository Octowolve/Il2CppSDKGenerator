#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieChapterCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieChapterCounter"));
	}

	template <typename T = uintptr_t> T& LeftLine() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& FullLeftWidth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RightLine() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& FullRightWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& DotGrid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Dots() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DotWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mDotNumber() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZombieChapterCounter*))(Il2CppBase() + 0x4063028))(this);
	}
	template <typename T = void> T Configure(int32_t all, int32_t current) {
		return ((T (*)(ZombieChapterCounter*, int32_t, int32_t))(Il2CppBase() + 0x406320C))(this, all, current);
	}

};

}
