#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayAnimationInstanceHead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayAnimationInstance_Head"));
	}

	template <typename T = int32_t> T& m_AssetId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_HeartFingerAssetID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_TargetGo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_TargetHeartFingerGoL() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_TargetHeartFingerGoR() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_TimeTick() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPostPlayAnimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GatherRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEnterIndividuationPlayTaskStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = float> T GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*))(Il2CppBase() + 0x1F012D8))(this);
	}
	template <typename T = void> T GatherRenderer(uintptr_t list) {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*, uintptr_t))(Il2CppBase() + 0x1F01378))(this, list);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*))(Il2CppBase() + 0x1F0164C))(this);
	}
	template <typename T = bool> T TryEnterIndividuationPlayTaskStage(uintptr_t stage) {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*, uintptr_t))(Il2CppBase() + 0x1F01830))(this, stage);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*))(Il2CppBase() + 0x1F02330))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*))(Il2CppBase() + 0x1F025D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GatherRenderer(uintptr_t P0) {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*, uintptr_t))(Il2CppBase() + 0x1F025D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick() {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*))(Il2CppBase() + 0x1F025D8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_TryEnterIndividuationPlayTaskStage(uintptr_t P0) {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*, uintptr_t))(Il2CppBase() + 0x1F025DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceHead*))(Il2CppBase() + 0x1F025E0))(this);
	}

};

}
