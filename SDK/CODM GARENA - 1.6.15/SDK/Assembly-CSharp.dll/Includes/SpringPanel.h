#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpringPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpringPanel"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& strength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onFinished() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mDrag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdvanceTowardsPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpringPanel*))(Il2CppBase() + 0x42EC378))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpringPanel*))(Il2CppBase() + 0x42EC468))(this);
	}
	template <typename T = void> T AdvanceTowardsPosition() {
		return ((T (*)(SpringPanel*))(Il2CppBase() + 0x42EC518))(this);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, Il2CppVector3 pos, float strength) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x42EC918))(0, go, pos, strength);
	}

};

}
