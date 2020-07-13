#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayAnimationInstanceSnowMan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayAnimationInstance_SnowMan"));
	}

	template <typename T = int32_t> T& m_CurrentSnowManAssetId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_SnowManAsset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Renderers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_SnowMan() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPostPlayAnimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GatherRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEnterIndividuationPlayTaskStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnLoad(int32_t id, uintptr_t inObj) {
		return ((T (*)(IndividuationPlayAnimationInstanceSnowMan*, int32_t, uintptr_t))(Il2CppBase() + 0x1F03934))(this, id, inObj);
	}
	template <typename T = float> T GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceSnowMan*))(Il2CppBase() + 0x1F03A50))(this);
	}
	template <typename T = void> T GatherRenderer(uintptr_t list) {
		return ((T (*)(IndividuationPlayAnimationInstanceSnowMan*, uintptr_t))(Il2CppBase() + 0x1F03AF4))(this, list);
	}
	template <typename T = bool> T TryEnterIndividuationPlayTaskStage(uintptr_t stage) {
		return ((T (*)(IndividuationPlayAnimationInstanceSnowMan*, uintptr_t))(Il2CppBase() + 0x1F03C6C))(this, stage);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceSnowMan*))(Il2CppBase() + 0x1F042D8))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceSnowMan*))(Il2CppBase() + 0x1F04468))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GatherRenderer(uintptr_t P0) {
		return ((T (*)(IndividuationPlayAnimationInstanceSnowMan*, uintptr_t))(Il2CppBase() + 0x1F0446C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_TryEnterIndividuationPlayTaskStage(uintptr_t P0) {
		return ((T (*)(IndividuationPlayAnimationInstanceSnowMan*, uintptr_t))(Il2CppBase() + 0x1F04470))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceSnowMan*))(Il2CppBase() + 0x1F04474))(this);
	}

};

}
