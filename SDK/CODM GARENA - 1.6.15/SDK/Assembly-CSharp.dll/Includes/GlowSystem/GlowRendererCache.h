#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GlowSystem {

class GlowRendererCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GlowSystem", "GlowRendererCache"));
	}

	template <typename T = float> static T& transparentCutoff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& flags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& cullOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& sRenderType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& sOpaque() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& sTransparent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& sTransparentCutout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& sMainTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& waitForEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> T& cachedRenderer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& lastCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isAlive() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& endOfFrame() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillRenderObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColorForTransparent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZTestForTransparent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStencilRefForTransparent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(GlowRendererCache*))(Il2CppBase() + 0x3E2116C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GlowRendererCache*))(Il2CppBase() + 0x3E21364))(this);
	}
	template <typename T = void> T OnWillRenderObject() {
		return ((T (*)(GlowRendererCache*))(Il2CppBase() + 0x3E21450))(this);
	}
	template <typename T = uintptr_t> T EndOfFrame() {
		return ((T (*)(GlowRendererCache*))(Il2CppBase() + 0x3E21254))(this);
	}
	template <typename T = void> T Initialize(uintptr_t sharedOpaqueMaterial, uintptr_t transparentShader, bool seethough) {
		return ((T (*)(GlowRendererCache*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3E1E964))(this, sharedOpaqueMaterial, transparentShader, seethough);
	}
	template <typename T = bool> T FillBuffer(uintptr_t buffer) {
		return ((T (*)(GlowRendererCache*, uintptr_t))(Il2CppBase() + 0x3E1FEA8))(this, buffer);
	}
	template <typename T = void> T SetColorForTransparent(uintptr_t clr) {
		return ((T (*)(GlowRendererCache*, uintptr_t))(Il2CppBase() + 0x3E1F8F0))(this, clr);
	}
	template <typename T = void> T SetZTestForTransparent(int32_t zTest) {
		return ((T (*)(GlowRendererCache*, int32_t))(Il2CppBase() + 0x3E1F14C))(this, zTest);
	}
	template <typename T = void> T SetStencilRefForTransparent(int32_t stencilRef) {
		return ((T (*)(GlowRendererCache*, int32_t))(Il2CppBase() + 0x3E1F320))(this, stencilRef);
	}
	template <typename T = void> T SetState(bool alive) {
		return ((T (*)(GlowRendererCache*, bool))(Il2CppBase() + 0x3E1DF60))(this, alive);
	}

};

}
