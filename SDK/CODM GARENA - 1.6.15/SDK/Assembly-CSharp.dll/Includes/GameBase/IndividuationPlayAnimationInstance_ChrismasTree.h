#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayAnimationInstanceChrismasTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayAnimationInstance_ChrismasTree"));
	}

	template <typename T = int32_t> T& m_CurrentSnowManAssetId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_ChrismasTree() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Renderers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPostPlayAnimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEnterIndividuationPlayTaskStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GatherRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceChrismasTree*))(Il2CppBase() + 0x1EFED9C))(this);
	}
	template <typename T = bool> T TryEnterIndividuationPlayTaskStage(uintptr_t stage) {
		return ((T (*)(IndividuationPlayAnimationInstanceChrismasTree*, uintptr_t))(Il2CppBase() + 0x1EFEE40))(this, stage);
	}
	template <typename T = void> T GatherRenderer(uintptr_t list) {
		return ((T (*)(IndividuationPlayAnimationInstanceChrismasTree*, uintptr_t))(Il2CppBase() + 0x1EFF2E4))(this, list);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceChrismasTree*))(Il2CppBase() + 0x1EFF45C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceChrismasTree*))(Il2CppBase() + 0x1EFF5DC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_TryEnterIndividuationPlayTaskStage(uintptr_t P0) {
		return ((T (*)(IndividuationPlayAnimationInstanceChrismasTree*, uintptr_t))(Il2CppBase() + 0x1EFF5E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GatherRenderer(uintptr_t P0) {
		return ((T (*)(IndividuationPlayAnimationInstanceChrismasTree*, uintptr_t))(Il2CppBase() + 0x1EFF5E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceChrismasTree*))(Il2CppBase() + 0x1EFF5E8))(this);
	}

};

}
