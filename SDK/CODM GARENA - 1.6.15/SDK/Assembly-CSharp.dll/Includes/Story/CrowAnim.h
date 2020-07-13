#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class CrowAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "CrowAnim"));
	}

	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_DoActionIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayToFly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlytoTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CrowAnim*))(Il2CppBase() + 0x3956F10))(this);
	}
	template <typename T = void> T PlayAnimation(Il2CppString* animName) {
		return ((T (*)(CrowAnim*, Il2CppString*))(Il2CppBase() + 0x395556C))(this, animName);
	}
	template <typename T = uintptr_t> T DelayToFly(float sec, Il2CppString* animName) {
		return ((T (*)(CrowAnim*, float, Il2CppString*))(Il2CppBase() + 0x3956FA8))(this, sec, animName);
	}
	template <typename T = void> T FlytoTarget() {
		return ((T (*)(CrowAnim*))(Il2CppBase() + 0x39570C4))(this);
	}

};

}
