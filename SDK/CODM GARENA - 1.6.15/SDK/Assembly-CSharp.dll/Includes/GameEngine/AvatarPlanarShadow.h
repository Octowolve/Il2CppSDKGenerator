#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarPlanarShadow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarPlanarShadow"));
	}

	template <typename T = uintptr_t> T& TraceStart() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& DrawDebug() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ShadowLightTransform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ShadowColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ForceShaderLOD() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RendererToProjectShadows() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mWorld2Receiver() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppQuaternion> T& mPlaneRot() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mDownRay() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& mCollisionOffset() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> static T& PlanarShadowKeyword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PlanarShadowMatTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlanarShadowRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlanarShadowRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ResetPlanarShadowRenderer() {
		return ((T (*)(AvatarPlanarShadow*))(Il2CppBase() + 0x36070A4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AvatarPlanarShadow*))(Il2CppBase() + 0x36074C0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AvatarPlanarShadow*))(Il2CppBase() + 0x36078B8))(this);
	}
	template <typename T = void> T AddPlanarShadowRenderer(uintptr_t inRenderer) {
		return ((T (*)(AvatarPlanarShadow*, uintptr_t))(Il2CppBase() + 0x3607CB0))(this, inRenderer);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AvatarPlanarShadow*))(Il2CppBase() + 0x3608098))(this);
	}

};

}
