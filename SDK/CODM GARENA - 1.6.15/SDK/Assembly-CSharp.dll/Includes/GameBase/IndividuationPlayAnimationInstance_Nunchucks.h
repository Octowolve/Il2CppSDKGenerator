#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayAnimationInstanceNunchucks
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayAnimationInstance_Nunchucks"));
	}

	template <typename T = int32_t> T& m_WeaponAssetId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_WeaponTargetGo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_TimeTick() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& RootBone() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bones() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPostPlayAnimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEnterIndividuationPlayTaskStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceNunchucks*))(Il2CppBase() + 0x1F027F0))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(IndividuationPlayAnimationInstanceNunchucks*))(Il2CppBase() + 0x1F02890))(this);
	}
	template <typename T = bool> T TryEnterIndividuationPlayTaskStage(uintptr_t stage) {
		return ((T (*)(IndividuationPlayAnimationInstanceNunchucks*, uintptr_t))(Il2CppBase() + 0x1F02928))(this, stage);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceNunchucks*))(Il2CppBase() + 0x1F0316C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceNunchucks*))(Il2CppBase() + 0x1F03738))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick() {
		return ((T (*)(IndividuationPlayAnimationInstanceNunchucks*))(Il2CppBase() + 0x1F0373C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_TryEnterIndividuationPlayTaskStage(uintptr_t P0) {
		return ((T (*)(IndividuationPlayAnimationInstanceNunchucks*, uintptr_t))(Il2CppBase() + 0x1F03740))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceNunchucks*))(Il2CppBase() + 0x1F03744))(this);
	}

};

}
