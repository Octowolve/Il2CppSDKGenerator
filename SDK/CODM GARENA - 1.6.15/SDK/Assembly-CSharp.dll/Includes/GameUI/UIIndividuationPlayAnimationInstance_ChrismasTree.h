#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIIndividuationPlayAnimationInstanceChrismasTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIIndividuationPlayAnimationInstance_ChrismasTree"));
	}

	template <typename T = uintptr_t> T& m_TargetGo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_AssetId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_TickTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_AnimationTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_PostAnimtionTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PlayAnimation(Il2CppString* stateName) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceChrismasTree*, Il2CppString*))(Il2CppBase() + 0x3AED08C))(this, stateName);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(UIIndividuationPlayAnimationInstanceChrismasTree*))(Il2CppBase() + 0x3AED2C4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceChrismasTree*, float))(Il2CppBase() + 0x3AED404))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAnimation(Il2CppString* P0) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceChrismasTree*, Il2CppString*))(Il2CppBase() + 0x3AED9E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(UIIndividuationPlayAnimationInstanceChrismasTree*))(Il2CppBase() + 0x3AED9E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceChrismasTree*, float))(Il2CppBase() + 0x3AED9EC))(this, P0);
	}

};

}
