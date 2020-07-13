#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class JumpConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "JumpConfig"));
	}

	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& jumpAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& prepAnim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& jumpStartNode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& jumpEndNode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& moveSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareTime() {
		return ((T (*)(JumpConfig*))(Il2CppBase() + 0x4600898))(this);
	}
	template <typename T = float> T get_jumpDuration() {
		return ((T (*)(JumpConfig*))(Il2CppBase() + 0x46008A8))(this);
	}
	template <typename T = Il2CppVector3> T get_jumpStartPos() {
		return ((T (*)(JumpConfig*))(Il2CppBase() + 0x46008B8))(this);
	}
	template <typename T = Il2CppVector3> T get_jumpEndPos() {
		return ((T (*)(JumpConfig*))(Il2CppBase() + 0x46009D0))(this);
	}

};

}
